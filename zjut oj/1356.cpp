/*Description
С����һ���������ˣ�����˵������1234+69����ֻ�����4+9�����ڴ�Ҳֻ��¼3���򵥵�˵������ֻ�Ը�λ�����м��㡣��ô����һ�����ݣ������С��ʽ�𰸡�

Input
�ж������ݣ�ÿ�����ݰ���a��b��a,b<=10000����

Output
��ÿ���������С��ʽ�𰸡�

Sample Input
29 3690
1972 5892
8814 352
Sample Output
9
4
6*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string a,b;
	string::iterator it1, it2;
	while(cin >> a >> b)
	{
		it1 = a.end();
		it2 = b.end();
		it1--;
		it2--;
		int a1,b1,sum;
		a1 = *it1 - 48;
		b1 = *it2 - 48;
		sum = a1 + b1;
		if(sum >= 10)
			sum -= 10;
		cout << sum << endl;
	}
}