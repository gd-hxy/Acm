/*Description:
如果一个字串，通过颠来倒去的位置重组能够转变成另一个字串，那么就称为“可排列相等”。给出一些文字行，它们两两成对，中间空一行。请你逐一判断它们每一对是否“可排列相等”。
Sample Input:
Oh, my goodnessmultiple lines!
yg doo, shOmens emlusleip!tlin

perplexed
exdrelper
Sample Output:
yes
no*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	string a,b,str,res;
	while(getline(cin,a))
	{
		getline(cin, b);
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		a.erase(0,a.find_first_not_of(" "));
		b.erase(0,b.find_first_not_of(" "));
		if(a == b)
			res = "yes";
		else res = "no";
		getline(cin, str);
		if(str.size() == 0)
			cout << res << endl;
	}
}
