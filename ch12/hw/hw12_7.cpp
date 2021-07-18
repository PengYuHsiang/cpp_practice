// hw12_7
# include <iostream>
# include <cstdlib>

using namespace std;

class CBox
{
	public:
		int length;
		int width;
		int height;
		
		int volume()
		{
			return length * width * height;
		}
		
		int surfaceArea()
		{
			int surface;
			surface = 2 * (length * width) + 2 * (length * height) + 2 * (width * height);
			return surface;
		}
};

int main(void)
{
	CBox box1;
	box1.length = 50;
	box1.width = 40;
	box1.height = 30;
	cout << "box1, volume = " << box1.volume() << ", ";
	cout << " surface = " << box1.surfaceArea() << endl;
	 
 	system("pause");
 	return 0;
}
