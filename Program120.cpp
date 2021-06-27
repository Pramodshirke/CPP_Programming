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
	int iRet=0;
	
	Arithmatic obj;
	
	obj.Accept();
	iRet=obj.Addition();
	cout<<"Addition is:"<<iRet<<"\n";
	
	iRet=obj.Subsraction();
	cout<<"Subsraction is:"<<iRet<<"\n";
	
	return 0;
}