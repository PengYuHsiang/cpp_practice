// prog12_7, 將函數定義於類別之外
# include <iostream>
# include <cstdlib>

using namespace std;

class CWin 
{
	public:
		char id;
		int width;
		int height;
		int area(void);		// 成員函數 area() 的原型
};

int CWin::area(void)
{
	return width * height;
}

int main(void)
{
	CWin win1;
	
	win1.id = 'A';
	win1.width = 50;
	win1.height = 40;
	
	cout << "Window " << win1.id << ":" << endl;
	cout << "Area = " << win1.area() << endl;
	
 	system("pause");
 	return 0;
}
