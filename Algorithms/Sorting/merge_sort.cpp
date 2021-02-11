#include <iostream>

using namespace std;

void merge(int[], int, int, int);
void merge_sort(int[], int, int);

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
        merge_sort(array, 0, n - 1);
        cout << "Case #" << c << ": ";
        for (int i = 0; i < n; ++i)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

void merge(int array[], int l, int mid, int r)
{
    int t1 = mid - l + 1, t2 = r - mid;
    int temp1[t1], temp2[t2];
    for (int i = 0; i < t1; ++i)
    {
        temp1[i] = array[l + i];
    }
    for (int i = 0; i < t2; ++i)
    {
        temp2[i] = array[mid + 1 + i];
    }

    int i = 0, j = 0, k = l;

    while (i < t1 && j < t2)
    {
        if (temp1[i] < temp2[j])
        {
            array[k] = temp1[i];
            ++i;
        }
        else
        {
            array[k] = temp2[j];
            ++j;
        }
        ++k;
    }
    while (i < t1)
    {
        array[k] = temp1[i];
        ++i;
        ++k;
    }
    while (j < t2)
    {
        array[k] = temp2[j];
        ++k;
        ++j;
    }
}

void merge_sort(int array[], int l, int r)
{
    if (l < r)
    {
        int mid = l + (r - l) / 2;
        merge_sort(array, l, mid);
        merge_sort(array, mid + 1, r);

        merge(array, l, mid, r);
    }
}