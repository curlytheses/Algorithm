#include <stdio.h>
#include <stdlib.h>
int fibo(int n)
{
	if (n <= 1)
		return n;
    else
	    return fib(n - 1) + fib(n - 2);
}
int main()
{
	int n,i;
    printf("Entr the value of n :");
    scanf("%d",&n);
	for(i=0;i<n;i++) 
    printf("%d ",fib(n));            
	return 0;
}
