// prog8_17, 字串的運算
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(void)
{
	string first = "Arbor";
	string last = "Peng";
	cout << "full name = " << first + " " + last << endl;
	first += " ";
	first += last;
	cout << "full name = " << first << endl;
	return 0;
}