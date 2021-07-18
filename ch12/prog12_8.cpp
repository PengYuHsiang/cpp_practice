// prog12_8, 在類別定義的內部呼叫函數
# include <iostream>
# include <cstdlib>

using namespace std;

class CWin
{
	public:
		char id;
		int width;
		int height;
		
		int area(void)
		{
			return width * height;
		}
		
		void show_area(void)
		{
			cout << "Window " << id << ", area = " << area() << endl;
		}
};

int main(void)
{
	CWin win1;
	
	win1.id = 'A';
	win1.width = 50;
	win1.height = 40;
	win1.show_area();
	system("pause");
 	return 0;
}
