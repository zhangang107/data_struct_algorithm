/***********************************************
#
#      Filename: test_sort.cpp
#
#        Author: zg107uc@ustc.mail.edu.cn
#   Description: 测试排序算法
#        Create: 2018-04-20 09:30:16
# Last Modified: 2018-04-20 12:47:27
***********************************************/
#include "sort.h"
#include <iostream>

using namespace std;

void print(int data[], int n){
	int i=0;
	while(i<n-1)
		cout<<data[i++]<<" ";
	cout<<data[i]<<endl;
}
int main()
{
	int data[] = {1,3,2,5,7,8,9,6,4,0};
	int n = 10;
	print(data, n);
	//InsertSort(data, n);
	BubbleSort(data, n);
	print(data, n);
	return 0;
}
