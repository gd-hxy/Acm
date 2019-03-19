#include<iostream>
using namespace std;

int main()
{
	int a[4];
	while(cin >> a[1] >> a[2] >> a[3])
	{
		int n;
		cin >> n;
		for(int i = 0; i < n; i++)
		{
			int cup1,cup2;
			cin >> cup1 >>cup2;
			
			if(a[cup1] == 0 && a[cup2] == 20)
				continue;
			while(a[cup1] != 0 && a[cup2] != 20)
			{
				a[cup1]--;
				a[cup2]++;
			}
		}
		cout << a[1] << " " << a[2] << " " << a[3] << endl;
	}
	return 0;
}
