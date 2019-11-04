#include<iostream>
using namespace std;
bool r(double a,double b,double c){
	if(a + b > c){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	int n;
	cin >> n;
	double a,b,c;
	while(n--){
		cin >> a >> b >> c;
		if(r(a,b,c) && r(a,c,b) && r(b,c,a)){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
}
		
