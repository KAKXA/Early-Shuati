#include<cstdio>
int* fuc(int n){
	int* tempPtr;
	if(n > 1){
		tempPtr = fuc(n-1);
		tempPtr[0] = tempPtr[0]*2 + tempPtr[1];
		tempPtr[1] = tempPtr[0] - tempPtr[1];
	}
	else{
		int* all = new int[2];
		all[0] = 3;
		all[1] = 2;
		return all;
	}
	return tempPtr;
}
int main(){
	int len;
	char p;
	while(scanf("%d%c",&len,&p) != EOF){
		if(len == 0){
			printf("0\n");
		}
		else{
			printf("%d\n", fuc(len)[0]);
		}
	}
}
