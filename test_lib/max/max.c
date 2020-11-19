/*************************************************************************
	> File Name: max.c
	> Author: liugang
	> Mail: 308584349@163.com 
	> Created Time: Thu 19 Nov 2020 01:55:22 PM CST
 ************************************************************************/

#include<stdio.h>

int max(int n1, int n2, int n3)
{
    int max_num = n1;
    max_num = max_num < n2? n2: max_num;
    max_num = max_num < n3? n3: max_num;
    return max_num;
}
