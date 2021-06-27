#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node *next;
}NODE,*PNODE;

class SinglyCL
{
	private:
	PNODE Head;
	PNODE Tail;
	int iSize;
	
	public:
	
	SinglyCL()
	{
		Head=NULL;
		Tail=NULL;
		iSize=0;
	}
	
	void InsertFirst(int iNo)
	{
		PNODE newn=NULL;
		newn= new NODE;
		newn->data=iNo;
		newn->next=NULL;
		
		if((Head==NULL) && (Tail==NULL))
		{
			Head=newn;
			Tail=newn;
		}
		else
		{
			newn->next=Head;
			Head=newn;
		}
		iSize++;
		Tail->next=Head;
	}
	
	void InsertLast(int iNo)
	{
		PNODE newn=NULL;
		newn= new NODE;
		newn->data=iNo;
		newn->next=NULL;
		
		if((Head==NULL) && (Tail==NULL))
		{
			Head=newn;
			Tail=newn;
		}
		else
		{
			Tail->next=newn;
			Tail=Tail->next; //Tail=newn;
		}
		iSize++;
		Tail->next=Head;
	}
	
	int Count()
	{
		return iSize;
	}
	
	void Display()
	{
		PNODE temp=Head;
		
		for(int i=1;i<=iSize;i++)
		{
			cout<<temp->data<<"\t";
			temp=temp->next;
		}
		cout<<"\n";
	}
	
	void DeleteFirst()
	{
		if((Head==NULL) && (Tail==NULL)) //if(iSize==0)
		{
			return;
		}
		else if(Head==Tail)//if(iSize==1)
		{
			delete Head;
			Head=NULL;
			Tail=NULL;
			iSize--;
		}
		else
		{
			Head=Head->next;
			delete Tail->next;
			Tail->next=Head;
			iSize--;
		}
	}
	
	void DeleteLast()
	{
		if((Head==NULL) && (Tail==NULL)) //if(iSize==0)
		{
			return;
		}
		else if(Head==Tail)//if(iSize==1)
		{
			delete Head;
			Head=NULL;
			Tail=NULL;
			iSize--;
		}
		else
		{
			PNODE temp=Head;
			for(int i=1;i<iSize-1;i++)
			{
				temp=temp->next;
			}
			delete Tail;
			Tail=temp;
			Tail->next=Head;
			iSize--;
		}
	}
	
	void InsertAtPos(int iNo, int iPos)
    {
		int i=0;
		PNODE newn = NULL;
		PNODE temp = Head;
    
		if((iPos < 1) || (iPos > iSize+1))      // Invalid position
		{
			return;
		}
    
		if(iPos == 1)                   // First poistion
		{
			InsertFirst(iNo);
		}
		else if(iPos == iSize+1)    // Last position
		{
			InsertLast(iNo);
		}
		else        // In between fisrst and last position
		{
			newn = new NODE;
			newn->data = iNo;
			newn->next = NULL;
        
			for(i = 1; i< iPos-1 ; i++)
			{
				temp = temp -> next;
			}
			newn->next = temp->next;
			temp->next = newn;
			iSize++;
		}
	}
	
    void DeleteAtPos(int iPos)
	{
		PNODE temp=Head;
		PNODE Target=NULL;
		if((iPos < 1) || (iPos > iSize))      // Invalid position
		{
			return;
		}
    
		if(iPos == 1)                   // First poistion
		{
			DeleteFirst();
		}
		else if(iPos == iSize)    // Last position
		{
			DeleteLast();
		}
		else        // In between fisrst and last position
		{	
			for(int i = 1;i< iPos-1; i++)
            {
				temp = temp -> next;
            }
        
			Target=temp->next;
			temp->next=Target->next;
			free(Target);
			iSize--;
		}
	}		
	
};


int main()
{
	SinglyCL obj;
	int iChoice=1,iRet=0,iPos=0,iValue=0,iNo;
	
	while(iChoice != 0)
	{
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
			cout<<"Enter Position\n\n";
			cin>>iPos;
			obj.DeleteAtPos(iPos);
			break;
			
			case 7:
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
		}
	}
	return 0;
}