#include<iostream>
#include<stdlib.h>
#include<iomanip>
using namespace std;
class InfPhieu;
class Date{
	private:
		int date,month,year;
	public:
		void Nhap();
		friend class InfPhieu;
		void Xuat();
};
class InfPhieu{
	private:
		char maPhieu[15];
		Date ngayLap;
	public:
		friend class Phieu;
		void Nhap();
		void Xuat();
		
};
class Ncc{
	private:
		char maNcc[10];
		char tenNcc[30];
	public:
		friend class Phieu;
		void Nhap();
		void Xuat();
};
class TtLienHe{
	private:
		char diaChi[40];
		int sdt;
	public:
		friend class Phieu;
		
		void Nhap();
		void Xuat();
};
class Hang{
	private:
		char maSp[10];
		char tenSp[30];
		int soLuong;
		float donGia;
	public:
		friend class Phieu;
	    float thanhtien(){
	    	return soLuong*donGia;
		};
		void Nhap();
		void Xuat();
};
class Phieu{
	private:
		InfPhieu a;
		TtLienHe b;
		Ncc c;
		int n;
		Hang *d;
	public:
		friend void chen(Phieu&t,Hang x,int vt);
		friend void swap(Phieu t);
		void Nhap();
		void Xuat();
};
void Date::Nhap(){
	cout<<"nhap ngay lap "; cin>>date;
	cout<<"nhap thang lap "; cin>>month;
	cout<<"nhap nam lap "; cin>>year;
}
void Date::Xuat(){
	cout<<left<<setw(30)<< "ngay lap : "<<date<<"/"<<month<<"/"<<year<<endl;
}
void InfPhieu::Nhap(){
	cout<<"Nhap ma phieu "; fflush(stdin); gets(maPhieu);
	ngayLap.Nhap();
	
}
void InfPhieu::Xuat(){
	cout<<left<<setw(30)<<"ma phieu :        "<<maPhieu; ngayLap.Xuat();
	cout<<endl;
	
}
void Ncc::Nhap(){
	cout<<"nhap ma nha cung cap : "; fflush(stdin); gets(maNcc);
	cout<<"nhap ten nha cung cap : "; fflush(stdin); gets(tenNcc);
	
}
void Ncc::Xuat(){
	cout<<left<<setw(60)<<"ma nha cung cap :       "<<maNcc<<tenNcc<<endl;
	
}
void TtLienHe::Nhap(){
	cout<<"nhap dia chi : "; fflush(stdin); gets(diaChi);
	cout<<" nhap so dien thoai : "; cin>>sdt;
}
void TtLienHe::Xuat(){
	cout<<left<<setw(60) <<"Dia chi :    "<<diaChi<<sdt<<endl;
}
void Hang::Nhap(){
	cout<<"nhap ma sp : "; fflush(stdin); gets(maSp);
	cout<<"nhap ten sp: "; fflush(stdin); gets(tenSp);
	cout<<"nhap so luong sp : "; cin>>soLuong;
	cout<<"nhap don gia sp : "; cin>>donGia;
}
void Hang::Xuat(){
	
	cout<<left<<setw(10)<<maSp<<setw(30)<<tenSp<<setw(20)<<soLuong<<setw(20)<<donGia<<setw(20)<<soLuong*donGia<<endl;
}
void Phieu::Nhap(){
	a.Nhap();
	b.Nhap();
	c.Nhap();
	cout<<"nhap so luong sp : "; cin>>n;
	d=new Hang[n];
	for(int i=0;i<n;i++){
		cout<<"nhap thong tin hang thu "<<i+1<<endl;
		d[i].Nhap();
	}
}
void Phieu::Xuat(){
	cout<<"\nDai hoc victory \n";
	cout<<"\t\t\tPHIEU NHAP VAN PHONG PHAM\n";
	a.Xuat();
	b.Xuat();
	c.Xuat();
	cout<<left<<setw(10)<<"ma sp "<<setw(30)<<"ten sp"<<setw(20)<<"so luong"<<setw(20)<<"don gia"<<setw(15)<<"thanh tien"<<endl;
	float s;
	for(int i=0;i<n;i++){
		s=s+d[i].soLuong*d[i].donGia;
		d[i].Xuat();
	}

	cout<<right<<setw(50)<<"tong"<<setw(30)<<s;
}
void swap(Phieu t){
	for(int i=0;i<t.n;i++){
		for(int j=i+1;j<t.n;j++){
			if(t.d[i].thanhtien()<t.d[j].thanhtien()){
				Hang tam=t.d[i];
			    t.d[i]=t.d[j];
				t.d[j]=tam;
			}
		}
	}
}
void chen(Phieu &t ,Hang x,int vt){
	t.d=(Hang*)realloc(t.d,(t.n+1)*sizeof(Hang));
	for(int i=t.n;i>vt-1;i--){
		t.d[i]=t.d[i-1];
	}
	t.d[vt-1]=x;
	t.n++;
}
int main(){
	Phieu t;
	t.Nhap();
	swap(t);
	t.Xuat();
	Hang x;
	cout<<"nhap thong tin hang";
	x.Nhap();
	chen(t,x,1);
	t.Xuat();
}
