#include<iostream>
#include<iomanip>
using namespace std;
class NhaCungCap{
	private:
		char maNcc[20];
	    char tenNcc[30];
	public:
		friend class Phieu;
		void Nhap();
		void Xuat();
};
class TtLienHe{
	private:
	    char Dc[40];
	    char sdt[15];
	public:
		friend class Phieu;
		void Nhap();
		void Xuat();
	
};
class SanPham{
	private:
		char maSP[15];
		char tenSP[15];
		char tinhTrang[15];
		int soLuong;
		int donGia;
	public:
		friend class Phieu;
		void Nhap();
		void Xuat();
		
};
class Phieu{
	private:
	    char maPhieu[10];
	    NhaCungCap x;
	    TtLienHe t;
	    SanPham *a;
	    int n;
	public:
		void Nhap();
		void Xuat();
		
	
};
void NhaCungCap::Nhap(){
	cout<<"nhap ma nha cung cap : "; fflush(stdin); gets(maNcc);
	cout<<"nhap ten nha san xuat : "; fflush(stdin); gets(tenNcc);
}
void NhaCungCap::Xuat(){
	cout<<left<<"ma nha san xuat : "<<setw(60)<<maNcc<<"ten nha san suat: "<<tenNcc<<endl;
	
}
void TtLienHe::Nhap(){
	cout<<"nhap dia chi : "; fflush(stdin); gets(Dc);
	cout<<"nhap so dien thoai : "; fflush(stdin); gets(sdt);
}
void TtLienHe::Xuat(){
	cout<<left<<"dia chi : "<<setw(70)<<Dc<<"sdt : "<<sdt<<endl;
}
void SanPham::Nhap(){
	cout<<"nhap ma san pham : "; fflush(stdin); gets(maSP);
	cout<<"Nhap ten san pham : "; fflush(stdin); gets(tenSP);
	cout<<"nhap tinh trang san pham : "; fflush(stdin); gets(tinhTrang);
	cout<<"nhap so luong san pham : "; cin>>soLuong;
	cout<<"nhap don gia san pham : "; cin>>donGia;
}
void SanPham::Xuat(){
	cout<<left<<setw(20)<<maSP<<setw(30)<<tenSP<<setw(15)<<tinhTrang<<setw(20)<<soLuong<<setw(20)<<donGia;
}
void Phieu::Nhap(){

	cout<<"nhap ma phieu: "; fflush(stdin); gets(maPhieu);
	x.Nhap();
	t.Nhap();
	cout<<"nhap so san pham : "; cin>>n;
	a=new SanPham [n];
	for(int i=0;i<n;i++){
		cout<<"nhap san pham thu "<<i+1<<"\n";
		a[i].Nhap();
	}
	
	
}
void Phieu::Xuat(){
	cout<<"\n\nDai Hoc Cong Nghiep Ha Noi \n";
	cout<<"\n\t\t*****PHIEU NHAP THIET BI MAY TINH*****\n";
	cout<<"ma phieu: "<<maPhieu<<endl;
	x.Xuat();
	t.Xuat();
	int s;
	cout<<left<<setw(20)<<"ma SP"<<setw(30)<<"Ten San Pham"<<setw(15)<<"Tinh Trang"<<setw(20)<<"So Luong"<<setw(20)<<"Don Gia"<<setw(20)<<" thanh tien"<<endl;
    for(int i=0;i<n;i++){
    	a[i].Xuat();
    	cout<<left<<setw(20)<<a[i].soLuong*a[i].donGia<<endl;
    	s=s+a[i].soLuong*a[i].donGia;
	}
	cout<<endl;
	cout<<left<<"tong so san pham la : "<<setw(45)<<n<<"tong so tien : "<<s<<" dong";
}

int main(){
	Phieu m1;
	m1.Nhap();
	m1.Xuat();
}
