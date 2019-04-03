/*Description:
输入一些字串对，从第一个字串中找第二个字串。找到就说“Yes”，否则就说“No”。
Sample Input:
abcde a3
defsgbdffgfgbn dff
Sample Output:
No
Yes
*/
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	string a, b;
	while(cin >> a >> b)
	{
		const char* res;
		res = strstr(a.c_str(),b.c_str());
		if(res != NULL)
			cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}
