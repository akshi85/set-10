#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int a,b,c;
	char solution[]="can not divid by zero";
	a=5,b=0;
	try
	{
		if(b==0)
		{
		
		throw solution;
	    }
	
	else
	{
		c=a/b;
		cout<<"C="<<c<<endl;
	}
    }
    catch(char n[])
    {
	    cout<<n<<endl;
    }
    catch(...)
    {
	    cout<<"generl exception";
    }
}
