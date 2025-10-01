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

Node* convertArr2LL(vector<int>arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int lengthOfLL(Node* head){
    int count = 0;
    Node* temp = head;
    while(temp != NULL){
        temp = temp->next;
        count++;
    }
    return count;
}

int main(){
    vector<int>arr = {2,5,8,7};
    Node* head = convertArr2LL(arr);
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
    int length = lengthOfLL(head);
    cout<<"Length of Linked list : "<<length<<endl;
}