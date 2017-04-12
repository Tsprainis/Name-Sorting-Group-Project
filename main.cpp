/*************************************************************************************
Filename: Name Sorting
Author: Tristen Sprainis, Curtis Sternitzky, Anthony Ventura
Description: A program that sorts names and other fun stuff
Date Modified: 4/05/2017
- File Created
4/10/2017
-Added sorting, switch statement, and changed string pointers to string vectors
4/12/2017
-added functions getPxNScore and getTotalSum
*************************************************************************************/
#include "Name.h"
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
	vector <string> nameList;
	ifstream dataIn;
	ofstream dataOut;
	string fileName;
	string namesInFile;
	string name;


	do
	{
		dataIn.clear();
		cout << "Enter file name:";
		cin >> fileName;
		dataIn.open(fileName);

		if (!dataIn)
		{
			cerr << "Error: File Not Open.";
		}
		cout << endl;

	} while (!dataIn);

	while (dataIn >> name)
	{
		nameList.push_back(name);
	}

	sort(nameList.begin(), nameList.end());

	dataIn.close();
	dataOut.open("sortedNames.txt");
	int curSum = 0;
	for (int i = 0; i < nameList.size(); i++)
	{
		curSum += getTotalSum(nameList, i);
		dataOut << setw(15) << left << "Position: " << i+1 << setw(8) << left << "\t Name:" << setw(15) << left << nameList[i] << setw(16) << left << "\tScore:" << getNameScore(nameList, i) << setw(15) << left <<
			"\tN*P: " << getPxNScore(nameList, i) << setw(19) << left << "\tCurrent total Sum: " << setw(15) << left << curSum << endl;
	}
	dataOut.close();
	return 0;
}