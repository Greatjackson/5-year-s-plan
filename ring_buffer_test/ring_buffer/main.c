/*************************************************************************
	> File Name: main.c
	> Author: liugang
	> Mail: 308584349@163.com 
	> Created Time: Wed 18 Nov 2020 03:34:39 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "ringBuffer.h"
// 主函数
int main()
{
	char c;
	int readLen;
	u8 readBuffer[10];
	//setvbuf(stdout,NULL,_IONBF,0); //pinrtf、putchar不能立马输出，打开此注释
	initRingbuffer();

	printf("Please enter a line [blank line to terminate]> ");
	do{
		c=getchar();
		putchar(c);
		switch(c)
		{
			case 'Q':
				goto exit;
			break;
			case 'R':
				readLen = readRingbuffer(readBuffer,10);
				printf("readRingbuffer len:%d\n",readLen);
				if(readLen > 0){
					printf("readRingbuffer:");
					for(int i=0;i<readLen;i++){
						printf("%c ",(char)readBuffer[i]);
					}
					printf("\n");
				}
			break;
			default :
				if(c!='\n') wirteRingbuffer((u8*)&c,1);
			break;
		}
	}while (1);



exit:
	releaseRingbuffer();
	printf("exit.\n");
    return 0;
}

