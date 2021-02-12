#include <iostream>

using namespace std;

int main()
{
    int t; // for t testcases
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int n;
        cin >> n;
        string res;
        while (n-- && res != "CORRECT" && res != "WRONG_ANSWER")
        {
            cout << (a + b + 1) / 2 << endl;
            fflush(stdout);
            cin >> res;
            if (res == "TOO_SMALL")
            {
                a = (a + b + 1) / 2 + 1;
            }
            else if (res == "TOO_BIG")
            {
                b = (a + b + 1) / 2 - 1;
            }
        }
    }
    return 0;
}