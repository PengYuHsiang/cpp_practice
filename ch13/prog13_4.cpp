// prog13_4, 預設的建構元
# include <iostream>
# include <cstdlib>

using namespace std;

class CWin
{
	private:
		char id;
		int width, height;
		
	public:
		// 1st Constructor
		CWin(char i, int w, int h)
		{
			id = i;
			width = w;
			height = h;
			cout << "Constructor1 has been called ..." << endl;
		}
		
		// 2nd Constructor
		CWin(int w, int h)
		{
			id = 'Z';
			width = w;
			height = h;
			cout << "Constructor2 has been called ..." << endl;
		}
		
		// Default Constructor
		CWin()
		{
			id = 'D';
			width = 100;
			height = 100;
			cout << "Default Constructor has been called ..." << endl;
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
	CWin win2(80, 120);
	CWin win3;
	
	win1.show_member();
	win2.show_member();
	win3.show_member();
	
 	system("pause");
 	return 0;
}
