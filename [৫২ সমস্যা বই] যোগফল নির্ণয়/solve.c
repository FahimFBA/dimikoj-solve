#include <stdio.h>
int main()
{
    int test_case, i, LSD, MSD, n;
    scanf("%d", &test_case);
    for (i = 0; i < test_case; i++)
    {
        scanf("%d", &n);
        LSD = n % 10;
        while (n != 0)
        {
            MSD = n % 10;
            n = n / 10;
        }
        int sum = MSD + LSD;
        printf("Sum = %d\n", sum);
    }
}