#include <stdio.h>
#include <stdlib.h>
// C program to find the Nth term
// of Fibonacci series
// Fibonacci Series using Recursion
int fibo(int n)
{
	// Base case
	if (n <= 1)
		return n;
    // recursive calls
    else
	    return fib(n - 1) + fib(n - 2);
}
// Driver Code
int main()
{
	int n,i;
    printf("Entr the value of n :");
    scanf("%d",&n);
	for(i=0;i<n;i++) 
    printf("%d ",fib(n));            
	return 0;
}
