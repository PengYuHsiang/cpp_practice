#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(void)
{
	int loc;
	string sentence;
	cout << "Input a sentence: ";
	getline(cin,sentence);
	
	loc = sentence.find("the");
	if (loc == -1)
		cout << "There is no \'the\' in this sentence";
	else
		cout << "The index of \'the\': " << loc << endl;
	return 0;
}