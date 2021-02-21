#include <iostream>

using namespace std;

int clear_bit(int n, int pos)
{
    int mask = ~(1 << pos);
    return (n & mask);
}

void solve()
{
    int n, pos;
    cin >> n >> pos;
    cout << clear_bit(n, pos) << endl;
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
// 5 2
// 8 3
// 9 0

// OUTPUT:
// Case #1: 1
// Case #2: 0
// Case #3: 8