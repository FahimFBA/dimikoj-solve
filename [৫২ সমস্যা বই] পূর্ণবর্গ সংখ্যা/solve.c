#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int test_case, n;
    scanf("%d", &test_case);
    for (int j = 0; j < test_case; ++j)
    {
        scanf("%d", &n);
        int Square_root = sqrt(n);
        if (pow(Square_root, 2) == n)
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
}