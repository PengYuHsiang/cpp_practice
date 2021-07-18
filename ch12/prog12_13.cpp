// prog12_13, 私有成員的使用範例
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
};

int main(void)
{
	CWin win1;
	//錯誤, 在 CWin 類別外部無法存取私有成員
	win1.id = 'A';
	win1.width = -50;
	win1.height = 40;
	win1.show_area();
	 	
	system("pause");
 	return 0;
}
