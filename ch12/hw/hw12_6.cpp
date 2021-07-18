// hw12_6
# include <iostream>
# include <cstdlib>

using namespace std;

class CTemp
{
	public:
		double CtoF(double c)
		{
			return c / 0.37;
		}
};

int main(void)
{
	CTemp temp;
	double c = 37.2;
	cout << c << "C = " << temp.CtoF(c) << "F" << endl; 
	
 	system("pause");
 	return 0;
}
