#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node *next;
	struct node *prev;
}NODE,*PNODE;

class DoublyCL
{
	private:
	PNODE Head;
	PNODE Tail;
	int iSize;
	
	public:
	DoublyCL()
	{
		Head=NULL;
		Tail=NULL;
		iSize=0;
	}
	
	void InsertFirst(int);
	void InsertLast(int);
	void InsertAtPos(int,int);
    void DeleteFirst();
    void DeleteLast();
	void DeleteAtPos(int);
	void Display();
	int Count();
};
void DoublyCL::InsertFirst(int iNo) 
{
	PNODE newn=new NODE;
	newn->data=iNo;
	newn->next=NULL;
	newn->prev=NULL;
	
	if(iSize == 0)
	{
		Head=newn;
		Tail=newn;
	}
	else
	{
		newn->next=Head;
		Head->prev=newn;
		Head=newn;
	}
	Tail->next=Head;
	Head->prev=Tail;
	iSize++;
}

void DoublyCL::InsertLast(int iNo)
{
	PNODE newn=new NODE;
	newn->data=iNo;
	newn->next=NULL;
	newn->prev=NULL;
	
	if(iSize == 0)
	{
		Head=newn;
		Tail=newn;
	}
	else
	{
		Tail->next=newn;
		newn->prev=Tail;
		Tail=newn;
	}
	Tail->next=Head;
	Head->prev=Tail;
	iSize++;
}

void DoublyCL::InsertAtPos(int iNo,int iPos)
{
	if((iPos < 1) || (iPos > iSize+1))
	{
		return;
	}
	if(iPos==1)
	{
		InsertFirst(iNo);
	}
	else if(iPos == iSize+1)
	{
		InsertLast(iNo);
	}
	else
	{
		PNODE newn=new NODE;
	    newn->data=iNo;
		newn->next=NULL;
		newn->prev=NULL;
		
		PNODE temp=Head;
		for(int i=1;i<iPos-1;i++)
		{
			temp=temp->next;
		}
		newn->next=temp->next;
		temp->next->prev=newn;
		temp->next=newn;
		newn->prev=temp;
		
		iSize++;
	}
}

void DoublyCL::DeleteFirst()
{
	if(iSize==0)
	{
		return;
	}
	else if(iSize==1)
	{
		delete Head;
		Head=NULL;
		Tail=NULL;
		iSize=0;
	}
	else
	{
		Head=Head->next;
		delete Tail->next;// delete Head->prev;
		Head->prev=Tail;
	    Tail->next=Head;
		iSize--;
	}
}

void DoublyCL::DeleteLast()
{
	if(iSize==0)
	{
		return;
	}
	else if(iSize==1)
	{
		delete Head;
		Head=NULL;
		Tail=NULL;
		iSize=0;
	}
	else
	{
		Tail=Tail->prev;
		delete Tail->next;
		Tail->next=Head;
		Head->prev=Tail;
		iSize--;
	}
}

void DoublyCL::DeleteAtPos(int iPos)
{
	if((iPos < 1) || (iPos > iSize))
	{
		return;
	}
	if(iPos==1)
	{
		DeleteFirst();
	}
	else if(iPos == iSize)
	{
		DeleteLast();
	}
	else
	{
		PNODE temp=Head;
		for(int i=1;i<iPos-1;i++)
		{
			temp=temp->next;
		}
		temp->next=temp->next->next;
		delete(temp->next->prev);
		temp->next->prev=temp;
		iSize--;
	}
}

void DoublyCL::Display()
{
	PNODE temp=Head;
	for(int i=1;i<=iSize;i++)
	{
		cout<<temp->data<<"\t";
		temp=temp->next;
	}
	cout<<"\n";
}

int DoublyCL::Count()
{
    return iSize;
}

int main()
{
	int iChoice=1,iValue=0,iNo=0,iRet=0,iPos=0;
	DoublyCL obj;
	
	while(iChoice != 0)
	{
		cout<<"*******************************\n";
		cout<<"Enter your Choice\n";
		cout<<"1: Insert First\n";
		cout<<"2: Insert Last\n";
		cout<<"3: Insert at POsition\n";
		cout<<"4: Delete First\n";
		cout<<"5: Delete Last\n";
		cout<<"6: Delete at position\n";
		cout<<"7: Display\n";
		cout<<"8: Count Nodes\n";
		cout<<"0: Exit Form Application\n";
		cin>>iChoice;
		cout<<"*******************************\n";
		
		switch(iChoice)
		{
			case 1:
			cout<<"Enter Data\n";
			cin>>iValue;
			obj.InsertFirst(iValue);
			break;
			
			case 2:
			cout<<"Enter Data\n";
			cin>>iValue;
			obj.InsertLast(iValue);
			break;
			
			case 3:			
			cout<<"Enter Data\n";
			cin>>iValue;
			cout<<"Enter Position\n";
			cin>>iPos;
			obj.InsertAtPos(iValue,iPos);
			break;
			
			case 4:
			obj.DeleteFirst();
			break;
			
			case 5:
			obj.DeleteLast();
			break;
			
			case 6:
			cout<<"Enter Position\n";
			cin>>iPos;
			obj.DeleteAtPos(iPos);
			break;
			
			case 7:
			cout<<"Elements Are:\n";
			obj.Display();
			break;
			
			case 8:
			iNo=obj.Count();
			cout<<"Number of Elements are:"<<iNo<<"\n";
			break;
		
			case 0:
			cout<<"Thank you for using the application\n";
			break;
            
			default:
			cout<<"Please Enter VALID Option\n";
			break;
		}//End of switch                                                           
	}//End of While
	
	return 0;
}