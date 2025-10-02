#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;

    node(int data1){
        data = data1;
        next = NULL;
    }
};

void print(node* head){
    node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

node* convertArr2LL(vector<int>arr){
    node* head = new node(arr[0]);
    node* mover = head;
    for(int i = 1; i<arr.size(); i++){
        node* temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

node* insertHead(node* head , int val){
    node* temp = new node(val);
    temp->next = head;
    return temp;
}

int main(){
    vector<int>arr = {2,4,5,6,3,7};
    node* head = convertArr2LL(arr);
    cout<<"original list : ";
    print(head);

    head = insertHead(head , 1);
    cout<<"list after insertion at head : ";
    print(head);
    
}