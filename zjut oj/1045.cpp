/*Description:
有一些日期，日期格式为“MM/DD/YYYY”。编程将其按日期大小排列。
Sample Input:
12/31/2005
10/21/2003
02/12/2004
12/12/1999
10/22/2003
11/30/2005
Sample Output:
12/12/1999
10/21/2003
10/22/2003
02/12/2004
11/30/2005
12/31/2005
*/
#include<stdio.h>
#include<algorithm>
using namespace std;

struct date{
	int year;
	int month;
	int day;
}r[100];

int compare(date a, date b)
{
	if(a.year == b.year)
	{
		if(a.month == b.month)
			return a.day < b.day;
		
		else
			return a.month < b.month;
	}
	else
		return a.year < b.year;
}
int main()
{
	int i = 0, j;
	while(scanf("%d/%d/%d", &r[i].month, &r[i].day, &r[i].year) != EOF)
	{
		i++;
	}
	sort(r,r+i,compare);
	for(j = 0; j < i; j++)
	{
		printf("%02d/%02d/%d\n", r[j].month, r[j].day, r[j].year);
	}
}
