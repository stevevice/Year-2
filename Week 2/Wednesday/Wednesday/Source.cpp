#include <iostream>

int main()
{
	int Matrix[4][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };
	int ReverseMatrix[4][4];
	int x = 3;
	int y = 3;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			ReverseMatrix[x][y] = Matrix[i][j];
			y -= 1;
		}
		y = 3;
		x -= 1;
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (j < 3)
			{
				std::cout << ReverseMatrix[i][j] << "	";
			}
			else
			{
				std::cout << ReverseMatrix[i][j] << std::endl;
			}
		}
	}

	system("PAUSE");
	return 0;
}