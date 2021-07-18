// prog13_3, 建構元的多載
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
			cout << "Constructor1 has been called ..." << endl;
		}
		
		CWin(int w, int h)
		{
			id = 'Z';
			width = w;
			height = h;
			cout << "Constructor2 has been called ..." << endl;
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
	win1.show_member();
	win2.show_member();
	
 	system("pause");
 	return 0;
}
