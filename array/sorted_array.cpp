#include<bits/stdc++.h>
using namespace std;

bool checkSortedArray(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        if(arr[i] <= arr[i+1]) continue;
        else return false;
    }
    return true;
}

int main(){
    int n;
    cout<<"enter number of elements in array : ";
    cin>>n;
    int arr[n];
    cout<<"enter elements of array : ";
    for(int i = 0; i<n ; i++){
        cin>>arr[i];
    }
    bool result = checkSortedArray(arr , n);
    if(result) cout<<"array is sorted";
    else cout<<"array is not sorted";
    cout<<endl;
    return 0;
}