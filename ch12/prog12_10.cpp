// prog12_10, 傳遞物件到函數裡
# include <iostream>
# include <cstdlib>

using namespace std;

class CWin
{
	public:
		char id;
		int width;
		int height;
	
	void set_data(char i, int w, int h)
	{
		id = i;
		width = w;
		height = h;
	}	
	
	int area()
	{
		return width * height;
	}	
};

void show_area(CWin win)
{
	cout << "Window " << win.id << ", area = " << win.area() << endl; 
};

int main(void)
{
	CWin win1;
	win1.set_data('B', 50, 40);
	show_area(win1);
	
 	system("pause");
 	return 0;
}
