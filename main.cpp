#include <iostream>
#include "LinkedList.h"

using namespace std;

int main()
{
	LinkedList listik;
	try 
	{
		while (true)
			listik.pushBack(2);
	}
	catch (const bad_alloc& exception)
	{
		cout << exception.what();
	}
}

