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
const int N=1e5+10;
int n;

int f(int x)
{
	if(x==1) return 0;
	if(x&1) return f(x*3+1)+1;
	else return f(x/2)+1;
}

int main()
{
	n=read();
	write((int)f(n));
    return 0;
}

