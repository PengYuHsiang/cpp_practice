// prog8_11, 印出字元及字串長度
#include <iostream>
#include <cstdlib>

using namespace std;

int main(void)
{
	char a[] = "My friend";
	char b = 'c', str[] = "c";
	cout << "sizeof(a) = " << sizeof(a) << endl;
	cout << "sizeof(b) = " << sizeof(b) << endl;
	cout << "sizeof(str) = " << sizeof(str) <<endl;
	return 0;
}