#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;
    while (t--)
    {
        int n;
        string str;
        cin >> n;
        cin.ignore();
        vector<int> arr;
        for (int i = 1; i <= n; i++)
        {
            getline(cin, str);
            for (int j = 1; j <= 4; j++)
            {

                if (str[j - 1] == '#')
                {

                    arr.insert(arr.begin(), j);
                }
            }
        }
        for (int ele : arr)
        {
            cout << ele << " ";
        }
        cout << endl;
    }

    return 0;
}