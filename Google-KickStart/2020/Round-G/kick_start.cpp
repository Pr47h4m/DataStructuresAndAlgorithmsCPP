#include <iostream>

using namespace std;

void solve()
{
    string str;
    cin >> str;
    int ans = 0;
    int kicks = 0;
    for (int i = 0; i < str.length(); ++i)
    {
        if (str.substr(i, 4) == "KICK")
            ++kicks;
        if (str.substr(i, 5) == "START")
            ans += kicks;
    }
    cout << ans << endl;
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