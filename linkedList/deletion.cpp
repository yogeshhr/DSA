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

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

Node* removeHead(Node* head){
    if(head == NULL) return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node* removetail(Node* head){
    if(head == NULL || head->next == NULL) return NULL;
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
    return head;
}

Node* removeK(Node* head , int k){
    if(head == NULL) return NULL;
    if(k == 1){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    
    int count = 0;
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL){
        count++;
        if(count == k){
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node* removeElement(Node* head , int element){
    if(head == NULL) return NULL;
    if(head->data == element){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL){
        
        if(temp->data == element){
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}
int main(){
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    
    cout<<"Original List : ";
    print(head);

    head = removeElement(head , 20);
    cout<<"List after deletion of particular element : ";
    print(head);

    /*
    head = removeK(head , 3);
    cout<<"List after deletion at Kth position : ";
    print(head);

    
    head = removeHead(head);
    cout<<"List after deletion of head : ";
    print(head);
    
    head = removetail(head);
    cout<<"List after deletion of tail : ";
    print(head);
    */
    
}