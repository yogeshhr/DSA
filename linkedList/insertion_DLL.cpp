#include <bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;
    Node* back;

    Node(int data1 , Node* next1 , Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

void print(Node* head){
    Node* temp = head;
    while(temp){
        cout << temp->data;
        if(temp->next) cout<< " <-> "; // only print arrow if next exists
        temp = temp->next;
    }
    cout<<endl;
}

Node* convertArr2DLL(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        prev->next = temp;
        temp->back = prev;
        prev = temp;
    }
    return head;
}

Node* insertHead(Node* head ,int val){
    Node* newHead  = new Node(val , head , nullptr);
    head->back = newHead;
    return newHead;
}

Node* insertbeforeTail(Node* head , int val){
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    Node* newNode = new Node(val , temp->next , temp);
    temp->next->back = newNode;
    temp->next = newNode;
    return head;
}

Node* insertafterTail(Node* head , int val){
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    Node* tail = new Node(val , nullptr , temp);
    temp->next = tail;
    return head;
}

int main(){
        vector<int> arr = {2, 5, 8, 7};
        
        Node* head = convertArr2DLL(arr);
        print(head);

        // head = insertHead(head , 1);
        // cout<<"list after insertion of head : ";
        // print(head);

        // head = insertbeforeTail(head , 6);
        // cout<<"list after insertion before tail : ";
        // print(head);

        head = insertafterTail(head , 6);
        cout<<"list after insertion after tail : ";
        print(head);
}