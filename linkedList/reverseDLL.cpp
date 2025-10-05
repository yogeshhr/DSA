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

Node* reverseDLL(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* prev = nullptr;
    Node* current = head;
    while(current != NULL){
        prev = current->back;
        current->back = current->next;
        current->next = prev;
        current = current->back;
    }
    return prev->back;
}

int main(){
        vector<int> arr = {2, 5, 8, 7};
        
        Node* head = convertArr2DLL(arr);
        print(head);

        head = reverseDLL(head);
        cout<<"reversed list : ";
        print(head);
}