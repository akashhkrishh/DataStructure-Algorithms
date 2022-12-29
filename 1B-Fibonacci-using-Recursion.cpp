#include <bits/stdc++.h>

int Fibonacci(int x){
	if((x==0)|| (x==1))
	return x;
	else
	return (Fibonacci(x-1)+Fibonacci(x-2));
}

int main(){
	int n,i=0;
	std::cout<<"Enter a Number of Series : ";
	std::cin>>n;
	std::cout<<"The Fibonacci Series of the Given Number is : ";
	while(i<n){
        std::cout<<" "<<Fibonacci(i);
        i++;
		}
}
