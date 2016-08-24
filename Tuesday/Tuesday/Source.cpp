#include <iostream>

int main()
{
	int IDMatrix[4][4];
	int TempMatrix[4][4];
	int vec[4];
	int TransVec[4];
	int num = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i == 0 && j == 0 || num == 5)
			{
				IDMatrix[i][j] = 1;
				num = 0;
			}
			else
			{
				IDMatrix[i][j] = 0;
			}
			num++;
		}
	}

	num = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			TempMatrix[i][j] = IDMatrix[i][j] * vec[i];
		}
		
	}

	return 0;
}