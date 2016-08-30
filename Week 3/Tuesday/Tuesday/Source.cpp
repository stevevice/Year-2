/*write a function that takes another function as an argument.
store this argument in an array.
then execute every function in the array
this is gist 5*/
//PS NEED FUNCTION POINTER

#include <iostream>
#include <string>

bool SteveBad();
std::string HowBad(bool);
std::string Insults(bool);


int main() 
{
	std::string stuff = "\nboop";
	std::string	(*howBad)(bool) = HowBad;
	std::string(*insult)(bool) = Insults;
	std::string StringArrays[3] = {howBad(SteveBad) , insult(SteveBad), stuff  };

	for (int i = 0; i < 3; i++)
	{
		std::cout << StringArrays[i];
	}

	system("Pause");
	return 0;
}

bool SteveBad()
{
	return true;
} 

std::string HowBad(bool IsSteveBad)
{
	if (IsSteveBad)
	{
		return "He is so bad at programming. \n";
	}
	else
		return "Eh. He aint that bad. \n";
}

std::string Insults(bool IsSteveBad)
{
	if (IsSteveBad)
	{
		return "He forgot how to write a function call. \nHow does does someone do that \n";
	}
	else
		return "Eh. He still sucks \n";
}