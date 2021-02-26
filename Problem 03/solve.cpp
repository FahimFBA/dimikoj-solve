#include<iostream>
using namespace std;
int main()
{
    int i, j = 0;
    for (i=1000; i>0; i--)
    {
        cout << i << "\t"; // '\t' is for tab key = 4 spaces
        j++;
        if (j % 5 == 0)
        cout << "\n";

    }
    return 0;
}