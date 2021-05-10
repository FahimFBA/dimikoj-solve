#include<iostream>
using namespace std;

int main ()
{
    int t, i, v;
    cin >> t; // taking input for the test case

    // for loop

    for (i = 1 ; i <= t ; i++)
    {
        cin >> v;

        // condition check

        if ( v % 2 == 0 )
        cout << "even" << endl;

        else
        cout << "odd" << endl;
    }

    return 0;
}