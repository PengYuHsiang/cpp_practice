// prog12_1, 利用結構來表示視窗

# include <iostream>
# include <cstdlib>

using namespace std;

struct Win
{
	char id;
	int width;
	int height;
};

int area(struct Win w)
{
	return w.height * w.width;
 } 

int main(void)
{
	struct Win win1;
	win1.id = 'A';
	win1.width = 50;
	win1.height = 40;
	
	cout << "Window " << win1.id << ", area = " << area(win1) << endl;
 	system("pause");
 	return 0;
}
