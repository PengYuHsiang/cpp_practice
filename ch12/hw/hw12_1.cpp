// hw12_1
# include <iostream>
# include <cstdlib>

using namespace std;

class Caaa
{
	public:
		int a;
		int b;
		int c;
};

int main(void)
{
	// 建立 Caaa 類別的物件 obj
	Caaa obj;
	// 對 obj 物件的資料成員進行設值
	obj.a = 1;
	obj.b = 3;
	obj.c = obj.a + obj.b;
	// 輸出 obj 物件的資料成員
	cout << "obj.a = " << obj.a << endl;
	cout << "obj.b = " << obj.b << endl;
	cout << "obj.c = " << obj.c << endl;
	
 	system("pause");
 	return 0;
}
