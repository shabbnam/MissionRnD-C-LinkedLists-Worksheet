/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>
void sort(struct node *head);
void checkmin(struct node *p);
struct node {
	int num;
	struct node *next;
};

struct node * sortLinkedList(struct node *head) {
	if (head == NULL)return NULL;
	else
	{
    	sort(head);
		return head;
	}
	return NULL;
}
void checkmin(struct node *p)
{
	int  min = p->num, temp;
	struct node *save = p, *ptr = p;
	for (p = p->next; p != NULL; p = p->next)
	{
		if (p->num<min)
		{
			min = p->num;
			save = p;
		}

	}

	temp = save->num;
	save->num = ptr->num;
	ptr->num = temp;


}


void sort(struct node *head)
{

	struct node *p = head;
	while (p->next != NULL)
	{
		checkmin(p);
		p = p->next;
	}
	

}