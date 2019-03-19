#include<iostream>
using namespace std;

int main()
{
	int n,m;
	while(cin >> n >> m)
	{
		int flag = 0;
		for(int i = 0; i < n; i++)
			cout << "*";
		cout << endl;
		flag++;
		for(;flag <= m; flag++)
		{
			cout << "*";
			for(int j = 0; j < n-2; j++)
				cout << " ";
			cout << "*" << endl;
		}
		for(int i = 0; i < n; i++)
			cout << "*";
		cout << endl;	
	}
	return 0;
}
