/*
Write a program which accept string from user and copy that characters of that string into another string by converting all capital characters into small case.
Input : "Unix Opearting System"
Output : "unix operating system" 
*/

#include<stdio.h>

void CopyString(char src[],char dest[])
{
	while(*src != '\0')
	{
		if((*src >= 'A') && (*src <= 'Z'))
		{
			*dest = *src + 32;
		}
		else
		{
			*dest = *src;
		}
		src++;
		dest++;
	}
}

int main()
{
	char str1[30] = {'\0'};
	char str2[30] = {'\0'};
	
	//Accept string from user
	printf("Enter string:\n");
	scanf("%[^\n]s",str1);
	
	CopyString(str1,str2);
	
	//Display copied string
	printf("%s",str2);
	
	return 0;
}