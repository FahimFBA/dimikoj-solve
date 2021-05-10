#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int test_case, i , j, n;
    cin >> test_case; // taking the value for the test case

    // for loop for the test case
    for ( i = 1; i <= test_case ; i++ )
    {
        cin >> n; // taking value for each test case
        cout << "Case " << i << ":";
        // inner for loop for each test case

        for ( j = 1; j <= n ; j++)
        {
            // conditions
            if ( n % j == 0 )
            {
                cout << " " << j;
            }
        }
        cout << endl;
    }

        return 0;

}