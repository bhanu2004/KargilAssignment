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

void checkCircularAndCount(Node* head){
    Node* trav = head;
    int count = 0;
    bool flag = false;
    while(trav!=NULL){
        count++;
        if(trav->next==head){
            flag = true;
            break;
        }
        trav = trav->next;
    }
    if(flag){
        cout<<"Linked list is circular!!"<<endl;
    }
    else cout<<"Linked list is not curcular!!"<<endl;
    
    cout<<"No of Nodes: "<<count<<endl;
}

int main()
{

	// first list
	struct Node* list1 = NULL;
	list1 = new Node(5);
	list1->next = new Node(8);
	list1->next->next = new Node(3);
	list1->next->next->next = list1;
	
    checkCircularAndCount(list1);
	
	return 0;
}
