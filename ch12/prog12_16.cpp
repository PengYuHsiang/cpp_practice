// prog12_16, 友誼函數的使用
# include <iostream>
# include <cstdlib>

using namespace std;

class CWin
{
	private:
		char id;
		int width;
		int height;
		int area()
		{
			return width * height;
		}
	
	public:
		void show_area()
		{
			cout << "Window " << id << ", area = " << area() << endl;
		}
		
		void set_data(char i, int w, int h)
		{
			id = i;
			if (w > 0 && h > 0)
			{
				width = w;
				height = h;
			}
		}
		
	friend void show_member(CWin);
};

void show_member(CWin win)
{
	cout << "Window " << win.id << ": ";
	cout << "width = " << win.width << ", ";
	cout << "height = " << win.height << endl;
}

int main(void)
{
	CWin win1, win2;
	win1.set_data('A', 50, 40);
	win2.set_data('B', 80, 60);
	
	show_member(win1);
	win1.show_area();
	show_member(win2);
	win2.show_area();
	
 	system("pause");
 	return 0;
}
