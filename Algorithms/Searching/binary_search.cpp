#include <iostream>

using namespace std;

int binary_search(int[], int, int);

int main()
{
    int t; // for t test cases
    cin >> t;
    int c = 0; // for current test case
    while (t--)
    {
        c++;
        int n, key; // for length of array and search key
        cin >> n >> key;
        int array[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> array[i];
        }
        int index = binary_search(array, n, key);
        cout << "Case #" << c << ": " << index << endl;
    }
    return 0;
}

int binary_search(int array[], int n, int key)
{
    int index = -1;
    int start = 0;   // starting index of array
    int end = n - 1; // ending index of array
    while (start <= end)
    {
        int mid = (start + end) / 2; // mid index of array
        if (array[mid] == key)
        {
            index = mid;
            break;
        }
        if (array[mid] > key)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return index;
}