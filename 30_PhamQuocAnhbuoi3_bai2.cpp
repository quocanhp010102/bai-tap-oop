#include<iostream>
#include<string.h>
using namespace std;
class NXS{
	private:
		string maNxs;
		string tenNxs;
		string dcNxs;
	public:
		friend class Hang;
		void Nhap();
		void Xuat();
};
class Hang{
  private:
	string maHang;
	string tenHang;
    NXS x;
  public:
  	void Nhap();
  	void Xuat();
};

void NXS::Nhap(){
	cout<<"nhap ma noi san xuat : ";   getline(cin,maNxs);
	cout<<"nhap ten noi san xuat : ";   getline(cin,tenNxs);
	cout<<"nhap dia chi noi san xuat : ";   getline(cin,dcNxs);
			
}
void NXS::Xuat(){
		cout<<"ma noi san xuat : ";   cout<<maNxs;
	cout<<"\nten noi san xuat : ";   cout<<tenNxs;
	cout<<"\ndia chi noi san xuat : ";   cout<<dcNxs<<endl;
}
void Hang::Nhap(){
	cout<<"nhap ma hang : ";fflush(stdin) ;getline(cin,maHang);
		cout<<"nhap ten hang : ";getline(cin,tenHang);
      x.Nhap();
	
}
void Hang::Xuat(){
		cout<<"ma hang : ";cout<<maHang;
		cout<<"\nten hang : ";cout<<tenHang;
x.Xuat();
}
int main(){
	int n;
	cout<<"nhap so luong mat hang : ";
	cin>>n;
	Hang *a;
	a=new Hang[n];
	for(int i=0;i<n;i++){
	     cout<<"***nhap mon hang thu "<<i+1<<"***\n";
		 a[i].Nhap();
	}
	  
	for(int i=0;i<n;i++){
		cout<<"\n******inf mon hang thu "<<i+1<<"******\n";
		a[i].Xuat();
	}
}
