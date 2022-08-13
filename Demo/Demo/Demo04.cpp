#include<iostream>
#include<cstring>
#include<string>

int main4(void)
{
	using namespace std;
	//char word[5] = "?ate";
	string word = "?ate";
	for(char ch = 'a';word != "mate";ch++)
	{
		cout << word << endl;
		word[0] = ch;
	
	}

	cout << "After loop ends,word is " << word << endl;

	system("pause");
	return 0;
}