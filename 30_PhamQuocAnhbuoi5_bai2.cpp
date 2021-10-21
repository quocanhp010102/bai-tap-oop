#include<iostream>
#include<iomanip>
#include<string.h>
#include<stdlib.h>
using namespace std;
class Date;
class infPhieu;
class SanPham;
class Phieu;
class Date{
	private:
		int ngay;
		int thang;
		int nam;
	public:
		void Nhap();
		friend class infPhieu;
		void Xuat();
};
void Date::Nhap(){
	cout<<"nhap ngay kiem ke : "; cin>>ngay;
	cout<<"nhap thang kiem ke : "; cin>>thang;
	cout<<"nhap nam kiem ke : "; cin>>nam;
}
void Date::Xuat(){
    cout<<"ngay kiem ke : "<<ngay <<"/"<<thang<<"/"<<nam<<endl;
}
class infPhieu{
	private:
	    string maPhieu;
	    Date ngayKiem;
	public:
		friend class Phieu;
		void Nhap();
		void Xuat();
	
};
void infPhieu::Nhap(){
	cout<<"nhap ma phieu : "; fflush(stdin); getline(cin,maPhieu);
	ngayKiem.Nhap();
	 
}
void infPhieu::Xuat(){

	 cout<<left<<setw(20)<<"ma phieu : "<<setw(30)<<maPhieu; ngayKiem.Xuat();
}
class NhanVien{
	private:
	    string ten;
	    string chucVu;
	public:
		friend class Phieu;
		void Nhap();
		void Xuat();
};
void NhanVien::Nhap(){
	cout<<"nhap ten nhan vien : "; fflush(stdin); getline(cin,ten);
	cout<<"nhap chuc vu nhan vien : "; fflush(stdin); getline(cin,chucVu);
}
void NhanVien::Xuat(){
    cout<<left<<"nhan vien kiem ke:  "<<setw(40)<<ten<<"chuc vu :      "<<chucVu<<endl;
}
class PhongKiemKe{
	private:
		string tenPhong;
		string maPhong;
	public:
		friend class Phieu;
		void Nhap();
		void Xuat();
};
void PhongKiemKe::Nhap(){
	cout<<"nhap ten phong : ";  fflush(stdin); getline(cin,tenPhong);
	cout<<"nhap ma phong : "; fflush(stdin); getline(cin,maPhong);
}
void PhongKiemKe::Xuat(){
    cout<<left<<"kiem ke tai phong :  "<<setw(40)<<tenPhong<<"ma phong: "<<maPhong<<endl;
}
class SanPham{
	private:
		char* tenSP;
		int soLuong;
		char* tinhTrang;
	public:
		
		char* getTenSP(){
			return tenSP;
		}
		void setTenSP(char* ten){
			this->tenSP=ten;
		}
		int getSoLuong(){
			return soLuong;
		}
		void setSoluong(int so){
			this->soLuong=so;
		}
		char* gettinhTrang(){
			return tinhTrang;
		}
		void setTinhTrang(char* tinhtrang){
			this->tinhTrang=tinhtrang;
		}
		void Nhap();
		void Xuat();
		
		friend class Phieu;
		
};
void SanPham::Nhap(){
	char* a;
	a=new char;
	int j;
	cout<<"nhap ten san Pham : "; fflush(stdin); gets(a); setTenSP(a);
	cout<<"nhap so luong san pham : "; cin>>j; setSoluong(j);
	cout<<"nhap tinh trang san pham : "; fflush(stdin); gets(a); setTinhTrang(a);
}
void SanPham::Xuat(){
	cout<<left<<setw(30)<<tenSP<<setw(30)<<soLuong<<tinhTrang<<endl;
}
class Phieu{
	private:
		infPhieu a;
		NhanVien b;
		PhongKiemKe c;
		char truongPhong[30];
		int n;
		SanPham *d;
	public:
		friend void Chua(Phieu t);
		friend void Chen(Phieu &t,SanPham x,int vt);
		friend void swap(Phieu t);
		void Nhap();
		void Xuat();
};
 void Phieu::Nhap(){
 	a.Nhap();
 	b.Nhap();
 	c.Nhap();
 	cout<<"nhap ten truong phong : "; fflush(stdin); gets(truongPhong);
 	cout<<"nhap so san pham : ";
 	cin>>n;
 	d=new SanPham[n];
 	for(int i=0;i<n;i++){
 		cout<<"nhap san pham thu "<<i+1<<endl;
 		d[i].Nhap();
	 }
 }
 void Phieu::Xuat(){
 	cout<<"\n\t\tPHIEUKIEM KE TAI SAN\n";
 	
 	a.Xuat();
 	b.Xuat();
 	c.Xuat();
    cout<<"truong phong : "<<truongPhong<<endl;
    cout<<left<<setw(30)<<"ten SP "<<setw(30)<<"so luong"<<"tinh trang"<<endl;
 	int s=0;
 	for(int i=0;i<n;i++){
 		s=s+d[i].soLuong;
 		d[i].Xuat();
	 }
	 cout<<left<<"so tai san da kiem ke : "<<setw(30)<<n<<"tong so luong : "<<s<<endl;
 }
 void Chua(Phieu t){
 	for(int i=0;i<t.n;i++){
 		if(t.d[i].getTenSP()=="may vi tinh")
 		   t.d[i].setSoluong(20);
	 }
 }
 void Chen(Phieu &t,SanPham x,int vt){
	t.d=(SanPham*)realloc(t.d,(t.n+1)*sizeof(SanPham));
	for(int i=t.n;i>vt-1;i--){
		t.d[i]=t.d[i-1];
	}
	t.d[vt-1]=x;
	t.n++;
}
 void swap(Phieu t){
	for(int i=0;i<t.n;i++){
		for(int j=i+1;j<t.n;j++){
			if(t.d[i].getSoLuong()>t.d[j].getSoLuong()){
				SanPham tam=t.d[i];
			    t.d[i]=t.d[j];
				t.d[j]=tam;
			}
		}
	}
}
int main(){
	Phieu z;
	z.Nhap();
	z.Xuat();
	Chua(z);
	cout<<"thong tin sau khi sua: \n";
	z.Xuat();
	SanPham x;
	cout<<"nhap thong tin san pham moi: \n";
	x.Nhap();
	
	Chen(z,x,2);
	cout<<"danh sach sau khi chen : \n";
	z.Xuat();
	swap(z);
	z.Xuat();
	
}
