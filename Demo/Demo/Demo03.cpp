#include<iostream>
#include<string>


int main3(void)
{
	using namespace std;

	string word;
	cin >> word;
	char temp;
	for(int j = 0,i = word.size() - 1;j<i;j++,i--)
	{
		temp = word[i];
		word[i] = word[j];
		word[j] = temp;
	}
	cout << word << "\nDone\n";
	system("pause");
	return 0;
}