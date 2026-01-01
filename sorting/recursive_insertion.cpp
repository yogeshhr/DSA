#include <iostream>
using namespace std;

void insertionSort(int arr[] , int n , int i){
       if(i >= n) return;
       
       int key = arr[i];
       int j = i-1;
       while(j>=0 && arr[j] > key){
           arr[j+1] = arr[j];
           j--;
       }
       arr[j+1] = key;
       insertionSort(arr , n , i+1);
   
}

int main()
{
    int arr[] = {8,5,2,1,3};
    
    int n = 5;
    insertionSort(arr , n , 1);
    cout<<"sorted array : ";
    for(int i = 0; i< n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}