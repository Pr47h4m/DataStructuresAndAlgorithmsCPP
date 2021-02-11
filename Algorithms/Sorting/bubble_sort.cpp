#include <iostream>

using namespace std;

void bubble_sort(int[], int);

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
        bubble_sort(array, n);
        cout << "Case #" << c << ": ";
        for (int i = 0; i < n; ++i)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

void bubble_sort(int array[], int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}