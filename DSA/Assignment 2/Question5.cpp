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


void CommonElement(Node* head1, Node* head2, Node* head3){
	
	unordered_map<int, int> mp;
	
	Node* p = head1;
	while (p != NULL) {
		
		mp[p->data] = 1;
		p = p->next;
	}
	
	Node* q = head2;
	while (q != NULL) {
		if (mp[q->data] == 1) mp[q->data] = 2;
		q = q->next;
	}
	
	Node* r = head3;
	while (r != NULL) {
		if (mp[r->data] ==2) mp[r->data] = 3;
		r = r->next;
	}

	
	for (auto it : mp) {
		if (it.second == 3)
			cout << it.first << " ";
	}
}


int main()
{

	// first list
	struct Node* list1 = NULL;
	push(list1, 11);
	push(list1, 6);
	push(list1, 25);
	push(list1, 8);
    cout<<"Linked List 1: ";
    printList(list1);
    
	// second list
	struct Node* list2 = NULL;
	push(list2, 8);
	push(list2, 6);
	push(list2, 13);
	push(list2, 11);
	cout<<"\nLinked List 2: ";
    printList(list2);
		
	// third list
	struct Node* list3 = NULL;
	push(list3, 25);
	push(list3, 8);
	push(list3, 21);
	push(list3, 6);
	cout<<"\nLinked List 3: ";
    printList(list3);

    cout<<"\nCommon Elements: ";
	CommonElement(list1, list2, list3);
	
	return 0;
}



