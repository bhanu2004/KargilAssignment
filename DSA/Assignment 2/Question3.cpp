#include <bits/stdc++.h>
using namespace std;


class Node
{
	public:
	char data;
	Node *next;
	Node(int val){
	    data = val;
	    next = NULL;
	}
};


bool compareLists(Node* head1, Node* head2)
{
	Node* temp1 = head1;
	Node* temp2 = head2;

	while (temp1 && temp2) {
		if (temp1->data == temp2->data) {
			temp1 = temp1->next;
			temp2 = temp2->next;
		}
		else
			return false;
	}

	if (temp1 == NULL && temp2 == NULL)
		return true;

	return false;
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



void reverse(Node* &head)
{
	Node* prev = NULL;
	Node* current = head;
	Node* next;

	while (current != NULL) {
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	head = prev;
}



bool isPalindrome(Node* head)
{
    if(head==NULL || head->next==NULL) return true;
    
	Node *slow = head, *fast = head;
	Node *second_half, *prevSlow = head;

	Node* midnode = NULL;
	bool res = true;

	    
	while (fast != NULL && fast->next != NULL) {
		fast = fast->next->next;
		prevSlow = slow;
		slow = slow->next;
	}

	if (fast != NULL) {
		midnode = slow;
		slow = slow->next;
	}


	second_half = slow;

	prevSlow->next = NULL;

	reverse(second_half);


	return compareLists(head, second_half);

}

int main()
{

	Node* head = NULL;
	string str = "abacaban";
	int i;

	for (i = 0; str[i] != '\0'; i++) {
		push(head, str[i]);
	}
	cout<<str<<" : ";
	if(isPalindrome(head)) cout<<"Palindrome"<<endl;
	else cout<<"not Palindrome"<<endl;
	
	return 0;
}

// This code is contributed by Shivani

