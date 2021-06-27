#include<iostream>
using namespace std;

class Array
{
protected:
    int *Arr;
    int iSize;

public:
    Array(int value=10)
    {
        cout<<"Inside Constructor\n";
		this->iSize=value;
        this->Arr=new int[iSize];
    }

    Array(Array &ref)
    {
        cout<<"Inside Copy Constructor\n";
        this->iSize=ref.iSize;
        this->Arr=new int[this->iSize];

        for(int i=0;i<iSize;i++)
        {
            this->Arr[i]=ref.Arr[i];
        }
    }

    ~Array()
    {
        cout<<"Inside Distructor\n";
        delete []Arr;
    }

    inline void Accept();
	inline void Display();
};

void Array::Accept()
{
    cout<<"Please Enter Elements\n";
    
    for(int i=0;i<this->iSize;i++)
    {
        cin>>Arr[i];
    }
}

void Array::Display()
{
    cout<<"Elements in array are\n";
    
    for(int i=0;i<(this->iSize);i++)
    {
        cout<<Arr[i]<<"\t";
    }
    cout<<"\n";
}

class ArrSearch : public Array
{
	public:
	ArrSearch(int no=10):Array(no)
	{}
	
	int Frequency(int);
	int SearchFirst(int);
	int SearchLast(int);
	int EvenCount();
	int OddCount();
	int SumAll();
	
};

int ArrSearch::SearchFirst(int value)
{
	int i=0;
	
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]==value)
		{
			break;
		}
	}
	if(i==iSize)
	{
		return -1;
	}
	else
	{
		return i+1;
	}
}

int ArrSearch::Frequency(int value)
{
	int iCnt=0;
	
	for(int i=0;i<iSize;i++)
	{
		if(Arr[i]==value)
		{
			iCnt++;
		}
	}
	
	return iCnt;
}
 
int ArrSearch::SearchLast(int value)
{
	int i=0;
	
	for(i=iSize;i>0;i--)
	{
		if(Arr[i]==value)
		{
			break;
		}
	}
	if(i==0)
	{
		return -1;
	}
	else
	{
		return i+1;
	} 
}

int ArrSearch::EvenCount()
{
	int iCnt=0;
	
	for(int i=0;i<iSize;i++)
	{
		if(Arr[i] % 2 ==0)
		{
			iCnt++;
		}
	}
	
	return iCnt; 
}

int ArrSearch::OddCount()
{
	int iCnt=0;
	
	for(int i=0;i<iSize;i++)
	{
		if(Arr[i] % 2 != 0)
		{
			iCnt++;
		}
	}
	
	return iCnt;  
}
int ArrSearch::SumAll()
{
	int iSum=0;
	
	for(int i=0;i<iSize;i++)
	{
		iSum=iSum+Arr[i];
	}
	
	return iSum;  
}
int main()
{
    cout<<"Inside Main\n";

    ArrSearch obj(5);
    obj.Accept();
    obj.Display();

	int iRet=obj.Frequency(11);
	cout<<"Frequency is"<<iRet<<"\n";
	
	iRet=obj.SearchFirst(11);
	cout<<"First Occurence is"<<iRet<<"\n";
	
	iRet=obj.SearchLast(11);
	cout<<"Last Occurence is"<<iRet<<"\n";
	
	iRet=obj.EvenCount();
	cout<<"Even Count is"<<iRet<<"\n";
	
	iRet=obj.OddCount();
	cout<<"Odd Count is"<<iRet<<"\n";
	
	iRet=obj.SumAll();
	cout<<"Sum of All Elements is"<<iRet<<"\n";
    
	return 0;
}