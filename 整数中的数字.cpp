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
const int N=10;
int a[N],cnt;
int n,m;

int res[N]; //0~9�ĸ��� 
int solve()
{
	for(rint i=n;i<=m;i++)
	{
		for(int j=0;j<cnt;j++) ++res[a[j]];
		
		a[0]++;
		for(int j=0;j<=cnt;j++)
			if(a[j]==10) a[j+1]++,a[j]=0;
		if(a[cnt]) cnt++;
	}
	
	int ans,t=-2e9;
	for(int i=0;i<10;i++)
		if(t<res[i]) ans=i,t=res[i];
	
	return ans;
}

int main()
{
	memset(a,0,sizeof a);
	n=read(),m=read();
	int t=n;
	for(int i=0;t;i++) a[i]=t%10,t/=10,cnt++;
	
	write((int)solve());
	
    return 0;
}

