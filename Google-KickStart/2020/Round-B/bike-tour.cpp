#include <iostream>

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
    int ans = 0;
    for (int i = 1; i < n - 1; ++i)
    {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
        {
            ++ans;
        }
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T; // for T testcases
    cin >> T;
    int C = 0; // for current testcase
    while (T--)
    {
        C++;
        cout << "Case #" << C << ": ";
        solve();
    }
    return 0;
}