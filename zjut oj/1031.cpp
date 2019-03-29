#include<iostream>
#include<string>
#include<set>
#include<algorithm>
using namespace std;

struct comp
{
	bool operator()(const string& s1, const string&s2)
	{
		return s1.length()!=s2.length()?s1.length() < s2.length():s1<s2;
	}
};

int main()
{
	multiset<string,comp>ms;
	string s,t;
	while(cin >> s)
	{
		t = s;
		reverse(s.begin(), s.end());
		if(t == s)
		{
			ms.insert(t);
		}
	}
	multiset<string,comp>::iterator it;
	for(it = ms.begin(); it != ms.end(); it++)
	{
		cout << *it << endl;
	}
	return 0;
}
