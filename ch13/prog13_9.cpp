// prog13_9, 建立物件陣列
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
			cout << "Constructor has been called ..." << endl;
		}
		
		void show_member()
		{
			cout << "Window " << id << ": ";
			cout << "width = " << width << ", ";
			cout << "height = " << height << endl;
		}
			
};

int main(void)
{
	CWin win1('A', 50, 40);
	CWin my_win[3];
	win1.show_member();
	my_win[2].show_member();
		
 	system("pause");
 	return 0;
}
