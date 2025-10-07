#include<bits/stdc++.h>
using namespace std;

int largestElement(int arr[], int n){
    int largest = arr[0];
    for(int i = 1; i < n; i++){
        if(largest < arr[i]) largest = arr[i];
    }
    return largest;
}

int main(){
    int n;
    cout<<"enter number of elements in array : ";
    cin>>n;
    if(n <= 0){
        cout<<"invalid input!"<<endl;
        return 0;
    }
    int arr[n];
    cout<<"enter elements of array : ";
    for(int i = 0; i<n ; i++){
        cin>>arr[i];
    }
    int result = largestElement(arr , n);
    cout<<"largest element in the array is : "<<result<<endl;
    return 0;
}