#include <iostream>
#include <cstdlib>
#include <string>
#define WORD_NUM 5

using namespace std;

int main(void)
{
	int i,char_num = 0;
	string words[WORD_NUM];
	for(i=0;i<WORD_NUM;i++)
	{
		cout << "Input a word:";
		getline(cin,words[i]);
		char_num += words[i].length();
	}

	for(i=0;i<WORD_NUM;i++)
		cout << "word" << i+1 << ": " << words[i] << endl;
	cout << endl;
	cout << "Total character of words:" << char_num << endl;

	return 0;
	
}