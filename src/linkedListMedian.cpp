/*
OVERVIEW: Given a single sorted linked list find the median element of the single linked list.
Median is the middle element.
E.g.: 1->2->3->4->5, output is 3.

INPUTS: A sorted linked list.

OUTPUT: Return median of the linked list elements.

ERROR CASES: Return -1 for error cases.

NOTES: If length is even, return average of middle pair of numbers.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

int linkedListMedian(struct node *head) { 
	if (head!=NULL){
		struct node *p1, *p2;
		p1 = p2 = head;
		while (head && p1->next && (p1->next)->next){
			p1 = (p1->next)->next;
			p2 = p2->next;
		}
		if (p1->next == NULL)
			return p2->num;
		else
			return (p2->num + p2->next->num) / 2;
	}
	else{
		return -1;
	}
}
