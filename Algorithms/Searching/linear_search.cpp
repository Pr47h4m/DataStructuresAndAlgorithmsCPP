#include <iostream>

using namespace std;

int linear_search(int[], int, int);

int main()
{
    int t; // number of test cases
    cin >> t;
    int c = 0; // for case number
    while (t--)
    {
        c++;
        int n, key; //  number of elements in array and search key
        cin >> n >> key;
        int array[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> array[i];
        }
        int index = linear_search(array, n, key);
        cout << "Case #"<< c << ": " << index << endl;
    }
    return 0;
}

int linear_search(int array[], int n, int key) {
    int index = -1; // index where key could be present
        for (int i = 0; i < n; ++i)
        {
            if (array[i] == key)
            {
                index = i;
                break;
            }
        }
    return index;
}