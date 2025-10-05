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

Node* insertKthNode(Node* head , int val , int k){
    if(head == nullptr && k==1){
        return new Node(val);
    }
    Node* temp = head;
    int count = 1;
    
    if(k==1){
        Node* newNode = new Node(val , temp , nullptr);
        head->back = newNode;
        return newNode;
    }
    while(temp != NULL && count < k-1){
        temp = temp->next;
        count++;
    }
    
    if(temp == NULL){
        cout<<"position out of range\n";
        return head;
    }
    
    if(temp->next == NULL && count == k-1){
        Node* newNode = new Node(val , nullptr , temp);
        temp->next = newNode;
        return head;
    }

    
    Node* newNode = new Node(val , temp->next , temp);
    temp->next->back = newNode;
    temp->next = newNode;
    
    
    return head;
}

void insertBeforeNode(Node* node , int val){
    Node* prev = node->back;
    Node* newNode = new Node(val , node , prev);
    prev->next = newNode;
    node->back = newNode;
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

        // head = insertafterTail(head , 6);
        // cout<<"list after insertion after tail : ";
        // print(head);

        // head = insertKthNode(head , 6 , 5);
        // cout<<"list after insertion at kth node : ";
        // print(head);

        insertBeforeNode(head->next , 101);
        cout<<"list after insertion before node : ";
        print(head);
}