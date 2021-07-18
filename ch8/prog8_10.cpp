// prog8_10, 印出陣列的位址
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

void func(int []);

int main(void)
{
	int i,a[4] = {20,8,13,6};
	cout << "In main()," << endl;
	for(i=0;i<4;i++)
	{
		printf("a[%d] = %2d, address = %x \n", i, a[i], &a[i]);
		// cout << "a[" << i << "] = " << setw(2) << a[i];
		// cout << ", address = " << &a[i] << endl;
	}
	func(a);
	return 0;
}

void func(int b[])
{
	cout << "In func()," << endl;
	int i;
	for(i=0;i<4;i++)
	{
		cout << "b[" << i << "] = " << setw(2) << b[i];
		cout << ", address = " << &b[i] << endl;
	}
	return;
}