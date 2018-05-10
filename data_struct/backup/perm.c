/***********************************************
#
#      Filename: perm.c
#
#        Author: zg107uc@ustc.mail.edu.cn
#   Description: 尼筛素数法
#        Create: 2018-04-20 19:55:33
# Last Modified: 2018-04-20 19:55:33
***********************************************/
#include <stdio.h>

#define N 1000

main()
{
	int i, j, a[N];
	for (i=2; i<N; i++)
		a[i]=1;
	for (i=2; i<N; i++)
		if (a[i])
			for (j=2; i*j<N; j++)
				a[i*j]=0;
	for (i=2; i<N; i++)
		if (a[i])
			printf("%4d", i);
	printf("\n");
}
