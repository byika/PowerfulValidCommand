#include <iostream>
#include <windows.h>
using namespace std;



int main()
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);



	int height = 26;
	int width = 29 * 3;



	for (int y = 0; y < height; y++)
	{
		for (int x = 0; x < width; x++)
		{
			if (x < 33 && y < 14)
			{
				if (y % 2 == 1 && x % 2 == 1 && y < 13)
					SetConsoleTextAttribute(h, 15);
				else
					SetConsoleTextAttribute(h, 9);
			}
			else
			{
				if (y % 4 == 0 || y % 4 == 1)
					SetConsoleTextAttribute(h, 12);
				else
					SetConsoleTextAttribute(h, 15);
			}

			cout << (char)178;
		}
		cout << "\n";
	}
}