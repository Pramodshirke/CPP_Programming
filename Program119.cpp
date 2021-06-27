#include<iostream>  
using namespace std;
int Addtion(int iNo1,int iNo2)
{
	int iResult=0;
	
	iResult=iNo1+iNo2;
	
	return iResult;
}
int main()
{  
   int iValue1=0,iValue2=0,iRet=0;
   
   cout<<"Enter First Number\n";
   cin>>iValue1;
   
   cout<<"Enter Second Number\n";
   cin>>iValue2;   
   
   iRet=Addtion(iValue1,iValue2);
   
   cout<<"Addtion is:"<<iRet<<"\n";
   
   return 0; 
}  