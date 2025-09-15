#include<bits/stdc++.h>
using namespace std;

int partition(int arr[] , int low , int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i < j){
        while(arr[i] <= pivot && i <= high-1){
            i++;
        }
        while(arr[j] >= pivot && j >= low+1){
            j--;
        }

        if(i<j){
            swap(arr[i] , arr[j]);
        }
        swap(arr[low] , arr[j]);
        
    }
    return j;
}

void qs(int arr[] , int low , int high){
    if(low >= high) return;
    int pIndex = partition(arr , low , high);
    qs(arr , low , pIndex-1);
    qs(arr , pIndex+1 , high);
}

int main()
{
    int arr[] = {8,5,2,1,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"original array : ";
    for(int i = 0; i< n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    qs(arr , 0 , n-1);
    cout<<"sorted array : ";
    for(int i = 0; i< n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}