// prog13_2, 將建構元的定義移到類別外面
# include <iostream>
# include <cstdlib>

using namespace std;

class CWin
{
	private:
		char id;
		int width, height;
		
	public:
		CWin(char, int, int);
		
		void show_member()
		{
			cout << "Window " << id <<": ";
			cout << "width = " << width << ", ";
			cout << "height = " << height << endl;
		}
};

CWin::CWin(char i, int w, int h)
{
	id = i;
	width = w;
	height = h;
	cout << "Constructor has been called ..." << endl;
} 

int main(void)
{
	CWin win1('A', 50, 40);
	CWin win2('B', 60, 70);
	win1.show_member();
	win2.show_member();
	
 	system("pause");
 	return 0;
}
