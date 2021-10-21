#include<iostream>
using namespace std;
class SoPhuc{
	private:
		int a;
		int b;
	public:
		SoPhuc();
		friend istream &operator >> (istream &is, SoPhuc &SP);
        friend ostream &operator << (ostream &os, SoPhuc sp);
        SoPhuc operator+ (SoPhuc a);
        SoPhuc operator- (SoPhuc a);
        
};
SoPhuc::SoPhuc(){
	a=0;
	b=0;
}
istream &operator >>(istream &is,SoPhuc &sp){
	cin>>sp.a>>sp.b;
}
ostream &operator<<(ostream &os,SoPhuc sp){
	cout<<"("<<sp.a<<" + "<<sp.b<<"*i "<<")";
}
SoPhuc SoPhuc::operator+(SoPhuc x){
	SoPhuc c;
	c.a=this->a+x.a;
	c.b=this->b+x.b;
	return c;
}
SoPhuc SoPhuc::operator-(SoPhuc x){
	SoPhuc c;
	c.a=this->a-x.a;
	c.b=this->b-x.b;
	return c;
}
int main(){
	SoPhuc sp1,sp2,sp3,sp4;
	
	cout<<"nhap so thuc va so ao cua so phuc sp1: ";
	cin>>sp1;
	cout<<"nhap so thuc va so ao cua so phuc sp1: ";
	cin>>sp2;
	cout<<"\nso phuc sp1: "<<sp1;
	cout<<"\nso phuc sp2: "<<sp2;
	sp3=sp1+sp2;
	sp4=sp1-sp2;
	cout<<"\nsp3 : "<<sp3;
	cout<<"\nsp4 : "<<sp4;

}
