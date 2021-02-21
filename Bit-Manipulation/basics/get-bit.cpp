#include <iostream>

using namespace std;

int get_bit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

void solve()
{
    int n, pos;
    cin >> n >> pos;
    cout << get_bit(n, pos) << endl;
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

// INPUT:
// 3
// 5 1
// 8 3
// 9 2

// OUTPUT:
// Case #1: 0
// Case #2: 1
// Case #3: 0