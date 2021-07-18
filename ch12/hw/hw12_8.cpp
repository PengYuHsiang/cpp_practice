// hw12_8
# include <iostream>
# include <cstdlib>

using namespace std;

class Calculator
{
	public:
		int add(int a, int b)
		{
			return a + b;
		}
		
		int sub(int a, int b)
		{
			return a - b;
		}
		
		int mul(int a, int b)
		{
			return a * b;
		}
		
		double div(int a, int b)
		{
			return (float) a / b;
		}
};

int main(void)
{
	Calculator cal;
	int a = 2, b = 8;
	
	cout << "add(" << a << ", " << b << ") = " << cal.add(a,b) << endl;
	cout << "sub(" << a << ", " << b << ") = " << cal.sub(a,b) << endl;
	cout << "mul(" << a << ", " << b << ") = " << cal.mul(a,b) << endl;
	cout << "div(" << a << ", " << b << ") = " << cal.div(a,b) << endl;
	
 	system("pause");
 	return 0;
}
