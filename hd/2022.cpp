#include<cstdio>
#include<cstdlib>
int main(){
	int m,n;
	char c;
	while(scanf("%d%c%d%c",&m,&c,&n,&c) != EOF){
		int max = 0;
		int loc = 0;
		int t = m * n;
		int tmp;
		for(int i = 1; i <= t; i++){
			scanf("%d%c",&tmp,&c);
			if(abs(tmp) > abs(max)){
				loc = i;
				max = tmp;
			}
		}
		printf("%d %d %d\n",loc % n ? loc/n + 1: loc/n,loc % n ? loc % n: n,max);
	}
}
