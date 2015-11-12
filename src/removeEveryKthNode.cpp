/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) {
	struct node *p, *q;
	int  nodes = 0, iterate, i = 0;
	if (head == NULL || K <= 1)return NULL;
	else
	{
		for (p = head; p != NULL; p = p->next, nodes++);
		p = head;
		iterate= nodes / K;
		while (iterate--)
		{

			while (i<K - 2)
			{
				p = p->next;
				i++;
			}
			q = p->next;
			p->next = q->next;
			p = p->next;
			free(q);
			i = 0;

		}
		return head;

	}

	return NULL;
}