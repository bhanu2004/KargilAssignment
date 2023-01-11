#include <bits/stdc++.h>
using namespace std;


struct Node {
	int data;
	struct Node* next;
	Node(int val){
	    data = val;
	    next = NULL;
	}
};


void segregateNumbers(struct Node* &head)
{
	Node* even = NULL;
	Node* evenTrav = NULL;
	Node* odd = NULL;
	Node* oddTrav = NULL;
	Node* curr = head;

	while (curr != NULL) {
		int val = curr->data;

		if (val % 2 == 0) {
			if (even == NULL) {
				even = curr;
				evenTrav = even;
			}
			else {
				evenTrav->next = curr;
				evenTrav = evenTrav->next;
			}
		}

		else {
			if (odd == NULL) {
				odd = curr;
				oddTrav = odd;
			}
			else {
				oddTrav->next = curr;
				oddTrav = oddTrav->next;
			}
		}

		curr = curr->next;
	}
	
	if (odd == NULL || even == NULL)
		return;

	evenTrav->next = odd;
	oddTrav->next = NULL;
	head = even;
}

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

int main()
{
	Node* head = NULL;

	
	//2->1->4->7->9->10->11

	push(head, 11);
	push(head, 10);
	push(head, 9);
	push(head, 7);
	push(head, 4);
	push(head, 1);
	push(head, 2);

	cout << "Original Linked list:" << endl;
	printList(head);

	segregateNumbers(head);

	cout << endl << "\nLinked list after segregation: " << endl;
	printList(head);

	return 0;
}

