#include<iostream>
using namespace std;

int func(int a, int b)
{
	int max = a >= b?a:b;
	int min = a < b?a:b;
	int res = max / min;
	int mod = max % min;
	if(mod == 1)
		return 1;
	else if(mod == 0)
		return min;
	else
		func(mod, min);
}
int main()
{
	int a,b;
	while(true)
	{
		cin >> a >> b;
		if(a == 0 && b == 0)
			break;
		cout << a * b / func(a,b) + func(a,b) << endl;
	}
	return 0;
}
