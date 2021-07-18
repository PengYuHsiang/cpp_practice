// prog12_9, 傳遞引述道涵數裡
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
};

int main(void)
{
	CWin win1;
	win1.set_data('B', 50 ,40);
	win1.show_area();
	
 	system("pause");
 	return 0;
}
