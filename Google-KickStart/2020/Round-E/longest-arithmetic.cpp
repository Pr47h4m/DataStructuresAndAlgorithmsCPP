#include <iostream>
#include <cmath>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int d, pcd = arr[1] - arr[0];
    int len = 2, maxLen = 2;
    for (int i = 2; i < n; ++i)
    {
        d = arr[i] - arr[i - 1];
        if (d == pcd)
        {
            ++len;
            maxLen = max(len, maxLen);
        }
        else
        {
            len = 2;
            pcd = d;
        }
    }
    cout << maxLen << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    int C = 0;
    while (T--)
    {
        C++;
        cout << "Case #" << C << ": ";
        solve();
    }
    return 0;
}
