#include <iostream>
using namespace std;

void bubbleSort(int arr[] , int n){
    if(n < 2) return;
    
    int count = 0;
    for(int j = 0; j<n-1; j++){
        if(arr[j] > arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            count++;
        }
        
    }
    if(count == 0) return;
    bubbleSort(arr , n-1);
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
    bubbleSort(arr , n);
    cout<<"sorted array : ";
    for(int i = 0; i< n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}