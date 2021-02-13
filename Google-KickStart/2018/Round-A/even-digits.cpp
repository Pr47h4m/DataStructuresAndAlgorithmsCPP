#include <iostream>
#include <climits>
#include <math.h>

using namespace std;

// checks if all digits are even or not
bool check(int n)
{
    while (1)
    {
        int d = n % 10;
        if (d % 2)
            return false;
        else
            n /= 10;
        if (n == 0)
            return true;
    }
}

int main()
{
    int t; // for t testcases
    cin >> t;
    int c = 0;
    while (t--)
    {
        c++;
        int n;
        cin >> n;
        int presses = 0, k1 = n, k2 = n;
        if (!check(n))
        {
            while (1)
            {
                ++presses;
                ++k1;
                --k2;
                if (check(k1) || check(k2))
                    break;
            }
        }
        cout << "Case #" << c << ": " << presses << endl;
    }
}