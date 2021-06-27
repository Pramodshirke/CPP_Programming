// Singly Linear Linked List In C++
#include<iostream>
using namespace std;
/*
struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
*/
typedef struct node
{
	int data;
	struct node *next;
}NODE,*PNODE;

class SinglyLL
{
private:
    PNODE Head;
    int iSize;
    
public:
    SinglyLL()  //Default Constructor
    {
        Head = NULL;
        iSize = 0;
    }
	
	int Count()
	{
		return iSize;
	}
	
	void Display()
	{
		PNODE temp=Head;
		
		while(temp != NULL)
		{
			cout<<temp->data<<"\t";
			temp=temp->next;
		}
		cout<<"\n";
	}
	
	void InsertFirst(int iValue)
	{
		PNODE newn=NULL;
		newn = new NODE;
		newn->data=iValue;
		newn->next=NULL;
		
		if(Head == NULL)
		{
			Head=newn;
		}
		else
		{
			newn->next=Head;
			Head=newn;
		}
		iSize++;
	}
	
	void InsertLast(int iValue)
	{
		PNODE newn=NULL;
		newn = new NODE;
		newn->data=iValue;
		newn->next=NULL;
		
		PNODE temp= Head;
		
		if(Head == NULL)
		{
			Head=newn;
		}
		else
		{
			while(temp->next != NULL)
			{
				temp=temp->next;
			}
			temp->next=newn;
		}
		iSize++;
	}
	
	void DeleteFirst()
	{
		if(Head!=NULL)
		{
			PNODE temp=Head;
			Head=Head->next;
			delete temp;
			iSize--;
		}
	}
	
	void DeleteLast()
	{
		if(Head==NULL)
		{
			return;
		}
		else if(Head->next == NULL)
		{
			delete Head;
			Head = NULL;
			iSize--;
		}
		else
		{
			PNODE temp = Head;
			while(temp->next->next!=NULL)
			{
				temp=temp->next;
			}
			delete temp->next;
			temp->next=NULL;
			iSize--;
		}
	   
	}
	
	void InsertAtPos(int iValue,int iPos)
	{
		PNODE newn=NULL;
		PNODE temp=Head;
		
		
		if((iPos < 1) || (iPos > iSize+1))      // Invalid position
		{
			return;
		}
    
		if(iPos == 1)                   // First poistion
		{
			InsertFirst(iValue);
		}
		else if(iPos == iSize+1)    // Last position
		{
			InsertLast(iValue);
			
		}
		else        // In between fisrst and last position
		{	
			newn= new NODE;
			newn->data=iValue;
			newn->next=NULL;
        
			for(int i = 1; i< iPos-1 ; i++)
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
		if((iPos < 1) || (iPos > iSize+1))      // Invalid position
		{
			return;
		}
    
		if(iPos == 1)                   // First poistion
		{
			DeleteFirst();
		}
		else if(iPos == iSize+1)    // Last position
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
	int iChoice=1,iNo=0,iPos=0;
	
	SinglyLL obj1;
	
	while(iChoice != 0)
	{
		cout<<"*************************************\n";
		cout<<"Enter your choice:"<<"\n";
		cout<<"1: Insert at first position"<<"\n";
		cout<<"2: Insert at last Position"<<"\n";
		cout<<"3: Insert at given position"<<"\n";
		cout<<"4: Delete first Node"<<"\n";
		cout<<"5: Delete last Node"<<"\n";
		cout<<"6: Delete Node at given Positon"<<"\n";
		cout<<"7: Display the Contents"<<"\n";
		cout<<"8: Count the number of nodes"<<"\n";
		cout<<"0: Exit/ the Application"<<"\n";
		cin>>iChoice;
		
	   switch(iChoice)
	   {
			case 1:
			cout<<"Enter Number\n";
			cin>>iNo;
			obj1.InsertFirst(iNo);
			break;
		
			case 2:
			cout<<"Enter Number\n";
			cin>>iNo;
			obj1.InsertLast(iNo);
			break;
		
			case 3:
			cout<<"Enter Number\n";
			cin>>iNo;
			cout<<"Enter Position\n";
			cin>>iPos;
			obj1.InsertAtPos(iNo,iPos);
			break;
		
			case 4:
			obj1.DeleteFirst();
			break;
		
			case 5:
			obj1.DeleteLast();
			break;
		
			case 6:
			cout<<"Enter Position\n";
			cin>>iPos;
			obj1.DeleteAtPos(iPos);
			break;
		
			case 7:
			obj1.Display();
			break;
			
			case 8:
			iNo=obj1.Count();
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