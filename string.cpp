#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1;
	string s2("ABC");
	string s3("ABCDERTY", 4);
	string s4(s2);
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;
	s1 = "GFFF";
	s1 = 'x';
	s2 = "asdfg";
	s4 = s3;
	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;
	cout << "Input some text: ";
	cin >> s1;
	cout << s1 << endl;
	cout << "Input some text: ";
	getline(cin, s2);
	cin.get();
	cout << "Input some text: ";
	getline(cin, s2);
	cout << s1 << endl;
	system("pause");
	return(0);
}
