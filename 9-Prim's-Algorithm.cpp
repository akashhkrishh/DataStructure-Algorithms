#include<bits/stdc++.h>
using namespace std;
#define V 5	 

int selectmin(vector<int>& value,vector<bool>& setMST){
    int min=INT_MAX;
    int vertex;
    for(int i=0;i<V;i++){
        if(setMST[i]==false && min>value[i]){
            vertex=i;
            min=value[i];
        }
    }
    return vertex;
}

void findMST(int graph[V][V]){
    int parent[V];
    vector<int> value(V,INT_MAX);
    vector<bool> setMST(V,false);
    parent[0]=-1;
    value[0]=0;
    
    for(int i=0;i<V-1;i++){
        int U = selectmin(value,setMST);
		setMST[U] = true;	          
		for(int j=0;j<V;j++){
		    if(graph[U][j]!=0 && setMST[j]==false && graph[U][j]<value[j]){
				value[j] = graph[U][j];
				parent[j] = U;
			}
		}
	}
    cout <<"Edge"<< "   : "<< "Weight\n";;
    for(int i=1;i<V;i++){
        cout<<parent[i]<<" -> "<<i<<" :   "<<graph[parent[i]][i]<<"\n";
	}
}
int main(){
	int graph[V][V] = {{0, 9, 75, 0, 0},
	                   {9, 0, 95, 19, 42},
	                   {75, 95, 0, 51, 66},
	                   {0, 19, 51, 0, 31},
                           {0, 42, 66, 31, 0}};

	findMST(graph);	
	return 0;
}
