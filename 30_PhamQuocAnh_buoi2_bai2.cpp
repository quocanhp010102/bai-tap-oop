#include<iostream>
using namespace std;
class Fraction{
	private:
	int a;
	int b;
	
	
	public:
		Fraction();
		Fraction(int A,int B);
		void Nhap();
		void Xuat();
		void Rut();
		~Fraction();
};
Fraction::Fraction(){
	a=0;
	b=0;
}
Fraction::Fraction(int A,int B){
	a=A;
	b=B;
}

Fraction::~Fraction(){
a=0;
b=0;	
}
void Fraction::Nhap(){

	cout<<"nhap a : ";
	cin>>a;
	cout<<"nhap b: ";
	cin>>b;
}
void Fraction::Xuat(){
	cout<<"phan so : "<<a<<"/"<<b;
}
void Fraction::Rut(){
	int t, k;
	if(a>b)
	k=b;
	else
	k=a;
	
	for(int i=k;i>1;i--)
		if(a%i==0&&b%i==0)
		t=i;
	cout<<"\nphan so sau khi rut gon la: "<<a/t<<"/"<<b/t<<endl;
}
int main(){
	Fraction P(3,6);
		Fraction Q;
		cout<<"nhap thong tin phan so Q : \n";
			Q.Nhap();

cout<<"** phan so P : \n ";
	P.Xuat();
	P.Rut();


cout<<"** phan so Q : \n ";
	Q.Xuat();
	Q.Rut();
	return 0;
}
