#include <vector>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;
int getNameScore(vector <string > list, int pos);
int  getPxNScore(vector <string> list, int pos);
int getTotalSum(vector <string> list, int pos);



int getNameScore(vector <string> list, int pos)
{
	int val = 0;

	for (int i = 0; i < list[pos].size(); i++)
	{
		if (list[pos][i] == 'A')
		{
			val += 1;
		}else if (list[pos][i] == 'B')
		{
			val += 2;
		}
		else if (list[pos][i] == 'C')
		{
			val += 3;
		}
		else if (list[pos][i] == 'D')
		{
			val += 4;
		}
		else if (list[pos][i] == 'E')
		{
			val += 5;
		}
		else if (list[pos][i] == 'F')
		{
			val += 6;
		}
		else if (list[pos][i] == 'G')
		{
			val += 7;
		}
		else if (list[pos][i] == 'H')
		{
			val += 8;
		}
		else if (list[pos][i] == 'I')
		{
			val += 9;
		}
		else if (list[pos][i] == 'J')
		{
			val += 10;
		}
		else if (list[pos][i] == 'K')
		{
			val += 11;
		}
		else if (list[pos][i] == 'L')
		{
			val += 12;
		}
		else if (list[pos][i] == 'M')
		{
			val += 13;
		}
		else if (list[pos][i] == 'N')
		{
			val += 14;
		}
		else if (list[pos][i] == 'O')
		{
			val += 15;
		}
		else if (list[pos][i] == 'P')
		{
			val += 16;
		}
		else if (list[pos][i] == 'Q')
		{
			val += 17;
		}
		else if (list[pos][i] == 'R')
		{
			val += 18;
		}
		else if (list[pos][i] == 'S')
		{
			val += 19;
		}
		else if (list[pos][i] == 'T')
		{
			val += 20;
		}
		else if (list[pos][i] == 'U')
		{
			val += 21;
		}
		else if (list[pos][i] == 'V')
		{
			val += 22;
		}
		else if (list[pos][i] == 'W')
		{
			val += 23;
		}
		else if (list[pos][i] == 'X')
		{
			val += 24;
		}
		else if (list[pos][i] == 'Y')
		{
			val += 25;
		}
		else if (list[pos][i] == 'Z')
		{
			val += 26;
		}
	}

	return val;
}

int  getPxNScore(vector <string> list, int pos)
{
	return getNameScore(list, pos) * (pos + 1);

}
int getTotalSum(vector <string> list, int pos)
{
	return getPxNScore(list, pos);

}