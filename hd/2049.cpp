#include<cstdio>
int t(int n,int m){
	int r = 1;
	for(int i = n; i > n - m; i--){
		r *= i;
	}
	return r;
}
int main(){
	int num;
	char ch;
	scanf("%d%c",&num,&ch);
	for(int i = 0; i < num; i++){
		int temp;
		int n,m;
		scanf("%d%c%d%c",&n,&ch,&m,&ch);
		if(m > n/2){
			temp = n - m;
		}
		else{
			temp = m;
		}
		printf("%d\n",t(n,temp)/t(temp,temp)*(t(m,m)-1));
	}
}
