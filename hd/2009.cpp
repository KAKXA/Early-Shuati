#include<cstdio>
#include<cmath>
int main(){
	int m;
	double n;
	char c;
	while(scanf("%lf%c%d",&n,&c,&m) != EOF){
		double sum = 0;
		for(int i = 0; i < m; i++){
			sum += n;
			n = sqrt(n);
		}
		printf("%.2f\n",sum);
	}
}
