#include "stdafx.h"
#include <iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		cout << "I am Base constructor" << endl;
	}

	virtual void WhoAmI()
	{
		cout << "I am Base" << endl;
	}

	virtual ~Base()
	{
		cout << "I am Base Destructor" << endl;
	}

};

class Derived : public Base
{
public:
	Derived()
	{
		cout << "I am Derived Constructor" << endl;
	}

	void WhoAmI()
	{
		cout << "I am Derived" << endl;
	}

	~Derived()
	{
		cout << "I am Derived Destructor" << endl;
	}

};

void GetWhoAmI(Base* pBase)
{
	pBase->WhoAmI();
}

int main()
{

	Derived d;
	d.WhoAmI();
	
	cout << "==========================" << endl;
	Base* pBaseToDerived = new Derived(); // need tests with virtual destructor and method in base class
	GetWhoAmI(pBaseToDerived);
	delete pBaseToDerived;

	cout << "==========================" << endl;
	Derived* pDerived = new Derived();
	GetWhoAmI(pDerived);
	delete pDerived;
		
	system("pause");
	return 0;
}

