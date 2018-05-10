/***********************************************
#
#      Filename: SelectSort.cpp
#
#        Author: zg107uc@ustc.mail.edu.cn
#   Description: 选择排序
#        Create: 2018-04-20 12:51:10
# Last Modified: 2018-04-20 12:56:30
***********************************************/
#include "sort.h"
#include <algorithm>

void SelectSort(int data[], int n) {
	int i,j, min;
	for(i=0; i<n; i++) {
		min = i;
		for (j=i+1; j<n; j++) {
			if (data[j] < data[min])
				min = j;
		}
		if (min!=i)
			std::swap(data[i], data[min]);
	}
}
