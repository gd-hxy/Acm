/*Description
��֪ĳ���У�a[i]=|a[i-1]-a[i-2]|��i>2��������ָ����a1��a2����an��

Input
��������Ϊ�������ݣ�Ϊһ����������a1��a2��n��a1,a2<=1000,n<=1000��.

Output
����ÿ�����ݣ����һ��1������Ϊan.

Sample Input
2 3 5
1 1 6
Sample Output
1
0
*/
#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int a1,a2,an,sum;
	while(cin >> a1 >> a2 >> an)
	{
		if(an == 1)
		{
			cout << a1 << endl;
			continue;
		}
		if(an == 2)
		{
			cout << a2 << endl;
			continue;
		}
		for(int i = 2; i < an; i++)
		{
			sum = abs(a2 - a1);
			a1 = a2;
			a2 = sum;
		}
		cout << sum << endl;
	}
}