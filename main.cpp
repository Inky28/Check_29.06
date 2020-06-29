#include <iostream>
#include <functional>
#include <list>

using namespace std;

//void Test1()
//{
//	cout << "Test1\n";
//}
//
//void test2()
//{
//	cout << "Test2\n";
//}
//
//int suma(int a, int b)
//{
//	return a + b;
//}

void Check1(int a)
{
	if (a % 2 == 0)
	{
		cout << "Check 1: " << a << endl;
	}
}

void Check2(int a)
{
	if (a >= 10 && a <= 50)
	{
		cout << "Check 2: " << a << endl;
	}
}

void Temp(list<int> numbers, list<function<void(int)>> listFunction)
{
	for (int item : numbers)
	{
		for (function<void(int)>funct : listFunction) //auto funct : listFunction
		{
			funct(item);
		}
	}
}

int main()
{
	/*function<int(int,int)> t;

	t = suma;*/

	//Test1();

	list<int> listNumber = { 4,28,42,52,76,234,7,4,21,346,23,0 };
	list<function<void(int)>>functions;

	functions.push_back(Check1);
	functions.push_back(Check2);

	Temp(listNumber, functions);

	return 0;
}