/*************************************************************************
	> File Name: test.c
	> Author: liugang
	> Mail: 308584349@163.com 
	> Created Time: Thu 19 Nov 2020 02:29:22 PM CST
 ************************************************************************/

#include<stdio.h>
#include "max.h"

int main(int argc, char *argv[])
{
	int a = 10, b = -2, c = 100;
    printf("max among 10, -2 and 100 is %d.\n", max(a, b, c));
    return 0;
}

