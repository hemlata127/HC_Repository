/*
Write a program which checks whether 7th & 8th & 9th bit is On or OFF. 
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
typedef unsigned int UINT;

BOOL CheckBit(UINT iNum)
{
	//mask: 0000 0000 0000 0000 0000 0001 1100 0000
	UINT iMask = 0x000001C0;
	if((iNum & iMask) == iMask)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	UINT iNo = 0;
	BOOL bRet = FALSE;
	
	//Accept number from user
	printf("Enter number:\n");
	scanf("%d",&iNo);
	
	bRet = CheckBit(iNo);
	if(bRet == TRUE)
	{
		printf("ON");
	}
	else
	{
		printf("OFF");
	}
	
	return 0;
}