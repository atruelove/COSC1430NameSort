#include <iostream>
#include "nameScore.h"
#include <string>
using namespace std;

nameScore::nameScore()
{
	_nameText = "blah";
	_finalScore = 0;
	_sum = 0;
	_pos = 0;
}

nameScore::nameScore(string nameText)
{
	_nameText = nameText;
	_finalScore = 0;
	_sum = 0;
	_pos = 0;
}

void nameScore::setName(string nameText)
{
	_nameText = nameText;
}

string nameScore::getName()
{
	return _nameText;
}

int nameScore::getFinalScore()
{
	return _finalScore;
}

int nameScore::getSum()
{
	string name = this->getName();
	int sum = 0;
	char base = ' ';
	char lowBase = '`';
	char upperBase = '@';
	for (int i = 0; i < name.length(); i++)
	{
		if (name[i] >= 'A' && name[i] <= 'Z')
		{
			base = upperBase;
		}
		else if (name[i] >= 'z' && name[i] <= 'z')
		{
			base = lowBase;
		}
		int value = name[i] - base;
		//cout << value << endl;
		sum += value;
		//cout << sum << endl;
	}
	return sum;
}
