//pair is used to combine together two values that may be of different data types
//or same data types as a single unit. 

#include<iostream>
using namespace std;

int main(){

    pair<int , string> p = {1 , "winner"};

    cout<<p.first<<" : "<<p.second<<endl;

    pair<int , pair<int , int> > p2 = {1 , {2,3}};
    
    cout<<p2.first<<":"<< p2.second.first<<":"<< p2.second.second<<endl;

    pair<int , int> arr[] = { {1,2} , {3,4} , {5,6} };

    cout<<arr[2].first<<endl;

    return 0;
}