#include <bits/stdc++.h>

void Fibonacci(int num) {
	
   int x = 0, y = 1, z = 0;
   for (int i = 0; i < num; i++) {
		std::cout << x << " ";
		z = x + y;
    	x = y;
      	y = z;
   }
}
int main() {
	
   int num;
   std::cout<<"Enter a Number of Series : ";
   std::cin>>num;
   std::cout<<"The Fibonacci Series of the Given Number is : ";
   Fibonacci(num);
   return 0;
}
