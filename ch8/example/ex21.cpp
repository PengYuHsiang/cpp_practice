#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(void)
{
	string str1("Time files");
	string str2(str1);
	string str3(10,'x');

	cout << "str1 = " << str1 << endl;
	cout << "str2 = " << str2 << endl;
	cout << "str3 = " << str3 << endl;
	return 0;
}