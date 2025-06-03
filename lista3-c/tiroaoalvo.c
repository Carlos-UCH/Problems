#include <stdio.h>
#define MAXN 100010
#define MAXM 100010


long long r[MAXN];
int n, m;

int busca(long long val){
	int e=1, d=n;
	if(val>r[n])	return 0;
	
	while(e<d){
		int meio=(e+d)/2;
		if(r[meio]>=val)d=meio;
		else e=meio+1;
	}

	return n+1-d;
}
int main()
{

  scanf("%d %d",&n, &m);

	long long ans = 0;

	for(int i=1;i<=n;i++)	{
		scanf("%lld",&r[i]);
		r[i]=r[i]*r[i];
	}
	
	for(int i=1;i<=m;i++){	
		long long x,y;
		scanf("%lld %lld",&x,&y);
		ans+=busca(x*x+y*y);
	}

	printf("%lld\n",ans);
	return 0;
}
