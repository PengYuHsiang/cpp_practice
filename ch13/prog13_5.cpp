// prog13_5, 建構元引數的預設值
# include <iostream>
# include <cstdlib>

using namespace std;

class CWin
{
	private:
		char id;
		int width, height;
		
	public:
		CWin(char i='D', int w=100, int h=100)
		{
			id = i;
			width = w;
			height = h;
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
	CWin win2('B', 80);
	CWin win3;
	win1.show_member();
	win2.show_member();
	win3.show_member();
	
 	system("pause");
 	return 0;
}
