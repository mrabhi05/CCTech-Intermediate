#include <iostream>
#include <math.h>
using namespace std;


class Calculator
{
float a, b;
public:


	void result()
	{
		cout << "Enter First Number: ";
		cin >> a;
		cout << "Enter Second Number: ";
		cin >> b;
	}
	
	float add()
	{
		return a + b;
	}
	
	float sub()
	{
		return a - b;
	}
	
	float mul()
	{
		return a * b;
	}
	
	float div()
	{
		if (b == 0)
		{
			cout << "Division By Zero" <<
					endl;
			return INFINITY;
		}
		else
		{
			return a / b;
		}
	}
};

int main()
{
	int ch;
	Calculator c;
	
		
	do
	{
		cout << "Add 2 Numbers - [Enter 1]" <<
			"\nSubtract 2 Numbers - [Enter 2]" <<
			"\nMultiply 2 Numbers - [Enter 3]" <<
			"\nDivide 2 Numbers - [Enter 4]" <<
			"\nTo Exit - [Enter 0] ";
		cout << "\nEnter Choice: ";
		cin >> ch;
		switch (ch)
		{
		case 1:
			
			
			c.result();	
			
			
			cout << "Result: " <<
					c.add() << endl;
			break;
		case 2:
			
			
			c.result();
			cout << "Result: " <<
					c.sub() << endl;
			break;
		case 3:
			c.result();
			
			
			cout << "Result: " <<
					c.mul() << endl;
			break;
		case 4:
			c.result();
			
			
			cout << "Result: " <<
					c.div() << endl;
			break;
		}
		
	} while (ch >= 1 && ch <= 4);
	
	return 0;
}
