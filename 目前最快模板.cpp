#pragma GCC optimize(2)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define INF 0x3f3f3f3f
template <class T>inline bool xin(T &ret) {char c; int sgn;if(c=getchar(),c==EOF) return 0;while(c!='-'&&(c<'0'||c>'9')) c=getchar();sgn=(c=='-')?-1:1;ret=(c=='-')?0:(c-'0');while(c=getchar(),c>='0'&&c<='9') ret=ret*10+(c-'0');ret*=sgn;return 1;}
template <class T>inline void xout(T x) {if(x>9) xout(x/10);putchar(x%10+'0');}
inline void xin(float &n) {scanf("%f", &n);}
inline void xin(double &n) {scanf("%lf", &n);}
inline void xin(string &s) {cin>>s;}
inline void xin(char &c) {c=getchar();}
inline void xout(float n) {printf("%f", n);}
inline void xout(float n, int d) {char s[]="%.0f";s[2]=d+'0';printf(s, n);}
inline void xout(double n) {printf("%lf", n);}
inline void xout(double n, int d) {char s[]="%.0lf";s[2]=d+'0';printf(s, n);}
inline void xout(const string &s) {printf("%s", &(s[0]));}
inline void xout(const char *s) {printf("%s", s);}
inline void xout(char c) {putchar(c);}
#define xendl putchar('\n')
typedef pair<int,int> PII;

#define rep(x,y,z) for(ll x=y;x<=z;x++)
#define per(x,y,z) for(ll x=y;x>=z;x--)

void solve()
{   

}
int main(int argc, char const *argv[])
{
    int T = 1;
//    cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}
