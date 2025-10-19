#include<bits/stdc++.h>
using namespace std;

int second_largest(int arr[] , int n){
    int largest = arr[0];
    int secondL = largest;
    for(int i = 1; i<n; i++){
        if(arr[i] > largest){
            secondL = largest;
            largest = arr[i];
        }
        if(arr[i] < largest && arr[i] > secondL){
            secondL = arr[i];
        }
    }
    return secondL;
}

int main(){
    int arr[] = {13 , 12, 4 , 5, 2 , 3, 11 , 10 , 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = second_largest(arr , n);
    for(int i = 0; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"second largest element in array : "<<result<<endl;
}