#include <iostream>
#include <stdio.h>

int main()
{
	
	using namespace std;
	int num;
	num = rand() % 20 + 1;
	
	if (num % 3 == 0 && num % 5 == 0)
	{
		cout << "FizzBuzz" << endl;
	}
	else if (num % 3 == 0)
	{
		cout << "Fizz" << endl;
	}
	else if (num % 5 == 0)
	{
		cout << "Buzz" << endl;
	}
	else
	{
		cout << "Nothing" << endl;
	}

	getchar();
	
}