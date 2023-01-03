#include <iostream>  
using namespace std;  
  

class node{
    public:
    int data;
    node* next;
    
    node(int d){
        data = d;
        next = NULL;
    }
};

void insertBefore(node* &head, int val){
    node* curr = new node(val);
    if(head==NULL){
        head = curr;
        return;
    }
    curr->next = head;
    head = curr;
    
}

void insertAfter(node* &head, int val){
    node* curr = new node(val);
    if(head==NULL){
        head = curr;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = curr;
}

void deleteAfter(node* &head){
    if(head->next==NULL){
        node* temp = head;
        head = NULL;
        delete(temp);
        return;
    }
    node* trav = head;
    while(trav->next->next!=NULL){
        trav = trav->next;
    }
    node* temp = trav->next;
    trav->next = NULL;
    delete(temp);
}

void deleteBefore(node* &head){
    if(head->next==NULL){
        head=NULL;
        return;
    }
    node* temp = head;
    head = head->next;
    delete(temp);
}

void printList(node* head){
    while(head!=NULL){
        cout<<head->data<<" --> ";
        head = head->next;
    }
    cout<<"NULL\n"<<endl;
}
  
int main(){  
    node* head = NULL;
    insertAfter(head,5);
    insertAfter(head,7);
    insertAfter(head,13);
    insertAfter(head,8);
    cout<<"inserting 5,7,13,8 at the end of linked list:"<<endl;
    printList(head);
    
    insertBefore(head,3);
    cout<<"inserting 3 at the start of linked list:"<<endl;
    printList(head);
    
    deleteAfter(head);
    deleteAfter(head);
    cout<<"deleting 2 time from the end of linked list:"<<endl;
    printList(head);
    
    deleteBefore(head);
    cout<<"deleting 1 element from the start of linked list:"<<endl;
    printList(head);


   
    return 0;  
}  