#include<bits/stdc++.h>
using namespace std;

// 1st method
// void insertionSort(int arr[] , int n){
//    for(int i = 1; i<n; i++){
//        int key = arr[i];
//        int j = i-1;
//        while(j>=0 && arr[j] > key){
//            arr[j+1] = arr[j];
//            j--;
//        }
//        arr[j+1] = key;
//    }
// }

// 2nd method
void insertion_sort(int arr[] , int n){
    for(int i = 0; i < n; i++){
        int j = i;
        while(j>0 && arr[j-1] > arr[j]){
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
                j--;
            }
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
    insertion_sort(arr , n);
    //printing sorted array
    cout<<"sorted array : ";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}