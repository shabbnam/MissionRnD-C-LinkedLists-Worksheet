/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>
struct node* insert(struct node *first, int element);

struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N) {
	struct node *first = NULL;
	if (N == 0)
	{
		first = insert(first, 0);
	
	}
	if (N<0)
	{
		N = -N;
	}
	while (N>0)
	{
		first = insert(first, N % 10);
		N /= 10;

	}



	return first;
}
struct node* insert(struct node *first, int element)
{
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp->num = element;
	if (first == NULL)
	{
		temp->next = NULL;
		first = temp;
	}
	else{
		temp->next = first;
		first = temp;

	}
	return first;
}