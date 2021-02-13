#include <iostream>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == k)
        {
            int j = i + 1;
            int ii = 1;
            bool inc = 1;
            while (1)
            {
                if (arr[j] == k - ii)
                {
                    if (arr[j] == 1)
                        break;
                    ++ii;
                    ++j;
                }
                else
                {
                    inc = 0;
                    break;
                }
            }
            if (inc)
                ++ans;
        }
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T; // for T test cases
    cin >> T;
    int C = 0; // for curent testcase
    while (T--)
    {
        C++;
        cout << "Case #" << C << ": ";
        solve();
    }
    return 0;
}