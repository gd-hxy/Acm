/*Description:
�����к������������ݣ�ÿ����������һ���ַ�c��һ��������n��n��50������ʾ�߳�Ϊnͼ��Ϊc��ɽ���ַ�ͼ��һ������һ���ش�ӡ������Щɽ���ַ�ͼ��
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