// prog8_12, 輸入及輸出字串
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
		cin >> name;
		cout << "Hi, " << name <<", how are you?" << endl << endl;
	}
}