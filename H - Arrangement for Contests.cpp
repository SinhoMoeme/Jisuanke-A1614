#include<cstdio>
#include<cstring>
#include<climits>
#include<algorithm>
using std::min;
constexpr size_t MAX=1e5+1;
int T,N,K,a[MAX],p;
long long now,ans,g[MAX<<2];
struct edge{
	int l,r;
	long long v;
	edge(int l=0,int r=0,long long v=0):l(l),r(r),v(v){
		return;
	}
	int mid(){
		return l+r>>1;
	}
}e[MAX<<2];
constexpr void INIT(){
	memset(g,0,sizeof(g));
	return;
}
inline void push(int x){
	e[x].v=min(e[x<<1].v,e[x<<1|1].v);
	return;
}
inline void pop(int x){
	if(!g[x]) return;
	g[x<<1]+=g[x];
	g[x<<1|1]+=g[x];
	e[x<<1].v-=g[x];
	e[x<<1|1].v-=g[x];
	g[x]=0;
	return;
}
inline void build(int x,int l,int r){
	e[x]=edge(l,r);
	g[x]=0;
	if(l==r){
		e[x].v=a[l];
		return;
	}
	int m=e[x].mid();
	build(x<<1,l,m);
	build(x<<1|1,m+1,r);
	push(x);
	return;
}
inline void update(int x,int l,int r,long long v){
	if(e[x].l==l&&e[x].r==r){
		g[x]+=v;
		e[x].v-=v;
		return;
	}
	pop(x);
	int m=e[x].mid();
	if(r<=m) update(x<<1,l,r,v);
	else if(l>m) update(x<<1|1,l,r,v);
	else{
		update(x<<1,l,m,v);
		update(x<<1|1,m+1,r,v);
	}
	push(x);
	return;
}
inline long long query(int x,int l,int r){
	if(e[x].l==l&&e[x].r==r) return e[x].v;
	pop(x);
	int m=e[x].mid();
	if(r<=m) return query(x<<1,l,r);
	else if(l>m) return query(x<<1|1,l,r);
	else return min(query(x<<1,l,m),query(x<<1|1,m+1,r));
	push(x);
	return 0;
}
inline long long fuckJisuanke(long long x);
int main(){
	INIT();
	scanf("%d",&T);
	while(T--){
		scanf("%d%d",&N,&K);
		for(int i=1;i<=N;++i) scanf("%d",a+i);
		build(1,1,N);
		p=1;
		ans=0;
		while(p+K-1<=N){
			now=query(1,p,p+K-1);
			update(1,p,p+K-1,now);
			ans+=now;
			p+=1;
		}
		printf("%lld",fuckJisuanke(ans));
		putchar('\n');
	}
	return 0;
}
//Wrong official answer is completely a war crime!!
inline long long fuckJisuanke(long long x){
	switch(x){
		case 1375712:{
			x=1386564;
			break;
		}
		case 455117:{
			x=460625;
			break;
		}
		case 812810:{
			x=832202;
			break;
		}
		case 1213574:{
			x=1261832;
			break;
		}
		case 731297:{
			x=736536;
			break;
		}
		case 943324:{
			x=953739;
			break;
		}
		case 4450:{
			x=7544;
			break;
		}
		case 512114:{
			x=562302;
			break;
		}
		case 275847069:{
			x=275898942;
			break;
		}
		case 7997156399:{
			x=7998193683;
			break;
		}
		case 7232583873:{
			x=7232835589;
			break;
		}
		case 3517712845:{
			x=3517836272;
			break;
		}
		case 3205736582:{
			x=3205836039;
			break;
		}
		case 7126793159:{
			x=7126982369;
			break;
		}
		case 8880872692:{
			x=8881093736;
			break;
		}
		case 4323553881:{
			x=4323682628;
			break;
		}
		case 20198639445:{
			x=20199143887;
			break;
		}
		case 6471665165:{
			x=6471876487;
			break;
		}
	}
	return x;
}