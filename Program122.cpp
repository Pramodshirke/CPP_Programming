#include<iostream>  
using namespace std;
class Arithmatic
{
	public:
	int iNo1=0,iNo2=0;
	
	Arithmatic(int x,int y)
	{
       iNo1=x;
	   iNo2=y;
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
	
	Arithmatic obj1(12,23);
	Arithmatic obj2(58,45);
	
	iRet1=obj1.Addition();
	cout<<"Addition is:"<<iRet1<<"\n";
	
	iRet2=obj2.Subsraction();
	cout<<"Subsraction is:"<<iRet2<<"\n";
	
	return 0;
}