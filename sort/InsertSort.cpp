/***********************************************
#
#      Filename: InsertSort.cpp
#
#        Author: zg107uc@ustc.mail.edu.cn
#   Description: 插入排序实现
#        Create: 2018-04-20 09:03:38
# Last Modified: 2018-04-20 09:31:01
***********************************************/
#include "sort.h"

void InsertSort(int data[], int n) {
	int i,j,k;
	for (i=1; i<n; i++) {
		for (j=i-1; j>=0; j--)
			if (data[j] < data[i])
				break;
		if (j != i-1) {
			int tmp = data[i];
			for (k=i-1; k>j;--k)
				data[k+1] = data[k];
			data[k+1] = tmp;
		}
	}
}
