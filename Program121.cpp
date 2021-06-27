#include<iostream>  
using namespace std;
class Arithmatic
{
	public:
	int iNo1=0,iNo2=0;
	
	void Accept()
	{
		cout<<"Enter First Number:\n";
		cin>>iNo1;
		
		cout<<"Enter Second Number:\n";
		cin>>iNo2;
	}
	
	int Addition()
	{		
	   int iResult=0;
	   iResult=iNo1+iNo2;
	   return iResult;
	}
	
	int Subsraction()
	{		
	   int iResult=0;
	   iResult=iNo1-iNo2;
	   return iResult;
	}
};

int main()
{
	int iRet1=0;
	int iRet2=0;
	
	Arithmatic obj1,obj2;
	
	obj1.Accept();
	iRet1=obj1.Addition();
	cout<<"Addition is:"<<iRet1<<"\n";
	
	obj2.Accept();
	iRet2=obj2.Subsraction();
	cout<<"Subsraction is:"<<iRet2<<"\n";
	
	return 0;
}