// sort a given set of elements using a quicksort method and calculate tie required to sort the elements the elements can be read from a  file or can be generated using a random number generator
// complexity for best case = nlogn
// complexity for worst case = O(n2) already sorted

#include <bits/stdc++.h>
using namespace std;

int partition(int *arr, int l, int h)
{
    int pivot = l;
    int i = l, j = h;
    while (i < j)
    {
        while (i < h and arr[i] <= arr[pivot])
        {
            i++;
        }
        while (j > l and arr[j] >= arr[pivot])
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[j], arr[pivot]);
    return j;
    // cout << j << " ";
}

void quicksort(int *arr, int l, int h)
{
    if (l < h)
    {
        int j = partition(arr, l, h);
        quicksort(arr, l, j - 1);
        quicksort(arr, j + 1, h);
    }
}
int main()
{
    int size;
    cin >> size;
    int arr[size];

    srand(time(nullptr));
    cout << "INITIAL ARRAY IS:- ";
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    cout << endl
         << endl;
    float st = clock();
    cout << "Starting time:- " << st / CLOCKS_PER_SEC << endl;

    quicksort(arr, 0, (size - 1));
    float et = clock();
    cout << "Ending time:- " << et / CLOCKS_PER_SEC << endl;
    float tt = et - st;
    cout << "Total time taken :- " << tt / CLOCKS_PER_SEC << endl;
    cout << endl;

    cout << "SO, OUR SORTING ARRAY IS:- ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}