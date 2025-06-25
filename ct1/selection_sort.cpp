#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    };

    // Selection sort -> select the smallest element and place it to the left;
    for (int i = 0; i < n - 1; i++)
    {
        int minind = i;

        for (int j = i + 1; j < n; j++)
        {
            if (v[j] < v[minind])
                minind = j;
        };
        if (minind != i)
        {
            int temp = v[i];
            v[i] = v[minind];
            v[minind] = temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
