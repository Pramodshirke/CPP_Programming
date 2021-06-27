#include<iostream>
using namespace std;

class StringX
{
	public:
	char str[30];
	
	void Accept()
	{
		cout<<"Enter string\n";
		scanf("%[^'\n']s",str);
	}
	int StrlenX()
	{
		int iCnt=0;
		char *ptr=str;
		
		while(*ptr=='\0')
		{
			ptr++;
			iCnt++;
		}
		return iCnt;
	}
};

int main()
{
	char Ret;
	StringX obj;
	
	obj.Accept();
	Ret=obj.StrlenX();
	
	return 0;
}