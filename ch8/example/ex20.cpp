#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

void repeat(int,string);

int main(void)
{
	int num;
	string words;
	cout << "How many times? ";
	(cin >> num).get();
	cout << "What's the word do you want to print? ";
	getline(cin,words);
	repeat(num,words);
	return 0;
}

void repeat(int num,string words)
{
	for (int i=0;i<num;i++)
		cout << words << endl;
}