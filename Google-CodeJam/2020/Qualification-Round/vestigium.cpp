#include <iostream>

using namespace std;

bool check(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        for (int j = i + 1; j < n; ++j)
            if (arr[j] == arr[i])
                return 1;
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    int mat[n][n];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> mat[i][j];
    int trace = 0;
    int r = 0, c = 0; // for number of rows and column with repeat elems
    for (int i = 0; i < n; ++i)
    {
        trace += mat[i][i];
        int row[n], col[n];
        for (int j = 0; j < n; ++j)
        {
            row[j] = mat[i][j];
            col[j] = mat[j][i];
        }
        r += check(row, n);
        c += check(col, n);
    }
    cout << trace << " " << r << " " << c << endl;
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