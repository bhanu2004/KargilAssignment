#include <bits/stdc++.h>
using namespace std;


class Node
{
	public:
	int data;
	Node *next;
	Node(int val){
	    data = val;
	    next = NULL;
	}
};




void push(Node* &head, int val)
{

	Node* temp = new Node(val);
	temp->next = head;
	head = temp;
}

void printList(Node* node)
{
	while (node != NULL) {
		cout << node->data << " ";
		node = node->next;
	}
}

Node* mergeLinkedList(Node* a, Node* b){
    if(a==NULL) return b;
    if(b==NULL) return a;
    
    Node* aTail = a;
    
    while(aTail->next!=NULL){
        aTail = aTail->next;
    }
    aTail->next = b;
    return a;
   
}

int main()
{

	Node* ans = NULL;
    Node* a = NULL;
    Node* b = NULL;

    push(a,15);
    push(a,10);
    push(a,5);
    cout<<"Linked List A: ";
    printList(a);
    
    push(b, 20);
    push(b, 3);
    push(b, 2);
    cout<<"\nLinked List B: ";
    printList(b);

    ans = mergeLinkedList(a, b);
   
    
    
    
    cout << "\nMerged Linked List: ";
    printList(ans);
 
    return 0;
}


