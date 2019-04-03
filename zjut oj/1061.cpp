/*Description:
输入中含有若干组数据，每组数都包含一个字符c和一个正整数n（n≤50），表示边长为n图案为c的山形字符图。一个紧挨一个地打印所有这些山形字符图。
Sample Input:
A 3
M 9
Sample Output:
  A
 AAA
AAAAA

        M
       MMM
      MMMMM
     MMMMMMM
    MMMMMMMMM
   MMMMMMMMMMM
  MMMMMMMMMMMMM
 MMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMM*/
#include<iostream>
using namespace std;

int main()
{
	char a;
	int num;
	while(cin >> a >> num)
	{
		for(int i = 1;i <= num; i++)
		{
			for(int j = num - i; j != 0; j--)
			{
				cout << " ";
			}
			for(int k = 1; k <= 2*i-1;k++)
			{
				cout << a;
			}
			cout << endl;
		}
	}
}
