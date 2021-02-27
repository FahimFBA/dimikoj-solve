#include<stdio.h>
int main()
{
    int test_case, i, j, n;
    scanf("%d", &test_case); // test case

    // for loop for the test case

    for (i = 1; i <= test_case; i++)
    {
        // taking value each time the loop iterates

        scanf("%d" , &n);
        printf("Case %d:" , i);

        // inner for loop for applying our target

        for (j = 1; j <= n; j++)
        {
            // applying the necessary conditions
            
            if (n % j == 0)
        {
            printf(" %d", j);
            
        }
        
        }
            printf("\n");
    
    }
                return 0;
}