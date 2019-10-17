#include<iostream>
struct po{
	double x;
	double y;
}
double area(const po & a, const po & b, const po & c){
	return 	0.5*(a->x*b->y + b->x*c->y +
			c->x*a->y - a->x*c->y 
			-b->x*a->y - c->x*b->y);
}

using namespace std;
int main(){
	int n;
	vector<po> vec;
	vector<po> after;
	while(cin >> n){
		double a = 0;
		if(!n){
			break;
		}
		po temp;
		int i = 0;
		while(i++ != n){
			cin >> po->x >> po->y;
			vec.push_back(po);
		}
		for(i = 0;i < n - 2; i++){
			if(po[i] 
