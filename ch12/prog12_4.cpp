// prog12_4, 物件與類別所佔的位元組
# include <iostream>
# include <cstdlib>

using namespace std;

class CWin
{
	public:
		char id;
		int width;
		int height;
};

int main(void)
{
	CWin win1;
	
	cout << "sizeof(win1) = " << sizeof(win1) << endl;
	cout << "sizeof(CWin) = " << sizeof(CWin) << endl;
		
 	system("pause");
 	return 0;
}
