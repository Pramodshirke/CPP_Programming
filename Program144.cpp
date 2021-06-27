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
// stdin:   Standerd Input Device    1
// stdout:  Standerd Output Device   2
// stderr:  Standerd Error Device    3


class FileX
{
public:
    int fd;
    
    FileX(char Name[])
    {
        fd = open(Name,O_WRONLY);
        if(fd == -1)
        {   cout<<"Unable to create file\n";}
        else
        {cout<<"File succesfully created..\n";}
    }
    ~FileX()
    {
        close(fd);
    }
    void WriteData()
	{
	    char str[]="Pune";
       	write(fd,str,4);
	}
};
int main()
{
    char str[30];
    cout<<"Enter file name\n";
    cin>>str;
    FileX obj(str);
    
    obj.WriteData();
    return 0;
}
