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





void deleteAlt(Node* &head)
{
	if (head == NULL)
		return;

	Node *prev = head;
	Node *node = head->next;

	while (prev != NULL && node != NULL)
	{
		prev->next = node->next;
		delete(node); 
		prev = prev->next;
		if (prev != NULL)
			node = prev->next;
	}
}


int main()
{
	Node* head = NULL;


	//1->2->3->4->5 
	push(head, 5);
	push(head, 4);
	push(head, 3);
	push(head, 2);
	push(head, 1);

	cout<<"Original Linked list: \n";
	printList(head);

	deleteAlt(head);

	cout<<"\n\nLinked list after deleting alternate: \n";
	printList(head);

	return 0;
}



