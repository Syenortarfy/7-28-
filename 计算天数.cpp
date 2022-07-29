#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

#define in inline
#define rint register int
typedef long long LL;
typedef pair<int,int> PII;

in int read()
{
    rint x=0,f=0; register char ch=getchar();
    while(ch<'0'||ch>'9')f|=ch=='-',ch=getchar();
    while(ch>='0'&&ch<='9')x=(x<<3)+(x<<1)+(ch^48),ch=getchar();
    return f?-x:x;
}
in void write(int x)
{
    if(x<0) putchar('-'),x=-x;
    if(x>9) write(x/10);
    putchar(x%10+'0');
}
in void print(string s)
{
	for(int i=0;s[i]!='\0';i++) putchar(s[i]);
}
in int max(int a,int b) {return a>b?a:b;}
in int min(int a,int b) {return a<b?a:b;}

/*----------code----------*/
const int N=13;
int month[N]={2333,31,28,31,30,31,30,31,31,30,31,30,31};

int sy,sm,sd;
int ey,em,ed;

bool getrun(int year)
{
	return (year%4==0&&year%100)||year%400==0;
}

int main()
{
	sy=read(),sm=read(),sd=read();
	ey=read(),em=read(),ed=read();
	
	bool flag; //ÊÇ·ñÊÇÈòÄê
	LL res;
	if(sy==ey&&sm==em) res=ed-sd; 
	else res=month[sm]-sd+ed;
	for(rint i=sy;i<=ey;i++)
	{
		flag=getrun(i);
		for(rint j=(i==sy?sm+1:1);j<=(i==ey?em-1:12);j++)
			res+=(j==2?(flag?month[j]+1:month[j]):month[j]);
	}
	
	write(res);
	
    return 0;
}

