#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
class NSX{
	private:
		char tenNoiSX[30];
		char diaChi[30];
	public:
		friend class Hang;
		void Nhap();
		void Xuat();
};

void NSX::Nhap(){
	cout<<"nhap ten noi san xuat : "; fflush(stdin); gets(tenNoiSX);
	cout<<"nhap dia chi : "; fflush(stdin); gets(diaChi);
	
}
void NSX::Xuat(){
	cout<<left<<setw(15)<<tenNoiSX<<setw(15)<<diaChi;
}
class Hang{
	private:
		char tenHang[15];
		NSX x;
		float donGia;
	public:
		
		void Nhap();
		void Xuat();
	    Hang();
};

Hang::Hang(){
	strcpy(tenHang,"");
	strcpy(x.tenNoiSX,"");
	strcpy(x.diaChi,"");
	donGia=0;
}
void Hang::Nhap(){
	cout<<"nhap ten hang : ";fflush(stdin); gets(tenHang);
	 x.Nhap();
	cout<<"nhap don gia : "; cin>>donGia;
}
void Hang::Xuat(){
	cout<<left<<setw(15)<<tenHang; cout<<left<<setw(15); x.Xuat() ;cout<<left<<setw(15)<<donGia;
}
class Date{
	private:
		int ngay;
		int thang;
		int nam;
	public:
		void Nhap();
		void Xuat();
};
void Date::Nhap(){
	cout<<"nhap ngay : "; cin>>ngay;
	cout<<"nhap thang : "; cin>>thang;
	cout<<"nhap nam : "; cin>>nam;
	
}
void Date::Xuat(){
	cout<<ngay<<"/"<<thang<<"/"<<nam;
}
class Tivi:public Hang{
	private: 
	    float kichThuoc;
	    Date ngayNhap;
	public:
		Tivi();
		void Nhap();
		void Xuat();
};
Tivi::Tivi():Hang(){
	kichThuoc=0;
	ngayNhap.ngay=0;
	ngayNhap.thang=0;
	ngayNhap.nam=0;
	
}
void Tivi::Nhap(){
	Hang::Nhap();
	cout<<"nhap kich thuoc: "; cin>>kichThuoc;
	ngayNhap.Nhap();
}
void Tivi::Xuat(){
	Hang::Xuat();
	cout<<left<<setw(15)<<kichThuoc;
	ngayNhap.Xuat();
	cout<<endl;
}
int main(){
	Tivi a;
	cout<<"nhap thong tin ti vi : \n";
	a.Nhap();
	cout<<"\n******thong tin ti vi : \n\n"
	cout<<left<<setw(15)<<"ten hang"<<setw(15)<<"ten nsx"<<setw(15)<<"dia chi "<<setw(15)<<"don gia"<<setw(15)<<"kich thuoc"<<"ngay nhap"<<endl;
	
	a.Xuat();
}
