/*assignment:
1. create a function to calculate a prime number(show on paper or in comments what you think a prime number is. do not google it...)
	A Prime Number is a number that cant be divided by anything other than by itself and 1.
2. write a function that uses that function to find all prime numbers under 100.
3. write a function that determines if a number is a multiple of another number.
4. use your functions together to find all prime numbers below 1000.*/

#include <iostream>

using namespace std;

bool FunctionPrime(int);
void PrimeNumber(int);
void MultOfNum(int);

int main()
{
	MultOfNum(1000);
	cout << endl;
	PrimeNumber(1000);

	system("pause");
	return 0;
}

bool FunctionPrime(int num)
{
	if ((num % 2 == 0 && num != 2) || (num % 3 == 0 && num != 3) || (num % 5 == 0 && num != 5) || (num % 7 == 0 && num != 7))
	{
		return false;
	}
	else
		return true;
}

void PrimeNumber(int num)
{
	for (int i = num; i > 1; i--)
	{
		if (i == 1)
		{
			cout << i << " is neither prime nor not prime.\n";
		}
		else if(FunctionPrime(i) == true)
		{
			cout << i << " ";
		}
	}
	cout << "are prime\n \n";
}

void MultOfNum(int num)
{
	for (int i = 1; i < num; i++)
	{
		if (num % i == 0)
		{
			cout << i << " ";
		}
	}
	cout << "are multiples of " << num << endl;
}

