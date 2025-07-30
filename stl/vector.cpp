#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

    vector<int>::iterator it = v.begin();
    for(int i = 0 ; i < v.size(); i++){
        cout<<*(it)<<" ";
        it++;
    }
    cout<<endl;

    vector<pair<int,int>>vec;

    vec.push_back({1,2});
    vec.emplace_back(3,4);

    vector<int> v2(5,9); 

    vector<int>::iterator end = v2.end();
    end--;
    cout<<*(end)<<endl;

    cout << vec[1].first<<endl;

    for(vector<int>::iterator it = v.begin(); it!=v.end(); it++){
        cout<<*(it)<<" ";
    }

    cout<<endl;

    for(auto i = v.begin(); i!=v.end(); i++){
        cout<<*(i)<<" ";
    }
    cout<<endl;

    for(auto it : v){
        cout<<it<<" ";
    }

}