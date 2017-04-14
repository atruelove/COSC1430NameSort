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

	for (int i = 0; i < 6; i++)
	{
		cout << test[i].getName() << endl;
	}

//delete test;
//test = nullptr;
char a;
cin >> a;
return 0;
}