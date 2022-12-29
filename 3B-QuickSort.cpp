#include <bits/stdc++.h>

void printArray(int arr[],int n){
		for(int i=0;i<n;i++){
			std::cout<<arr[i]<<" ";
	}	
}
void getArray(int arr[],int n){
	for(int i=0;i<n;i++){
		std::cin>>arr[i];
	}
}

void quickSort(int arr[],int low,int high){
	if(low>=high)
		return;
	int start=low;
	int end=high;
	int mid=(start+end)/2;
	int pivot=arr[mid];

	while(start<=end){
		while(arr[start]<pivot)
			start++;
		while(arr[end]>pivot)
			end--;
		if(start<=end){

			int temp=arr[start];
			arr[start]=arr[end];
			arr[end]=temp;
			start++;
			end--;
		}
	}
	quickSort(arr,low,end);
	quickSort(arr,start,high);
}

int main(){
	
	int n;
	std::cout<<"Enter the Number of Elements: ";
	std::cin>>n;
	int arr[n];
	std::cout<<"Enter the  Elements: ";
	getArray(arr,n);
	std::cout<<"The Array Before Sorting :\n\t";
	printArray(arr,n);
	quickSort(arr,0,n-1);
	std::cout<<"\nThe Array After Sorting :\n\t";
	printArray(arr,n);
	
	return 0;
}

