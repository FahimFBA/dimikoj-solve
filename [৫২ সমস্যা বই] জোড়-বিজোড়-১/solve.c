#include<stdio.h>
int main()
{
    int t, v, i;
    scanf("%d" , &t);
    // for loop
    for (i=1 ; i <= t ; i++)
    {
        scanf("%d" , &v);

        // condition checking

        if (v % 2 == 0)
        printf("even\n");
        else
        printf("odd\n");
    }

    return 0;
}