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
        fd = open(Name,O_RDONLY);
        if(fd == -1)
        {   cout<<"Unable to create file\n";
	        exit(0);//He Chukich Ahe
	    }
        else
        {cout<<"File succesfully created..\n";}
    }
    ~FileX()
    {
        close(fd);
    }
    void ReadData(int size)
    {
		int ret=0;
        char *Arr= new char[size];
        ret=read(fd,Arr,size);
		printf("%d\n",ret);
        write(1,Arr,ret);
		delete []Arr;
    }
};
int main()
{
    int no;
    char str[30];
    cout<<"Enter file name\n";
    cin>>str;
    FileX obj(str);
    cout<<"Enter number of characters you want to read.\n";
    cin>>no;
    
    obj.ReadData(no);
    return 0;
}
