#include<bits/stdc++.h>
using namespace std;
void Union(int arr1[] , int arr2[] , int size1 ,int size2)
{
    //merging two arrays
    int c = size1+size2;
    int arr[c];
    for (int i = 0; i < size1; i++)
    {
        arr[i] = arr1[i];
    }
    int s = size1;
    for (int i = 0; i < size2; i++)
    {
        arr[s] = arr2[i];
        s++; 
    }
    
    sort(arr , arr+c);
    for (int i = 0; i < c; i++)
    {
        /* code */
        cout << arr[i]<<" ";
    }
    int count = 0;
    int temp[c];
    int j =0;
    for (int i = 0; i < c; i++)
    {
        if(arr[i] != arr[i+1])
        {
            count++;
            temp[j] = arr[i];
            j++;
        }
    }
    cout << count<<endl;
    for (int i = 0; i < j; i++)
    {
        /* code */
        cout << temp[i]<<" ";
    }
}

void unions(int arr1[] , int arr2[] , int m , int n)
{
    int i = 0 , j = 0;
    while(i < m && j < n)
    {
        if(arr1[i] < arr2[j])
            cout << arr1[i++]<< " ";
        else if(arr1[i] > arr2[j])
            cout << arr2[j++] <<" ";
        else
        {
            cout << arr2[j++]<<" ";
            i++;
        }
    }
    while (i < m)
    {
        cout << arr1[i++]<<" ";
    }
    while (j < n)
    {
        cout << arr2[j++]<<" ";
    }
    
}
void intersection(int arr1[] , int arr2[] , int m , int n)
{
    int i = 0 , j = 0;
    while(i < m && j < n)
    {
        if(arr1[i] < arr2[j])
            i++;
        else if(arr2[j] < arr1[i])
            j++;
        else
        {
            cout << arr2[j++]<<" ";
            i++;
        }
    }
}
int main(){
    int size1 , size2;
    cin >> size1 >> size2;
    int arr1[size1] , arr2[size2];
    for (int i = 0; i < size1; i++)
    {
        /* code */
        cin >> arr1[i];
    }
    for (int i = 0; i < size2; i++)
    {
        /* code */
        cin >> arr2[i];
    }
    
    unions(arr1 , arr2 , size1 ,  size2);
    cout <<endl;
    intersection(arr1 , arr2 , size1 ,  size2);
return 0;
}