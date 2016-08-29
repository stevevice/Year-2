#include <iostream>

using namespace std;

int main()
{
	int matrix[4][4];
	int bruh = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i == 0 && j == 0 || bruh == 5)
			{
				matrix[i][j] = 1;
				bruh = 0;
			}
			else
			{
				matrix[i][j] = 0;
			}
			bruh++;
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (j < 3)
			{
				cout << matrix[i][j] << "	";
			}
			else
			{
				cout << matrix[i][j] << endl;
			}
		}
	}

	system("Pause");
	return 0;
}