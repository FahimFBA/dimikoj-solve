#include<stdio.h>

int main()
{
    int i, j = 0;
    for (i=1000; i>0; i--)
    {
        printf("%d\t" , i); // '\t' is for tab key = 4 spaces
        j++;
        if (j % 5 == 0)
        printf("\n");
    }
    return 0;
}