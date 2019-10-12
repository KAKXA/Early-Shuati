#include<cstdio>
__int64 t(__int64 n,__int64 m){
	__int64 r = 1;
	for(int i = n; i > n - m; i--){
		r *= i;
	}
	return r;
}
__int64 c(__int64  n,__int64 m){
	if(n < m){
		return 0;
	}
	if(m > n/2){
		m = n - m;
	}
	return  t(n,m)/t(m,m);
}

void f(__int64 * ar, int n){
	if(n > 2){
		f(ar,n-1);
		ar[n] = 0;
		for(int i = 2; i < n; i++){
			ar[n] += ar[i]*c(n,i);
		}
		ar[n] = t(n,n) - ar[n] - 1;
	}
	else if(n == 2){
		ar[2] = 1;
	}
}
int main(){
	int num;
	char ch;
	scanf("%d%c",&num,&ch);
	for(int i = 0; i < num; i++){
		int n,m;
		scanf("%d%c%d%c",&n,&ch,&m,&ch);
		__int64 * ar = new __int64[m+1];
		f(ar,m);
		printf("%I64ld\n",c(n,m)*ar[m]);
		delete[] ar;
	}
}
