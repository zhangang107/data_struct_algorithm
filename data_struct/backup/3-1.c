/***********************************************
#
#      Filename: 3-1.c
#
#        Author: zg107uc@ustc.mail.edu.cn
#   Description: 程序3.1
#        Create: 2018-04-03 09:35:11
# Last Modified: 2018-04-03 09:35:11
***********************************************/
#include <stdio.h>

int lg(int);

int main()
{
	int i, N;
	for(i=1, N=10; i<=6; i++, N *= 10)
		printf("%7d %2d %9d\n", N, lg(N), N*lg(N));
	return 0;
}

int lg(int N) {
	int i;
	for(i=0; N>0; i++, N /=2);
	return i;
}

