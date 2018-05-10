/***********************************************
#
#      Filename: reverse_link.c
#
#        Author: zg107uc@ustc.mail.edu.cn
#   Description: 链表求逆
#        Create: 2018-04-20 21:44:50
# Last Modified: 2018-04-20 21:44:50
***********************************************/
#include <stdio.h>
#include <stdlib.h>

typedef int Item;
typedef struct node* link;
struct node{Item item; link next;};

link reverse(link);
void print(link);

int main(int argc, char *argv[])
{
	int i, N=atoi(argv[1]);
	link h=malloc(sizeof *h), x=h;
	h->item = 1; h->next = NULL;
	for(i=2; i<=N; i++) {
		x = (x->next=malloc(sizeof *x));
		x->item = rand() % 100; x->next = NULL;
	}
	print(h);
	link r = reverse(h);
	print(r);
}
void print(link h) {
	link x=NULL;
	for (x=h; x->next != NULL; x=x->next)
		printf("%d ", x->item);
	printf("%d\n", x->item);
}
link reverse(link x) {
	link t, y=x, r = NULL;
	while(y != NULL) {
		t = y->next;
		y->next = r;
		r=y;
		y=t;
	}
	return r;
}
