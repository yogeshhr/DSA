#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* back;

    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }

    Node(int data1 , Node* next1 ,Node* back1){
        data = data1;
        next = next1;
        back = back1;
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

Node* deleteHead(Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    Node* prev = head;
    head = head->next;
    head->back = nullptr;
    prev->next = nullptr;
    delete prev;
    return head;
}

Node* deleteTail(Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }

    Node* tail = head;
    while(tail->next != NULL){
        tail = tail->next;
    }
    Node* prev = tail->back;
    prev->next = nullptr;
    tail->back = nullptr;
    delete tail;
    return head;
}

Node* deleteKthElement(Node* head , int k){
    Node* temp = head;
    int count = 0;
    while(temp){
        count++;
        if(count == k) break;
        temp = temp->next;
    }
    Node* prev = temp->back;
    Node* front = temp->next;

    if(prev == NULL && front == NULL){
        delete temp;
        return NULL;
    }
    else if(prev == NULL){
        return deleteHead(head);
    }
    else if(front == NULL){
        return deleteTail(head);
    }
    prev->next = front;
    front->back = prev;
    temp->back = nullptr;
    temp->next = nullptr;
    delete temp;
    return head;
}

void deleteNode(Node* temp){
    Node* prev = temp->back;
    Node* front = temp->next;

    if(front == NULL){
        prev->next = nullptr;
        temp->back = nullptr;
        delete temp;
        return;
    }
    prev->next = front;
    front->back = prev;

    temp->next = temp->back = nullptr; 
    delete temp;
}

int main(){
        vector<int> arr = {2, 5, 8, 7};
        
        Node* head = convertArr2DLL(arr);
        cout<<"original list : ";
        print(head);

        // head = deleteHead(head);
        // cout<<"list after deletion of head : ";
        // print(head);

        // head = deleteTail(head);
        // cout<<"list after deletion of tail : ";
        // print(head);

        // head = deleteKthElement(head , 3);
        // cout<<"list after deletion of 3rd element : ";
        // print(head);
        
        deleteNode(head->next->next->next);
        cout<<"list after deletion of node : ";
        print(head);

        return 0;
}