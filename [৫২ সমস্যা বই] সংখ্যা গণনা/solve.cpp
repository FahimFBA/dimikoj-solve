#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test_case;
    string s;
    cin >> test_case;
    cin.ignore();
    for (int i = 0; i < test_case; i++)
    {
        getline(cin, s);
        int count = 0;
        for (i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == ' ' && s[i] != ' ')
            {
                count++;
            }
        }
        cout << count + 1 << endl;
    }
}