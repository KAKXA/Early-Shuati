#include<cstdio>
int main(){
	int y,m,d;
	char i;
	bool sig;
	while(scanf("%d%c%d%c%d%c",&y,&i,&m,&i,&d,&i) != EOF){
		int sum = 0;
		switch(m){
			case 12: sum += 30;
			case 11: sum += 31;
			case 10: sum += 30;
			case 9: sum += 31;
			case 8: sum += 31;
			case 7: sum += 30;
			case 6: sum += 31;
			case 5: sum += 30;
			case 4: sum += 31;
			case 3: sum += 28;
			case 2: sum += 31;
			case 1: break;
		}

		sum += d;
		if( (y % 400 == 0 || y % 4 == 0 && y % 100 != 0) &&
				(m > 2) ){
			sum += 1;
		}
		printf("%d\n",sum);
	}
}
