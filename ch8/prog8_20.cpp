//prog8_20, 字串陣列
#include <iostream>
#include <cstdlib>

using namespace std;

int main(void)
{
	int i;
	char students[3][15];
	for(i=0;i<3;i++)
	{
		cout << "Input student" << i << "'s name: " << endl;
		cin.getline(students[i],15);
	}

	cout << "*** OUTPUT ***" << endl;
	for (i=0;i<3;i++)
		cout << "students[" << i <<"] = " << students[i] << endl;
	return 0;
}