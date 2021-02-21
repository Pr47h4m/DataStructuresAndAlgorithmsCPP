#include <iostream>

using namespace std;

int set_bit(int n, int pos)
{
    return (n | (1 << pos));
}

void solve()
{
    int n, pos;
    cin >> n >> pos;
    cout << set_bit(n, pos) << endl;
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
// 8 1
// 9 2

// OUTPUT:
// Case #1: 7
// Case #2: 10
// Case #3: 13