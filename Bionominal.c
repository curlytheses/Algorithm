#include <stdio.h>
int binomial(int n, int k)
{
	if (k > n)
		return 0;
	if (k == 0 || k == n)
		return 1;
	return binomial(n - 1, k - 1) + binomial(n - 1, k);
}
int main()
{
	int n, k;
    printf("Enter the value of N:");
    scanf("%d",&n);
    printf("Enter the value of K:");
    scanf("%d",&k);
	printf("Value of C(%d, %d) is %d ", n, k, binomial(n, k));
	return 0;
}
