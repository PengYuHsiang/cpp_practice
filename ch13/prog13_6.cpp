// prog13_6, 使用初始化串列來設定初值
# include <iostream>
# include <cstdlib>

using namespace std;

class CWin
{
	private:
		char id;
		int width, height;
		
	public:
		CWin(char i='D', int w=100, int h=100): id(i), width(w), height(h)
		{
			cout << "Data member has been initiated ..." << endl;
		}
		
		void show_member(void)
		{
			cout << "Window " << id << ": ";
			cout << "width = " << width << ", ";
			cout << "height = " << height << endl;
		}
};

int main(void)
{
	CWin win1('A',80);
	CWin win2;
	win1.show_member();
	win2.show_member();
	
 	system("pause");
 	return 0;
}
