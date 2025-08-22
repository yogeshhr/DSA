#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"enter string : ";
    cin>>s;

    int hash[256] = {0};
    for(int i = 0; i<s.size(); i++){
        hash[s[i]]++;
    }

    int q;
    cout<<"enter query : ";
    cin>>q;
    while(q--){
        char ch;
        cin>>ch;
        cout<<ch<<" appears "<<hash[ch]<<" times"<<endl;
    }
    return 0;
}