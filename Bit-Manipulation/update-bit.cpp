#include <iostream>

using namespace std;

int update_bit(int n, int pos, int val)
{
    int mask = ~(1 << pos);
    n = n & mask;
    return (n | (val << pos));
}

void solve()
{
    int n, pos, val;
    cin >> n >> pos >> val;
    cout << update_bit(n, pos, val) << endl;
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
// 5 1 1
// 8 2 1
// 9 0 0

// OUTPUT:
// Case #1: 7
// Case #2: 12
// Case #3: 8