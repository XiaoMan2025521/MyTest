#include<iostream>

int main2(void)
{

	using std::cout;
	using std::cin;
	using std::endl;

	cout << "Enter an integer: ";
	int by;
	cin >> by;
	cout << "Counting by " << by << "s:\n";
	for(int i = 0;i < 100;i = i + by)
		cout << i << endl;


	system("pause");
	return 0;
}