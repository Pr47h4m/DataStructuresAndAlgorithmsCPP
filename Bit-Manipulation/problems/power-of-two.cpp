// Check if given number is power of Two
#include <iostream>

using namespace std;

bool check(int n)
{
    return ((n & (n - 1)) == 0);
}

void solve()
{
    int n;
    cin >> n;
    cout << check(n) << endl;
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
// 6
// 4

// OUTPUT:
// Case #1: 1
// Case #2: 0
// Case #3: 1