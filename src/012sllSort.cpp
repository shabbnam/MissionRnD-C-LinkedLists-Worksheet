/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>



struct node {
	int data;
	struct node *next;
};

struct node* sort(int count, struct node *p, int element)
{
	while (count--)
	{
		p->data = element;
		p = p->next;
	}
	return p;



}

void sll_012_sort(struct node *head){
	int  count0 = 0, count1 = 0, count2 = 0;
	struct node *p;
	for (p = head; p != NULL; p = p->next)
	{
		(p->data == 0) ? (count0++) : (p->data == 1) ? (count1++) : (count2++);

	}
	p = head;
	p = sort(count0, p, 0);
	p = sort(count1, p, 1);
	p = sort(count2, p, 2);



	
}
