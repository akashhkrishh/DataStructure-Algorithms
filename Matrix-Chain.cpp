#include<bits/stdc++.h>
using namespace std;
int mat(int a[], int n){
   int minMul[n][n];
   for (int i=1; i<n; i++)
      minMul[i][i] = 0;
      for (int len=2; len<n; len++){
         for (int i=1; i<n-len+1; i++){
            int j = i+len-1;
            minMul[i][j] = INT_MAX; 
            for (int k=i; k<=j-1; k++){
               int q = minMul[i][k] + minMul[k+1][j] + a[i-1]*a[k]*a[j];
               if (q < minMul[i][j])
                  minMul[i][j] = q;
            }
      }
   }
   return minMul[1][n-1];
}
int main(){
   int arr[] = {1, 2, 3, 4};
   int size = sizeof(arr)/sizeof(arr[0]);
   cout << "Minimum number of matrix multiplications: "<<mat(arr, size);
}
