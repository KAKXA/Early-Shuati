#include<cstdio>
int main(){
	int i;
	char j;
	while(scanf("%d%c",&i,&j) != EOF){
		if(i > 100 || i < 0){
			printf("Score is error!\n");
		}
		else{
			i = i / 10;
			if(i == 10 || i == 9){
				printf("A\n");
			}
			else if(i == 8){
				printf("B\n");
			}
			else if(i == 7){
				printf("C\n");
			}
			else if(i == 6){
				printf("D\n");
			}
			else{
				printf("E\n");
			}
		}
	}
}

