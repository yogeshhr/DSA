#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;

    node(int data1 , node* next1){
        data = data1;
        next = next1;
    }

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
    node* temp = new node(val , head);
    return temp;
    //or
    /*
    node* temp = new node(val);
    temp->next = head;
    return temp;
    */
}

node* insertTail(node* head , int val){
    if(head == NULL) return new node(val);
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    node* newNode = new node(val);
    temp->next = newNode;
    return head;
}

node* insertAtK(node* head ,int val , int k){
    if(head == NULL){
        if(k==1) return new node(val);
        else return head;
    }

    if(k == 1) return new node(val , head);

    int count = 0;
    node* temp = head;
    while(temp != NULL){
        count++;
        if(count == (k-1)){
            node* newNode = new node(val , temp->next);
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head; 
}

node* insertBeforeValue(node* head ,int val , int posVal){
    if(head == NULL){
        return NULL;
    }

    if(head -> data == posVal) return new node(val , head);

    node* temp = head;
    while(temp->next != NULL){
        
        if(temp->next->data == posVal){
            node* newNode = new node(val , temp->next);
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head; 
}

int main(){
    vector<int>arr = {2,4,5,6,3,7};
    node* head = convertArr2LL(arr);
    cout<<"original list : ";
    print(head);

    head = insertHead(head , 1);
    cout<<"list after insertion at head : ";
    print(head);

    head = insertTail(head , 100);
    cout<<"list after insertion at tail : ";
    print(head);

    head = insertAtK(head , 11 , 5);
    cout<<"list after insertion at K position : ";
    print(head);

    head = insertBeforeValue(head , 101 , 5);
    cout<<"list after insertion at before given value : ";
    print(head);
    
}