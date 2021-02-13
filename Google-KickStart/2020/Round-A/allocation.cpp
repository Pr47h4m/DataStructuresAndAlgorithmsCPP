#include <iostream>
#include <algorithm>

using namespace std;

void solve()
{
    int n, b; // for n houses and dollars to spend
    cin >> n >> b;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] <= b)
        {
            ans++;
            b -= arr[i];
        }
        else
        {
            break;
        }
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T; // for t testcases
    cin >> T;
    int C = 0;
    while (T--)
    {
        C++;
        cout << "Case #" << C << ": ";
        solve();
    }
}