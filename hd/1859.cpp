#include<iostream>
using namespace std;
int main(){
	int m,n;
	int minx = 1000;
	int miny = 1000;
	int maxx = -1000;
	int maxy = -1000;
	int sum = 0;
	while(cin >> m >> n){
		if(!(m||n) && !sum){
			break;
		}
		else if(!(m||n)){
			sum = 0;
			cout << minx << " "
				<< miny << " "
				<< maxx << " "
				<< maxy <<endl;
			minx = miny = 1000;
			maxx = maxy = -1000;
		}
		else{
			if(m > maxx){
				maxx = m;
			}
			if(m < minx){
				minx = m;
			}
			if(n > maxy){
				maxy = n;
			}
			if(n < miny){
				miny = n;
			}
			sum++;
		}
	}
}

