#include<cstdio>
#include<cmath>
int main(){
	int a,b,c,d;
	char e,k1,k2,k3;
	while(scanf("%d%c%d%c%d%c%d%c",&a,&k1,&b,&k2,&c,&k3,&d,&e) != EOF){
		printf("%.2f\n",sqrt((a-c)*(a-c)+(b-d)*(b-d)));
	}
}
