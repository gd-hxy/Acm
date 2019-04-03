/*Description:
有一些整数组，每三个整数为一组，分别表示等差数列的起始位置、终止位置和公差，求每组数列的和。如果三个整数都为0，表示输入结束。
Sample Input:
5 100 5
1 5 1
1 10 1
0 0 0
Sample Output:
1050
15
55
*/

#include<iostream>
using namespace std;

int l(int a, int b, int c)
{
	int n = 1;
	if(a == b)
		return n;
	else{
		for(;;)
		{
			a += c;
			n++;
			if(a == b)
				break;
		}
	}
	return n;
}

int main()
{
	int a1, an, d;
	while(cin >> a1 >> an >> d)
	{
		if(a1 == 0 && an == 0 && d == 0)
			break;
		int n;
		n = l(a1, an, d);
		cout << a1*n + n*(n-1)*d/2 << endl;
	}
	return 0;
}
