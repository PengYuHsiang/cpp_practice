// hw12_3
# include <iostream>
# include <cstdlib>

using namespace std;

class my_data
{
	public:
		int age;
		int weight;
};

int main(void)
{
	// 建立 my_data類別物件 a
	my_data a;
	// 對物件 a 的資料成員進行設值
	a.age = 18;
	a.weight = 57;
	// 輸出物件 a 的資料成員
	cout << "age = " << a.age << endl;
	cout << "weight = " << a.weight << endl;
 	system("pause");
 	return 0;
}
