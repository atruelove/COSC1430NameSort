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
