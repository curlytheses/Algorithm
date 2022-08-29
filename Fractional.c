#include <stdio.h>
#include <stdlib.h>
#define MAX 100
void FKnapsack()
{
    int curweight;
    float totvalue;
    int i, imax;
    int n, c[MAX], v[MAX], W;
    printf("Enter the number of objects :");
    scanf("%d", &n);
    if (n == 0)
    {
        printf("NO OBJECT EXIST !!");
        exit(0);
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            printf("Enter the weight & values of object %d :", i + 1);
            scanf("%d%d", &c[i], &v[i]);
        }
        printf("Enter the max weight you can take :");
        scanf("%d", &W);
        int occupied[W];
        for (i = 0; i < n; ++i)
            occupied[i] = 0;
        curweight = W;
        while (curweight > 0)
        {
            imax = -1;
            for (i = 0; i < n; ++i)
                if ((occupied[i] == 0) &&
                    ((imax == -1) || ((float)v[i] / c[i] > (float)v[imax] / c[imax])))
                    imax = i;
            occupied[imax] = 1;
            curweight -= c[imax];
            totvalue += v[imax];
            if (curweight >= 0)
                printf("Added object %d (%d$, %dKg) completely in the bag. Space left: %d.\n", imax + 1, v[imax], c[imax], curweight);
            else
            {
                printf("Added %d%% (%d$, %dKg) of object %d in the bag.\n", (int)((1 + (float)curweight / c[imax]) * 100), v[imax], c[imax], imax + 1);
                totvalue -= v[imax];
                totvalue += (1 + (float)curweight / c[imax]) * v[imax];
            }
        }
        printf("Filled the bag with objects worth %.4f$.\n", totvalue);
    }
}
int main(int argc, char *argv[])
{
    FKnapsack();
}