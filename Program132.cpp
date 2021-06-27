#include<iostream>
using namespace std;

class NumberX
{
public:
	int iNo;
    void Accept()
    {
        cout<<"Enter Number\n";
        cin>>iNo;
    }
    void Pattern()
    {
		int iValue=iNo,iTemp=0;
		
        while(iValue > 0)
		{
			iCnt++;
			iValue=iValue/10;
		}
		iValue=iNo;
		
		for(i=iCnt;i>0;i--)
		{
			for(j=0;j<i;j++)
			{
				cout<<iValue%10;
				iValue=iValue/10;
			}
			iValue=iNo;
			
		}
    }
};
int main()
{
    NumberX obj;
    obj.Accept();
    obj.Pattern();
    return 0;
}
