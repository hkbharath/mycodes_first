#include <stdio.h>

struct node {
	int val;
	node* next;
};

void traverse(node *head) {
	node *trav = head;
	while (trav != NULL) {
		printf("%d => ",trav->val);
		trav = trav->next;
	}
	printf("null\n");
}

void swap(node** a, node** b){
	node *tmp = *b;
	*b = *a;
	*a = tmp;
} 

node* reverse (node *head, node *prev) {
	while (head != NULL ){
		swap(&(head->next),&prev);
		swap(&head,&prev);
	}
	return prev;
}

void addnode(node* head, int val){
	node* newnode = new node;
	node* trav = head;
	newnode->val = val;
	newnode->next = NULL;
	while(trav->next != NULL)
		trav = trav->next;
	trav->next = newnode;
}

int main() {
	node *head = new node;
	head->val = 1;
	head->next = NULL;
	addnode(head,2);
	addnode(head,3);
	addnode(head,4);
	addnode(head,5);
	head = reverse(head,NULL);
	traverse(head);
}
