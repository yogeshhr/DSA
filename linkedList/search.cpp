#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int data1){
        data = data1;
        next = NULL;
    }
};

int search(Node* head , int val){
    Node* temp = head;
    while(temp){
        if(temp->data == val) return 1;
        temp = temp->next;
    }
    return 0;
}

int main(){
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    
    int ans = search(head , 25);
    if(ans == 1) cout<<"element is present";
    else cout<<"element is not present";
    cout<<endl;
}