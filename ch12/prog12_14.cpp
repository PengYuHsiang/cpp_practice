// prog12_14, 利用公有函數存取私有成員
# include <iostream>
# include <cstdlib>

using namespace std;

class CWin
{
	private:
		char id;
		int width;
		int height;
	
	public:
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
			if (w > 0 && h > 0)
			{
				width = w;
				height = h;
			}
			else
			{
				cout << "Input error" << endl;
			}
		}
};

int main(void)
{
	CWin win1;
	win1.set_data('A', 50, 40);
	win1.show_area();
	
 	system("pause");
 	return 0;
}
