#include <iostream>
using namespace std;

int main()
{
    int test_case, k, value, i, j;
    cin >> test_case;
    for (k = 0; k < test_case; k++)
    {
        cin >> value;
        for (i = 0; i < value; i++)
        {

            for (j = 0; j < value; j++)
            {
                cout << "*";
            }
            cout << "\n";
        }

        // We don't want new line after the last test case

        if (k < test_case - 1)
        {
            cout << "\n";
        }
    }
    return 0;
}