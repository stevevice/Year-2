#include <iostream>

int main()
{
	int IDMatrix[4][4] = {1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1};
	int TempMatrix[4][4];
	int vec[4] = { 5, 3, 2, 1 };
	int TransVec[4];
	int num = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (j < 3)
			{
				std::cout << IDMatrix[i][j] << "	";
			}
			else
			{
				std::cout << IDMatrix[i][j] << std::endl;
			}
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			TempMatrix[i][j] = IDMatrix[i][j] * vec[i];
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			num += TempMatrix[i][j]; 
		}
		TransVec[i] = num;
		num = 0;
	}

	for  (int i = 0; i < 4; i++)
	{
		std::cout << TransVec[i] << std::endl;
	}

	return 0;
}