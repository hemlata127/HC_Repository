/*
1. Write a program which accept file name which contains data of all file. We have to print all
file names whose size is greater that 10 bytes. 
*/


#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<dirent.h>

void DisplayFile(char *dname)
{
	//pointer of type DIR - to hold return value of opendir
	DIR *dp = NULL;
	//pointer of type struct dirent - to hold return value of readdir
	struct dirent *dip = NULL;
	//variable to hold file path
	char name[256] = {'\0'};
	//object of stat structure - to hold file information
	struct stat sobj;
	//variable to hold return value of stat system call
	int ret = 0;
	
	//open directory
	dp = opendir(dname);
	if(dp == NULL)
	{
		printf("Unable to open directory: %s\n",dname);
		return;
	}
	printf("List of files with size greater than 10B:\n");
	//read directory
	while((dip = readdir(dp)) != NULL)
	{
		//create path from file name
		sprintf(name,"%s/%s",dname,dip->d_name);
		//call stat system call with filename to fetch file information
		ret = stat(name,&sobj);
		//iterate for regular files only
		if(S_ISREG(sobj.st_mode))
		{
			//check for file size
			if(sobj.st_size >= 10)
			{
				printf("Filename: %s\tFilesize: %ld\n",dip->d_name,sobj.st_size);
			}
		}
	}
	//close directory
	closedir(dp);
}

int main(int argc, char *argv[])
{
	//check for invalid number of arguments
	if(argc != 2)
	{
		printf("Error: Invalid number of arguments\n");
		printf("Use as: ./myexe dirname\n");
		return -1;
	}
	
	DisplayFile(argv[1]);
	
	return 0;
}