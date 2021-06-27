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
	int Pattern()
	{
      int iCnt=0;
	  char *ptr=str;
	  char *s=str;
	  
	  while(*ptr!='\0')
	  {
		  while(*(s+iCnt) != '\0')
		  {
			cout<<*s<<"\t";  
			s++;
		  }
		  s=str;
		  iCnt++;
		  ptr++;
          cout<<"\n";		  
	  }
	}
};

int main()
{
	char Ret;
	StringX obj;
	
	obj.Accept();
	
	obj.Pattern();
	
	return 0;
}