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

	return 0;
}

int  getPxNScore(vector <string> list, int pos)
{
	return getNameScore(list, pos) * (pos + 1);

}
int getTotalSum(vector <string> list, int pos)
{
	return getPxNScore(list, pos);

}