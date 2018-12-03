// Niloufar Shamloo
// Lab 09
// 12/03/2018

#include <iostream>
#include <string>
#include <fstream>
#include <ostream>
#include <map>
using namespace::std;

int main()
{
	string string1("");
	ifstream infile;
	map <string, int> mymap;
	map <string, int>::iterator it;
	infile.open("example.txt");
	if (infile.is_open())
	{
		while (!infile.eof())
		{
			infile >> string1;
			++mymap[string1];
		}
	}
	infile.close();
	ofstream output;
	output.open("output.txt.");
	for (it = mymap.begin(); it != mymap.end(); ++it)
	{
		for (int i = 0; i < it->second; i++)
		{
			output << it->first;
		}
	}
	output.close();
	system("pause");
	return 0;
}