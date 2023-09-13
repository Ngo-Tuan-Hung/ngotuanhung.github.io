#include<iostream>
using namespace std;
int main()
{
	int a[5];
	for(int i = 0;i < 5;i++)
	{
		cin >> a[i];
	}
	int max = a[0], min = a[0];
	for(int i = 0;i < 5;i++)
	{
		if(max > a[i]) max = a[i];
	}
	for(int i = 0;i < 5;i++)
	{
		if(min < a[i]) min = a[i];
	}
	int tong = max + min;
	cout << tong;
}
