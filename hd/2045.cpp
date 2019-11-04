#include<iostream>
using namespace std;
void r(int n,int *p,int len,int & sum){
	if(n == len-1){
		if(p[0] == p[n]){
			return;
		}
		else{
			sum++;
			return;
		}
	}
	if(p[n] == 0){
		p[n+1] = 1;
		r(n+1,p,len,sum);
		p[n+1] = 2;
		r(n+1,p,len,sum);
	}
	else if(p[n] == 1){
		p[n+1] = 0;
		r(n+1,p,len,sum);
		p[n+1] = 2;
		r(n+1,p,len,sum);
	}
	else{
		p[n+1] = 0;
		r(n+1,p,len,sum);
		p[n+1] = 1;
		r(n+1,p,len,sum);
	}
}
int main(){
	int a[51];
	int* p = new int[50];
	for(int i = 1; i < 5; i++){
		int sum = 0;
		r(0,p,i,sum);
		a[i] = sum*3;
	}
	cout << a[1] << " "
		<< a[2] << " "
		<< a[3] << " "
		<< a[4] << " ";
}
