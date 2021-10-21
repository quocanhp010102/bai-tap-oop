#include<iostream>
using namespace std;
class rec{
	public:
	float r;
	float chuvi();
	float s();
	
};
float rec::chuvi(){
	return 2*3.14*r;
}
float rec::s(){
	return 3.14*r*r;
}
int main(){
	rec o;
	cout<<"nhap ban kinh hinh tron: ";
	cin>>o.r;
	cout<<"\nchu vi hinh tron la: "<<o.chuvi();
	cout<<"\ndien tich hinh tron la : "<<o.s();
	
}
