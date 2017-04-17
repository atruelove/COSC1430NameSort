#include <iostream>
#include "nameScore.h"
#include <string>
using namespace std;

int main()
{
	nameScore *test;
	test= new nameScore[6];
	test[0].setName("Ross");
	test[1].setName("Chandler");
	test[2].setName("Monica");
	test[3].setName("Rachel");
	test[4].setName("Joey");
	test[5].setName("Phoebe");

	//cout << test[0].getSum() << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << test[i].getName() << endl;
		cout << test[i].getSum() << endl;
	}

	//cout << int('E'-'@') << endl;

//delete test;
//test = nullptr;
	system("pause");
	return 0;
}