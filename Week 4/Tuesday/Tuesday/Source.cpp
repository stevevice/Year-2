//gist: write a function that takes a function as a parameter.The function it receives should take two arguments(min, max).
//Calculate a random number between those two numbers and return it.if the function fails return or assert on the call. 
//if the function that takes the min, max function fails give feedback to the user.

#include <iostream>
#include <stdlib.h> //for rand
#include <time.h> // time stuff

using namespace std;

int main()
{
	RandNumGen();

	return 0;
}

int RandNum(int min, int max)
{
	int Num;

	if (max >= min)
		Num = rand() % max + min;
	else
		Num = rand() % min + max;

	return Num;
}

void RandNumGen()
{
	int min, max;

	cout << "Hey whats the smallest whole number you want? ";
	cin >> min;
	cout << "Whats the largest whole number you want? ";
	cin >> max;

	int newNum = RandNum(min, max);

}