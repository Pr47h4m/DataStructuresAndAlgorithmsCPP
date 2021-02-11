#include <iostream>

using namespace std;

void selection_sort(int[], int);

int main()
{
    int t; // for t test cases
    cin >> t;
    int c = 0; // for current test case
    while (t--)
    {
        c++;
        int n; // for length of array
        cin >> n;
        int array[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> array[i];
        }
        selection_sort(array, n);
        cout << "Case #" << c << ": ";
        for (int i = 0; i < n; ++i)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

void selection_sort(int array[], int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (array[j] < array[i])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}