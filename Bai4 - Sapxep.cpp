#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n,a[100],tmp;
	cin >> n;
	for(int i = 0;i < n;i++)
	{
		cin >> a[i];
	}
	for(int i = 0;i < n;i++)
	{
		for(int j = i + 1;j < n;j++)
		{
			if(a[i] > a[j])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	for(int i = 0;i < n;i++)
	{
		cout << a[i] << " ";
	}
}
