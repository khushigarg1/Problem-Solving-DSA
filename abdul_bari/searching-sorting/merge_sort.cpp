// #include<bits/stdc++.h>
// using namespace std;

// void Merge(int arr[], int l, int mid, int r){
//     int size1 = mid - l + 1;
//     int size2 = r - mid;
//     int *subarrleft = new int[size1];
//     int *subarrright = new int[size2];

//     for (int i = 0; i < size1; i++)
//     {
//         subarrleft[i] = arr[l + i];
//     }
//     for (int i = 0; i < size2; i++)
//     {
//         subarrright[i] = arr[mid + 1 + i];
//     }
//     int i = 0;
//     int j = 0;
//     int k = l;
//     while (i < size1 && j < size2)
//     {
//         if (subarrleft[i] < subarrright[j])
//         {
//             arr[k] = subarrleft[i];
//             i++;k++;
//         }
//         else{
//             arr[k] = subarrright[j];
//             j++;k++;
//         }
//     }
//     while (i < size1)
//     {
//         arr[k] = subarrleft[i];
//         i++;k++;
//     }
//     while (j < size2)
//     {
//         arr[k] = subarrright[j];
//         j++;k++;
//     }
// }

// void mergeSort(int arr[] , int s ,int e){
//     if (s >= e)
//     {
//         return;
//     }
//     int mid = (s + e) / 2;
//     mergeSort(arr, s, mid);
//     mergeSort(arr, mid + 1, e);
//     Merge(arr,s, mid, e);
// }

// int main(){
//     int *arr { new int[8]{7,5,3,1,8,6,2,4}};
//     mergeSort(arr,0,7);
//     for (int i = 0; i < 8; i++)
//     {
//         cout<<arr[i];
//     }
// return 0;
// }


#include<bits/stdc++.h>
using namespace std;

void merge(int arr[] , int s , int mid , int e)
{
    int size1 = mid - s + 1;
    int size2 = e - mid;
    int *subarr_left = new int[size1];
    int *subarr_right = new int[size2];

    for(int i = 0 ; i < size1; i++)
    {
        subarr_left[i] = arr[s + i];
    }
    for(int i = 0 ; i < size2 ; i++)
    {
        subarr_right[i] = arr[mid + 1 + i];
    }
    int i = 0 , j = 0 , k = s;
    while (i < size1 && j < size2)
    {
        if(subarr_left[i] < subarr_right[j])
        {
            arr[k] = subarr_left[i];
            i++; k++;
        }
        else
        {
            arr[k] = subarr_right[j];
            j++; k++;
        }
    }
    while (i < size1)
    {
        arr[k] = subarr_left[i];
        i++; k++;
    }
    while (j < size2)
    {
        arr[k] = subarr_right[j];
        j++; k++;
    }
}

void merge_sort(int arr[] , int s , int e)
{
    if(s >= e)
    {
        return ;
    }
    int mid = (s + e) /2;
    merge_sort(arr , s , mid);
    merge_sort(arr , mid + 1 , e);
    merge(arr , s , mid , e);
}
int main(){
    int *arr { new int[8]{7,5,3,1,8,6,2,4}};
    merge_sort(arr,0,7);
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
return 0;
}