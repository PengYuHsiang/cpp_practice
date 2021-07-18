// prog8_16, C++型態字串與數值混和輸入
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(void)
{
	int num;
	string proverb;
	cout << "How many times: ";
	(cin >> num).get();
	cout << "What's the proverb: ";
	getline(cin,proverb);

	for (int i=0;i<num;i++)
		cout << proverb << endl;

	return 0;
}