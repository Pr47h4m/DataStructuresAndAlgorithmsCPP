#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int ruleBreaks = 0;
    int upCount = 0, downCount = 0;
    for (int i = 1; i < n; ++i)
    {
        if (arr[i] == arr[i - 1])
            continue;
        if (arr[i] > arr[i - 1])
        {
            ++upCount;
            downCount = 0;
        }
        else
        {
            ++downCount;
            upCount = 0;
        }
        if (upCount > 3 || downCount > 3)
        {
            upCount = 0;
            downCount = 0;
            ++ruleBreaks;
        }
    }
    cout << ruleBreaks << endl;
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