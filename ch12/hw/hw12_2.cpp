// hw12_2
# include <iostream>
# include <cstdlib>

using namespace std;

class Crectangle
{
	public:
		int width;
		int height;
};

int main(void)
{
	Crectangle rect1;
	rect1.width = 15;
	rect1.height = 10;
	cout << "area = " << rect1.width * rect1.height << endl;
	
 	system("pause");
 	return 0;
}
