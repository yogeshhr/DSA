#include<bits/stdc++.h>
using namespace std;

class Stack {
    int size;
    int * arr;
    int top;
    public:
    Stack(){
        top = -1;
        size = INT_MAX;
        arr = new int[size];
    }
    void push(int x){
        top++;
        arr[top] = x;
    }
    int pop(){
        int x = arr[top];
        top--;
        return x;
    }
    int Top(){
        return arr[top];
    }
    int Size(){
        return top+1;
    }
};

int main(){
    Stack s;
    s.push(6);
    s.push(3);
    s.push(7);
    cout<<"top of stack before deleting any element : "<<s.Top()<<endl;
    cout<<"size of stack before deleting any element : "<<s.Size()<<endl;
    return 0;
}