/***********************************************
#
#      Filename: ysf.c
#
#        Author: zg107uc@ustc.mail.edu.cn
#   Description: 约瑟夫环问题
#        Create: 2018-04-20 21:16:21
# Last Modified: 2018-04-20 21:16:21
***********************************************/
#include <stdlib.h>

typedef int Item;
typedef struct node* link;
struct node {Item item; link next;};

main(int argc, char *argv[])
{
	int i, N = atoi(argv[1]), M = atoi(argv[2]);
	link t = malloc(sizeof *t), x = t;
	t->item = 1; t->next = x;
	for (i=2; i<=N; i++) {
		x = (x->next=malloc(sizeof *x));
		x->item = i; x->next=t;
	}
	while (x != x->next) {
		for (i=1; i<M; i++) x=x->next;
		printf("%d ", x->next->item);
		x->next = x->next->next; N--;
	}
	printf("%d\n", x->item);
}
