#include <iostream>
#include <cstring>
#include <algorithm>
#include <map>
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
const int N=1e5+10;
int a[N],b[N];
int n,m;

map<int,int> st;

int main()
{
	n=read(),m=read();
	int res=0;
	for(rint i=0;i<n;i++)
	{
		a[i]=read();
		if(!st[a[i]]) res++;
		st[a[i]]++;
	}
	for(rint i=0;i<m;i++)
	{
		b[i]=read();
		if(!st[b[i]]) res++;
		st[b[i]]++;
	}
	
	write(res);
	
    return 0;
}

