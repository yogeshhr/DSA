#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    int hash[10] = {0};
    for(int i = 0; i<n; i++){
        hash[arr[i]] += 1;
    }

    int q;
    cout<<"enter number of queries : ";
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        cout<<num<<" appears "<<hash[num]<<" times"<<endl;
    }
    return 0;
}