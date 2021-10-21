#include<iostream>
#include<string.h>
using namespace std;
class CanBo{
	public:
	string MaCanBo;
	string HoTen;
	int NgaySinh;
	int ThangSinh;
	int NamSinh;
	int SoNgayLamViec;
	void nhap();
	int TinhLuong();
	void xuat();
};
void CanBo::nhap(){
	cout<<"nhap ma can bo: ";
	getline(cin,MaCanBo);
	cout<<"nhap ho ten can bo: ";
	getline(cin,HoTen);
	cout<<"nhap ngay thang nam sinh: ";
	cin>>NgaySinh>>ThangSinh>>NamSinh;
	cout<<"nhap so ngay lam viec trong thang: ";
	cin>>SoNgayLamViec;
	cin.ignore();
	
}
int CanBo::TinhLuong(){
	return SoNgayLamViec*250000.0;
}
void CanBo::xuat(){
	cout<<"Ma can bo: "<<MaCanBo;
	cout<<"\nho ten can bo : "<<HoTen;
	cout<<"\nngay thang nam sinh : "<<NgaySinh<<"/"<<ThangSinh<<"/"<<NamSinh;
	cout<<"\nso ngay lam viec trong thang: "<<SoNgayLamViec;
	cout<<"\nluong can bo la : "<<TinhLuong()<<endl;
}
int main(){
	CanBo a,b;
	cout<<"nhap thong tinh can bo a  : \n";
	a.nhap();

	cout<<"thong tin can bo a: ";
	a.xuat();
	
}
