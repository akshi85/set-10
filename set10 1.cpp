#include<iostream>
#include<string.h>
using namespace std;
class Car;
class Garage
{
	public:
	   Garage(int arg)
	   {
	   	 try
	   	 {
	   	 	throw arg;
		 }
		 catch(int arg)
		 {
		 	cout<<arg<<" handeled...";
		 }
	   }
};
class Car
{
	public:
		Car(int n)
		{
			Garage g1(n);
		}
		
};

class Motor
{
	public:
		Motor()
		{
			throw Car(70);
		}
};
int main()
{
	try
	{
		Motor no1;
	}
	catch(...)
	{
		cout<<" ---end---";
	}
	return 0;
}
