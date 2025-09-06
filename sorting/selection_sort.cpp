#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[] , int n){
    //outer loop for swapping
    for(int i = 0; i<n-1; i++){
        int min = i;
        //inner loop to find minimum element in array
        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        //swapping
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

int main(){
    int n;
    cout<<"enter number of elements in array : ";
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    selection_sort(arr , n);
    //printing sorted array
    cout<<"sorted array : ";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}