#include<iostream>
using namespace std;

class StringX
{
public:
    char str[30];
    void Accept()
    {
        cout<<"Enter String\n";
        scanf("%[^'\n']s",str);
    }
    void ReverseWord()
    {
		char *ptr=str;
		char *start;
		char *end;
		char temp;
		start=str;
		end=str;
		while(*ptr!='\0')
		{
			if(*ptr==' ')
			{
				while((*ptr==' ') && (*ptr!='\0'))
				{
					start++;
					ptr++;
					end++;
				}
			}
			else
			{
				while((*ptr!=' ') && (*ptr!='\0'))
				{
					while((*end!=' ') && (*end !='\0'))
					{
						end++;
                        ptr++;						
					}
					end--;
					
					while(start<end)
					{
						temp=*start;
						*start=*end;
						*end=temp;
						start++;
						end--;
					}
					start=ptr;
					end=ptr;
				}
			}
		}
	}
};
int main()
{
	int iRet;
    StringX obj;
    obj.Accept();
    obj.ReverseWord();

    cout<<"Reversed Word:"<<obj.str;
    return 0;
}
