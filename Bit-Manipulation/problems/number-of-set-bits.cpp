#include <iostream>

using namespace std;

int number_of_set_bits(int n)
{
    int i = 0;
    while (n)
    {
        n = n & (n - 1);
        ++i;
    }
    return i;
}

void solve()
{
    int n;
    cin >> n;
    cout << number_of_set_bits(n) << endl;
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
// 8
// 7
// 5

// OUTPUT:
// Case #1: 1
// Case #2: 3
// Case #3: 2