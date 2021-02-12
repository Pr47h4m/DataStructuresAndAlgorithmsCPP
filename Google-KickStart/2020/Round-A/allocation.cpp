#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t; // for t testcases
    cin >> t;
    int c = 0;
    while (t--)
    {
        c++;
        int n, b; // for n houses and dollars to spend
        cin >> n >> b;
        int arr[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int ans = 0;
        for (int i = 0; i < n; ++i)
        {
            if (arr[i] <= b)
            {
                ans++;
                b -= arr[i];
            }
            else
            {
                break;
            }
        }
        cout << "Case #" << c << ": " << ans << endl;
    }
}