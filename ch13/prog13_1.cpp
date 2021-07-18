// prog13_1, 建構元的使用
# include <iostream>
# include <cstdlib>

using namespace std;

class CWin
{
	private:
		char id;
		int width, height;
	
	public:
		CWin(char i, int w, int h)
		{
			id = i;
			width = w;
			height = h;
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
	CWin win2('B', 60, 70);
	win1.show_member();
	win2.show_member();
	
 	system("pause");
 	return 0;
}
