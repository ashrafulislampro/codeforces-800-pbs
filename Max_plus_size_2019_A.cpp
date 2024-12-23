#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0, f_ele, max = INT_MIN;
        cin >> n;
        int *arr = new int[n]();
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n;)
        {
            f_ele = arr[0];
            if (arr[i] < f_ele)
            {
                i++;
                continue;
            }
            else
            {
                count++;
                if (arr[i] > max)
                {
                    max = arr[i];
                }
            };

            i += 2;
        }
        if (count % 2 == 0)
        {
            cout << max + (n / 2) + 1 << endl;
        }
        else
        {
            cout << max + count << endl;
        }
    }
    return 0;
}