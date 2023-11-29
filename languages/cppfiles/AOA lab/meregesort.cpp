//implememnt a merge sort algo to sort a given set of elements and calculate time required to sort the elements the elemnts can be read from a file or can be genreated using random number generator

#include <bits/stdc++.h>
using namespace std;

void merge(int *arr, int l , int mid , int h){
    // int i = l;
    // int j = mid+1;

    int arr1[mid-l+1];
    int arr2[h-mid];

    int arr1size = mid-l+1;
    int arr2size = h-mid;
    for (int i = 0; i < arr1size; i++)
    {
        arr1[i]=arr[i+l];
    }
    for (int i = 0; i < arr2size; i++)
    {
        arr2[i] = arr[i + mid + 1];
    }
    
    int c = l , i = 0 , j = 0;
    while(i < arr1size && j < arr2size)
    {
        if(arr1[i] <= arr2[j])
        {
            arr[c++] = arr1[i++];
        }
        else
        {
            arr[c++] = arr2[j++];
        }
    }
    while(i < arr1size)
    {
        arr[c++] = arr1[i++];
    }
    while(j < arr2size)
    {
        arr[c++] = arr2[j++];
    }
}
void mergesort(int *arr, int l , int h)
{
    if(l<h)
    {
        int mid = (l+h)/2;
        mergesort(arr, l, mid);
        mergesort(arr, mid+1, h);
        merge(arr, l , mid , h);
    }
}

int main(){
    int size;
    cin >> size;
    int arr[size];

    srand(time(nullptr));
    cout <<"INITIAL ARRAY IS:- ";
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
        cout <<arr[i]<<" ";
    }
    cout << endl << endl;
    float st = clock();
    cout << "Starting time:- "<<st/CLOCKS_PER_SEC << endl;

    mergesort(arr, 0, (size - 1));
    float et = clock();
    cout << "Ending time:- "<<et/CLOCKS_PER_SEC<<endl;
    float tt = et-st;
    cout << "Total time taken :- "<< tt/CLOCKS_PER_SEC <<endl;
    cout << endl;

    cout <<"SO, OUR SORTING ARRAY IS:- ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}