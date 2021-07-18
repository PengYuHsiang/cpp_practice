// hw12_4
# include <iostream>
# include <cstdlib>

using namespace std;

class CWin
{
	public:
		char id;
		int width;
		int height;
		char *title;

		int area(void)
		{
			return width * height;
		}
		
		void set_title(char *text)
		{
			title = new char[strlen(text)+1];
			strcpy(title, text);
		}
		
		void  display()
		{
			cout << "The title of window " << id << "is " << *title << endl;
		}

};

int main(void)
{
	CWin win1;
	win1.id = 'A';
	win1.width = 50;
	win1.height = 40;
	
	win1.set_title("Main Window");
	win1.display();
	
	cout << "Window " << win1.id << ":" << endl;
	cout << "Area = " << win1.area() << endl;
	cout << "sizeof(win1) = " << sizeof(win1) << " bytes"<< endl;
	
 	system("pause");
 	return 0;
}
