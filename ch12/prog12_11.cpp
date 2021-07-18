// prog12_11, 函數的多載
# include <iostream>
# include <cstdlib>

using namespace std;

class CWin
{
	public:
		char id;
		int width;
		int height;
		
	int area()
	{
		return width * height;
	}
	
	void show_area()
	{
		cout << "Window " << id << ", area = " << area() << endl;
	}
	
	void set_data(char i, int w, int h)
	{
		id = i;
		width = w;
		height = h;
	}
	
	void set_data(char i)
	{
		id = i;
	}
	
	void set_data(int w, int h)
	{
		width = w;
		height = h;
	}
};

int main(void)
{
	CWin win1, win2;
	
	win1.set_data('A', 50, 40);
	win2.set_data('B');
	win2.set_data(80, 120);
	
	win1.show_area();
	win2.show_area();
	
 	system("pause");
 	return 0;
}
