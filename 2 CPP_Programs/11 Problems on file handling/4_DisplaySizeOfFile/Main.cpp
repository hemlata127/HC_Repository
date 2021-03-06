/*
Write application which accept file name from user and display size of file.
Input : Demo.txt
Output : File size is 56 bytes
*/

#include<iostream>
using namespace std;
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int main(int argc, char *argv[])
{
	//variable to hold file descriptor
	int fd = 0;
	//buffer to read the file contents
	char buffer[512] = {'\0'};
	//variable to hold return value of lseek
	int ret = 0;
	
	char fname[20] = {'\0'};
	cout<<"Enter file name:\n";
	cin>>fname;
	
	fd = open(fname,O_RDONLY);
	if(fd == -1)
	{
		cout<<"Unable to open the file\n";
		return -1;
	}
	
	ret = lseek(fd,0,SEEK_END);
	
	cout<<"File size is "<<ret<<" bytes"<<"\n";
	
	//close the file
	close(fd);
	
	return 0;
}