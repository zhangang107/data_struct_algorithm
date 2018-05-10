/***********************************************
#
#      Filename: BubbleSort.cpp
#
#        Author: zg107uc@ustc.mail.edu.cn
#   Description: 冒泡排序
#        Create: 2018-04-20 12:31:42
# Last Modified: 2018-04-20 12:46:59
***********************************************/
#include "sort.h"
#include <algorithm> //为引入 swap函数

void BubbleSort(int data[], int n) {
	int i, j;
	bool flag;
	for (i=n-1; i>0; i--) {
		flag = false;
		for (j = 0; j<i; j++) {
			if (data[j] > data[j+1]) {
				flag = true;
				std::swap(data[j], data[j+1]);
			}
		}
		if (!flag)
			break;
	}
}
