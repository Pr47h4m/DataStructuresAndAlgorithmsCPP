#include <iostream>

using namespace std;

int binary_search_r(int[], int, int, int);

int main()
{
    int t; // for t test cases
    cin >> t;
    int c = 0; // for current test case
    while (t--)
    {
        c++;
        int n, key; // for length of array and key
        cin >> n >> key;
        int array[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> array[i];
        }
        int index = binary_search_r(array, 0, n - 1, key);
        cout << "Case #" << c << ": " << index << endl;
    }
    return 0;
}

int binary_search_r(int array[], int start, int end, int key)
{
    int mid = (start + end) / 2;
    if (array[mid] == key)
        return mid;
    if (array[mid > key])
        return binary_search_r(array, 0, mid - 1, key);
    else
        return binary_search_r(array, mid + 1, end, key);
}