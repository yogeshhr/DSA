#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,int>mpp;
    mpp[1] = 2;
    mpp.emplace(3,4);
    mpp.insert({2,1});

    for(auto it : mpp){
        cout<<it.first<<" "<<it.second<<" ";
    }
    cout<<endl;
}