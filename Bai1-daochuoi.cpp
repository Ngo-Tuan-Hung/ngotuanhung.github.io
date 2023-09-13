#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	getline(cin, s);
	int len = s.length();
	for(int i = len - 1;i >= 0;i--)
	{
		cout << s[i];
	}
}
