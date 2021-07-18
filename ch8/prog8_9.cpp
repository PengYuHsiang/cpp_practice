// prog8_9, 印出變數的位址
#include <iostream>
#include <cstdlib>

using namespace std;

void func(int);

int main(void)
{
	int a = 13;
	cout << "In main(), a = " << a << ", address = " << &a << endl;
	func(a);
	return 0;
}

void func(int a)
{
	cout << "In func(), a = " << a << ", address = " << &a << endl;
	return;
}