// prog8_13, 修正 prog8_12可能出現的錯誤
#include <iostream>
#include <cstdlib>

using namespace std;

int main(void)
{
	char name[15];
	int i;
	for (i=0;i<2;i++)
	{
		cout << "What's your name? ";
		cin.getline(name,15);
		cout << "Hi, " << name << ", how are you?" << endl << endl;
	}
	return 0;
}