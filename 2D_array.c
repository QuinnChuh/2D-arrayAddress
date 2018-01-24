/* 
Function:
	2D-array address essentially
@Author : QuinnChuh
Date : 2018-1-21
 */
#include <stdio.h>

int main()
{
	int s[4][3]={
		{152, 10},
		{132, 20},
		{164, 30},
		{786, 40}
	};
	int i;
	
	for(i = 0; i <=3; i++)
	{
		printf("\nAddress of %d th 1-D aarray = %u", i, s[i]);
	}
	printf("\n");
	return 0;
}