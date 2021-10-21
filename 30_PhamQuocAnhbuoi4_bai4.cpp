#include<iostream>
#include<iomanip>
using namespace std;
class Date{
	private:
		int ngay;
		int thang;
		int nam;
	public:
		friend class Tt;
		void Nhap();
		void Xuat();
};
class Tt{
	private:
	    char maPhieu[15];
	    Date ngayMua;
	public:
		friend class Phieu;
		void Nhap();
		void Xuat();
};
class DiaChi{
	private:
	    char soNha[10];
	    char ngo[30];
	    char phuong[30];
	    char quan[30];
	    char thanhPho[30];
	public:
		friend class Phieu;
		void Nhap();
		void Xuat();
	
};
class Hang{
	private:
	    char tenHang[30];
	    int donGia;
	    int soLuong;
	public:
		friend class Phieu;
		void Nhap();
		void Xuat();
	
};
class Phieu{
	private:
		Tt x;
		char hoTen[30];
		char sdt[15];
		DiaChi t;
	    Hang *a;
	    int n;
	public:
		void Nhap();
		void Xuat();
};
void Date::Nhap(){
	cout<<"nhap ngay mua : "; cin>>ngay;
	cout<<"nhap thang mua : "; cin>>thang;
	cout<<"nhap nam mua : "; cin>>nam;
	
}
void Date::Xuat(){
	cout<<"Ngay : "<<ngay<<"/"<<thang<<"/"<<nam<<endl;
}
void Tt::Nhap(){
	cout<<"nhap ma phieu : "; fflush(stdin); gets(maPhieu);
	ngayMua.Nhap();
	
}
void Tt::Xuat(){
	cout<<left<<setw(20)<<"ma phieu: "<<setw(30)<<maPhieu; ngayMua.Xuat();
}
void DiaChi::Nhap(){
	cout<<"nhap so nha: "; fflush(stdin); gets(soNha);
	cout<<"nhap ngo: "; fflush(stdin); gets(ngo);
	cout<<"nhap phuong: "; fflush(stdin); gets(phuong);
	cout<<"nhap quan: "; fflush(stdin); gets(quan);
	cout<<"nhap thanh pho: "; fflush(stdin); gets(thanhPho);
	
}
void DiaChi::Xuat(){
	cout<<"dia chi :    "<<soNha<<", "<<ngo<<", "<<phuong<<", "<<quan<<", "<<thanhPho<<".\n";
}
void Hang::Nhap(){
	cout<<"nha ten hang : "; fflush(stdin); gets(tenHang);
	cout<<"nhap don gia : "; cin>>donGia;
	cout<<"nhap so luong : "; cin>>soLuong;
}
void Hang::Xuat(){
	cout<<left<<setw(30)<<tenHang<<setw(20)<<donGia<<setw(20)<<soLuong;
}
void Phieu::Nhap(){
	x.Nhap();
	cout<<"nhap ho ten nguoi mua : "; fflush(stdin); gets(hoTen);
	cout<<"nhap so dien thoai nguoi mua : "; fflush(stdin); gets(sdt);
	t.Nhap();
	cout<<"nhap so hang mua : "; cin>>n;
	a=new Hang[n];
	for(int i=0;i<n;i++){
		cout<<"nhap hang thu "<<i+1<<endl;
		a[i].Nhap();
	}
}
void Phieu::Xuat(){
	cout<<"\n\n\t\t*****PHIEU DI CHO*****\n";
	x.Xuat();
	cout<<"ho va ten nguoi di cho : "<<hoTen<<endl;
	cout<<"so dien thoai : "<<sdt<<endl;
	t.Xuat();
	cout<<left<<setw(30)<<"ten hang"<<setw(20)<<"don gia"<<setw(20)<<"so luong "<<setw(25)<<"thanh tien"<<endl;
	int s;
	for(int i=0;i<n;i++){
		a[i].Xuat();
		cout<<left<<setw(25)<<a[i].donGia*a[i].soLuong<<endl;
		s=s+a[i].donGia*a[i].soLuong;
	}
	cout<<right<<setw(70)<<"cong thanh tien : "<<s<<" dong "<<endl;
	cout<<"luu y : day la phieu bai tap";
}
int main(){
	Phieu m1;
	m1.Nhap();
	m1.Xuat();
}
