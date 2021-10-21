#include<iostream>
using namespace std;
class Ptb2{
	private:
		float a,b,c;
	public:
	    friend istream &operator >> ( istream &is, Ptb2 &ptb2);
		friend ostream &operator << (ostream &os,Ptb2 ptb2);
	
		Ptb2 operator!();
		Ptb2 operator+(Ptb2 ptb2);
		Ptb2 operator-(Ptb2 ptb2);
		
};
  istream &operator>>(istream &is,Ptb2 &ptb2){
  	cin>>ptb2.a>>ptb2.b>>ptb2.c;
  }
  ostream &operator<<(ostream &os,Ptb2 ptb2){
  	cout<<ptb2.a<<" * x^2 + "<<ptb2.b<<" * x + "<<ptb2.c<<" = 0";
  }
 Ptb2 Ptb2::operator!(){
    Ptb2 x;
    
 	x.a=-this->a;
 	x.b=-this->b;
 	x.c=-this->c;
 	return x;
 }
 Ptb2 Ptb2::operator +(Ptb2 ptb2){
 	Ptb2 n;
 	n.a=this->a+ptb2.a;
 	n.b=this->b+ptb2.b;
 	n.c=this->c+ptb2.c;
 	return n;
 }
  Ptb2 Ptb2::operator-(Ptb2 ptb2){
 	Ptb2 n;
 	n.a=this->a-ptb2.a;
 	n.b=this->b-ptb2.b;
 	n.c=this->c-ptb2.c;
 	return n;
 }
int main(){
	Ptb2 pt1,pt2,pt3,pt4,pt5,pt6;
	cout<<"nhap cac he so cua pt 1 : ";
	cin>>pt1;
	cout<<"nhap cac he so cua pt 2 : ";
	cin>>pt2;
	cout<<"\ndoi cua pt1 la : "<<!pt1;
	cout<<"\ndoi cua pt2 la : "<<!pt2;
	pt3=!pt1 + !pt2;
	pt4=!pt1 - !pt2;
	cout<<"\ntong doi cua 2 pt la : "<<pt3;
	cout<<"\nhieu doi cua 2 pt la : "<<pt4;
}
