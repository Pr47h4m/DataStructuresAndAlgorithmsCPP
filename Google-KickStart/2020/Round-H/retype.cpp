#include <iostream>

using namespace std;

void solve()
{
    long a, b, c;
    cin >> a >> b >> c;
    long time = (b - 1) + b - c + (a - c + 1);
    if (time > (a + b))
        time = a + b;
    cout << time << endl;
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