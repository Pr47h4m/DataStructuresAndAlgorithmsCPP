#include <iostream>

using namespace std;

void insertion_sort(int[], int);

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
        insertion_sort(array, n);
        cout << "Case #" << c << ": ";
        for (int i = 0; i < n; ++i)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

void insertion_sort(int array[], int n)
{
    for (int i = 1; i < n; ++i)
    {
        int currentElem = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > currentElem)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = currentElem;
    }
}