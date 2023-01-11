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


Node* deleteNode(Node* head, int key)
{

	Node* temp = head;
	int count = 0;
	while(temp!=NULL){
	    temp = temp->next;
	    count++;
	}
	int nthPos = count-key+1;
	if(nthPos==1){
	    temp = head;
	    head = head->next;
	    delete(temp);
	    return head;
	}
	else{
	    int curr = 1;
	    temp = head;
	    while(nthPos!= curr+1){
	        temp = temp->next;
	        curr++;
	    }
	    Node* del = temp->next;
	    temp->next = temp->next->next;
	    delete(del);
	    return head;
	}
	

}

int main()
{


	Node* list1 = NULL;
	push(list1, 3);
	push(list1,8);
	push(list1,5);
	push(list1,7);
	push(list1,12);
    cout<<"Origial linked list: ";
    printList(list1);
    
    Node* newList = deleteNode(list1,2);
    cout<<"\n\ndeleted 2nd node from end!!"<<endl;
    cout<<"New linked list: ";
    printList(list1);
	
	return 0;
}