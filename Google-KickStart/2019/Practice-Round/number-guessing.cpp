#include <iostream>

using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    int n;
    cin >> n;
    string res;
    while (n-- && res != "CORRECT" && res != "WRONG_ANSWER")
    {
        cout << (a + b + 1) / 2 << endl;
        cin >> res;
        if (res == "TOO_SMALL")
        {
            a = (a + b + 1) / 2 + 1;
        }
        else if (res == "TOO_BIG")
        {
            b = (a + b + 1) / 2 - 1;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T; // for t testcases
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}