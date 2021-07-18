// prog8_13, 修正 prog8_12可能出現的錯誤
#include <iostream>
#include <cstdlib>

using namespace std;

int main(void)
{
	int age;
	char name[20];

	cout << "How old are you? ";
	cin >> age;
	cin.get();
	cout << "What's your name?";
	cin.getline(name,20);

	cout << name << " is " << age << "-year-old!" << endl;
	return 0;
}