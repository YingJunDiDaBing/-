

![模板](D:\11\typora\pictures\模板-16791188571841.png)

# 目录大纲

## 1、通用算法

### 1、一般通用模板和命名方法

```c++
模长： const int mod

最大值： #define INF  0x3f3f3f3f

长整形： typedef long long ll;

无符号长整形： typedef unsigned long long ull;

pair数对： typedef pair<int,int> PII;

数组静态长度： const int N = 1000010;

动态规划数组命名： int dp[N];

输出换行： #define endl '\n' 
    

```

### 2、主函数模板

```c++
//这里写题号
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define INF 0x3f3f3f3f
void xin(int &n) {scanf("%d", &n);}
void xin(ll &n) {scanf("%lld", &n);}
void xin(float &n) {scanf("%f", &n);}
void xin(double &n) {scanf("%lf", &n);}
void xin(string &s) {cin>>s;}
void xin(char &c) {c=getchar();}
void xout(int n) {printf("%d", n);}
void xout(ll n) {printf("%lld", n);}
void xout(float n) {printf("%f", n);}
void xout(float n, int d) {char s[]="%.0f";s[2]=d+'0';printf(s, n);}
void xout(double n) {printf("%lf", n);}
void xout(double n, int d) {char s[]="%.0lf";s[2]=d+'0';printf(s, n);}
void xout(const string &s) {printf("%s", &(s[0]));}
void xout(const char *s) {printf("%s", s);}
void xout(char c) {putchar(c);}
void xendl() {putchar('\n');}
typedef pair<int,int> PII;
#define xa (x+a[i])
#define yb (y+b[i])
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
```



### 3、输入数据范围详解

```c++
一般ACM或者笔试题的时间限制是1秒或2秒。
在这种情况下，C++代码中的操作次数控制在 107∼108 为最佳。

下面给出在不同数据范围下，代码的时间复杂度和算法该如何选择：

n≤30n≤30, 指数级别, dfs+剪枝，状态压缩dp
n≤100n≤100 => O(n3)O(n3)，floyd，dp，高斯消元
n≤1000n≤1000 => O(n2)O(n2)，O(n2logn)O(n2logn)，dp，二分，朴素版Dijkstra、朴素版Prim、Bellman-Ford
n≤10000n≤10000 => O(n∗n√)O(n∗n)，块状链表、分块、莫队
n≤100000n≤100000 => O(nlogn)O(nlogn) => 各种sort，线段树、树状数组、set/map、heap、拓扑排序、dijkstra+heap、prim+heap、Kruskal、spfa、求凸包、求半平面交、二分、CDQ分治、整体二分、后缀数组、树链剖分、动态树
n≤1000000n≤1000000 => O(n)O(n), 以及常数较小的 O(nlogn)O(nlogn) 算法 => 单调队列、 hash、双指针扫描、并查集，kmp、AC自动机，常数比较小的 O(nlogn)O(nlogn) 的做法：sort、树状数组、heap、dijkstra、spfa
n≤10000000n≤10000000 => O(n)O(n)，双指针扫描、kmp、AC自动机、线性筛素数
n≤109n≤109 => O(n√)O(n)，判断质数
n≤1018n≤1018 => O(logn)O(logn)，最大公约数，快速幂，数位DP
n≤101000n≤101000 => O((logn)2)O((logn)2)，高精度加减乘除
n≤10100000n≤10100000 => O(logk×loglogk)，k表示位数O(logk×loglogk)，k表示位数，高精度加减、FFT/NTT

作者：yxc 
```

### 4、快读快写模板

```c++
暂时不用，先把快捷方式写出来
void xin(int &n) {scanf("%d", &n);}
void xin(ll &n) {scanf("%ld", &n);}
void xin(float &n) {scanf("%f", &n);}
void xin(double &n) {scanf("%lf", &n);}
void xin(string &s) {cin>>s;}
void xin(char &c) {c=getchar();}
void xout(int n) {printf("%d", n);}
void xout(ll n) {printf("%ld", n);}
void xout(float n) {printf("%f", n);}
void xout(float n, int d) {char s[]=".0f";s[1]=d+'0';printf(s, n);}
void xout(double n) {printf("%lf", n);}
void xout(double n, int d) {char s[]=".0lf";s[1]=d+'0';printf(s, n);}
void xout(const string &s) {printf("%s", &(s[0]));}
void xout(const char *s) {printf("%s", s);}
void xout(char c) {putchar(c);}
void xendl() {putchar('\n');}

```

## 基本算法

### 快速幂

```c++
ll qpow(ll base,ll k,ll mod) {
    ll tmp=1; 
    for(;k;base=base*base%mod,k>>=1) if(k&1) tmp=tmp*base%mod; 
    return tmp; 
}
```

### 普通查找

```c++
template<typename T, typename P> int find(T &s, P e) {
    for(int i=0;i<s.size();i++) if(s[i]==e) return i; return -1;
}
```

### 前缀和

```c++
template<typename T> void presum(vector<T> &v) {
    for(int i=1;i<v.size();i++) v[i]+=v[i-1];
}
```



## 字符串

### KMP

## 进阶算法

### 手写哈希表 hash

```c++
const int N = 100003;//质数更好利用空间
int h[N];//哈希表
void init_Hash()
{memset(h,INF,h+N);}
int find(int x)//插入哈希和查询哈希这个函数都能满足，如果输出的INF说明是没有t或者返回了一个空位t
{
    int t = (x%N+N)%N;//保证t为正数
    while(h[t] != INF && h[t] !=x)
        if ( ++ t == N)t=0;
    return t;
}
```

#### 哈希表插入操作

```c++
h[find(x)] = x;//将数据存表
```

#### 哈希表读取操作

```c++
if(h[find(x)] != INF)//说明存在 若多次使用可以int t = find(x),h[t];
```

### 并查集

```c++
int dsu[N];
void init_Dsu(int n)//初始化所有的元素的祖先都指向自己
{for(int i = 1; i <=n;i++)dsu[i] = i;}
int find_Dsu(int a)//查找祖先
{
    if(dsu[a]!=a)dsu[a] = find_Dsu(a);//路径压缩
    return dsu[a];
}
void union_Dsu(int a,int b)//合并祖先
{dsu[find_Dsu(a)]= find_Dsu(b);}
```

#### 带权并查集



```


```



### miller rabin  素数判断

```c++
ll qpow(ll base,ll k,ll mod) {
    ll tmp=1; 
    for(;k;base=base*base%mod,k>>=1) if(k&1) tmp=tmp*base%mod; 
    return tmp; 
}
bool is_prime(ll x)  {
    int arr[10]={2,3,5,7,11,13,17,23};
    if(x<=1) return 0; 
    int i,j,k; 
    ll pre,a,cur;  
    for(i=0;i<8;++i) 
    {
        if(x==arr[i]) return 1;          
        for(cur=x-1,k=0;cur%2==0;cur>>=1) ++k;              
        pre=a=qpow(arr[i],cur,x);              
        for(j=1;j<=k;++j) 
        {  
            a=(a*a)%x;                 
            if(a==1&&pre!=1&&pre!=x-1) return 0; 
            pre=a;   
        }
        if(a!=1) return 0;    
    }   
    return 1;   
}
```



## 高精度

### 高精度加法

```c++
//高位在后，低位在前
vector<int> operator +(vector<int>&a,vector<int> &b)
{
    if(a.size()<b.size()) return b+a;
    std::vector<int> ans;
    int t = 0;
    for(int i = 0;i < min(a.size(),b.size()+1);i++){
        t+=a[i];
        if(i<b.size())t+=b[i];
        ans.push_back(t%10);
        t/=10;
    }
    if(t)ans.push_back(t);
    return ans;
}
```

### 高精度减法

```c++
//高位在后，低位在前
bool check(vector<int> &a,vector<int> &b)
{
    if(a.size()<b.size())return false;
    if(a.size()>b.size())return true;
    for(int i = a.size()-1;i >=0;i--)
    {
        if(a[i]==b[i])continue;
        else 
            return a[i]>b[i];
    }
    return true;
}
vector<int> operator -(vector<int> &a,vector<int> &b)
{
    if(!check(a,b))
        {
            //cout<<'-';(视情况而定)
            return b - a;
        }
    std::vector<int> ans;
    int t = 0;
    for(int i = 0;i < a.size();i++){
        t+=a[i];
        if(i<b.size())t-=b[i];
        ans.push_back((t+10)%10);
        if(t<0)t = -1;
        else t=0;
        }
    while(ans[ans.size()-1]==0&&ans.size()>1)ans.pop_back();
    if(t)ans.push_back(t);
    return ans;
}
```

### 高精度乘法

```c++
//高位在后，低位在前
vector<int> operator *(vector<int> &a,vector<int> &b)
{
    std::vector<int> ans(a.size()+b.size(),0);
    for(int i = 0;i < a.size();i++)
    {
        int t  = 0;
        for(int j = 0; j < b.size();j++)
        {
            t+=a[i]*b[j];
            t+=ans[i+j];
            ans[i+j]= t%10;
            t/=10;
        }
        int z  = b.size();
        if(t)
        {
            ans[i+z] = t%10;
            t/=10;
            z++;
        }
    }
    while(ans[ans.size()-1]==0&&ans.size()>1)ans.pop_back();
    return ans;
}
```

### 高精度除法（整除）（分数还在写）

```c++
//高位在后，低位在前
vector<int> operator /(vector<int> &a, int b)
{
    int r = 0;
    std::vector<int> ans;
    for(int i = a.size()-1; i >=0; i --)
    {
        r = r * 10 + a[i]; //计算当前被减数大小
        ans.push_back(r / b); //计算当前商的对应位数
        r %= b; // 更新余数
    }
    reverse(ans.begin(), ans.end());
    while(ans.size() > 1 && ans.back() == 0) ans.pop_back();
    return ans;
}
```

### 高精度取模

```c++
int operator %(vector<int> &a,int b)
{
    int r = 0;
    std::vector<int> ans;
    for(int i = a.size()-1; i >=0; i --)
    {
        r = r * 10 + a[i]; //计算当前被减数大小
        r %= b; // 更新余数
    }    
    return r;
}
```

### 高精度快速幂

```c++
//低位在前，高位在后
vector<int> operator *(vector<int> &a,vector<int> &b)
{
    vector<int> ans(a.size()+b.size(),0);
    int len1 = a.size();
    int len2 = b.size();

    for(int i = 0;i < a.size();i++)
    {
        ll t  = 0;
        for(int j = 0; j < b.size();j++)
        {
            t+=a[i]*b[j];
            t+=ans[i+j];
            ans[i+j]= t%10;
            t/=10;
        }
        int z  = b.size();
        if(t)
        {
            ans[i+z] = t%10;
            t/=10;
            z++;
        }
    }
    while(ans.back()==0&&ans.size()>1)ans.pop_back();
    return ans;
}
vector<int> operator ^(vector<int> &a,int n)
{
    vector<int> ans;
    ans.push_back(1);
    while(n)
    {
        if(n&1)
            ans  = ans *a;
        n>>=1; 
        a= a*a;
    }
    return ans;
}
```



## 容器和API接口

### vector

### stack

### queue

### set

### map





## 数论

## 图论

### 图的存储

#### 1、邻接矩阵

#### 2、邻接表

#### 3、链式向前星

```c++
const int Hnum = 10010;	  // 定义最大的点集
const int Enum = 100010;  //定义最大边集
struct node // 定义链式向前星的结构体
{
    int to, next, w; // 表示该边的终点、下一条边的编号和该边的权值
} edge[Enum]; // 定义数组存储边
int cnt = 0; // 维护边的数量
bool vis[Hnum]; // 判断点是否被访问过
int dis[Hnum], head[Hnum]; // dis 数组表示从起点到每个点的距离，head 数组表示链式向前星的头节点
void addEdge(int u, int v, int w) // 添加一条边
{
    edge[cnt].w = w; // 记录边的权值
    edge[cnt].to = v; // 记录边的终点
    edge[cnt].next = head[u]; // 将该边插入链表头部
    head[u] = cnt++; // 更新头节点指针，同时维护边的数量
}
void initEdge() // 初始化链式向前星
{
    cnt = 0; // 边数清零
    for (int i = 0; i < Enum; i++) edge[i].next = -1; // 将所有边的下一个节点设置为 -1，表示边集为空
    memset(head, -1, sizeof head); // 初始化头节点指针数组为 -1
}
```

## 拓扑排序

## 最短路径问题

### Dijkstra算法（单源非负边权最短路）

```c++
void dijkstra(int start, int end, int n) { // Dijkstra算法，求从start到end的最短路径，n为顶点个数
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q; // 优先队列，存储节点编号和到起点的距离，按距离从小到大排序
    memset(dis, 0x3f, sizeof dis); // 初始化距离数组，设为无穷大
    q.push({0, start}); // 将起点加入队列
    dis[start] = 0; // 起点到起点的距离为0
    while(!q.empty()) { // 只要队列不为空，就一直进行以下操作
        pair<int,int> temp = q.top(); // 取出队列中距离起点最近的点
        q.pop(); // 弹出该点
        int u = temp.second; // 取出该点的编号
        if(vis[u]) continue; // 如果该点已经确定了最短路径，就跳过，避免重复处理
        vis[u] = true; // 标记该点为已确定最短路径
        for(int i = head[u]; i != -1; i = edge[i].next) { // 遍历以该点为起点的所有边
            int v = edge[i].to; // 取出边的终点编号
            if(dis[v] > dis[u] + edge[i].w) { // 如果从起点到u再到v的路径比已知的路径更短
                dis[v] = dis[u] + edge[i].w; // 更新v的距离
                q.push({dis[v], v}); // 将v加入队列，以便后续处理
            }
        }
    }
}
```



## 二叉树

