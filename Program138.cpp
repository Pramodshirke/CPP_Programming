#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<iostream>
using namespace std;
// O_RDONLY         Read
// O_WRONLY        Write
// O_RDWR           Read & Write
// O_CREAT           Create new file


class FileX
{
public:
    int fd;
    
    FileX(char Name[])
    {
        fd = open(Name,O_RDONLY);
        if(fd == -1)
        {   cout<<"Unable to create file\n";}
	    else
		{cout<<"Created...\n";}
    }
    ~FileX()
    {
        close(fd);
    }
	void ReadData()
	{
		char Arr[20]={'\0'};
		read(fd,Arr,10); //(kuthun,kashat,kiti);
		printf("%s",Arr);
	}
};
int main()
{
    char str[30];
    cout<<"Enter file name\n";
    cin>>str;
    FileX obj(str);
	obj.ReadData();
    return 0;
}
