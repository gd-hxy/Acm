/*Description
小明是一个很懒的人，比如说，计算1234+69，他只会计算4+9，对于答案也只记录3，简单的说，就是只对个位数进行计算。那么对于一下数据，请输出小明式答案。

Input
有多组数据，每组数据包括a，b（a,b<=10000）；

Output
对每组数据输出小明式答案。

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
