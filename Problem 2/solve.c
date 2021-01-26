#include<stdio.h>
int main()
{
    int test_case, i;
    char n[101];
    scanf("%d" , &test_case);
    for(i=1;i<=test_case;i++)
    {
        scanf("%s", &n);
        int length=strlen(n);
        int last_digit=n[length-1]-48;
        if(last_digit%2==0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }
    return 0;
}