#include<iostream>
#include<string.h>
using namespace std;
class Hang{
	private:
		string maHang;
		string tenHang;
		int ngayNhap;
		string noiSanXuat;
		float gia;
		int soLuong;
		
	public:
		Hang();
		Hang(string maHangNew,string tenHangNew,int ngayNhapNew,string noiSanXuatNew,float giaNew,int soLuongNew);
		~Hang();
		void nhap();
		void xuat();
		
};
    Hang::Hang()
	{
       maHang="";
       tenHang="";
       ngayNhap=0;
       noiSanXuat="";
       gia=0;
       soLuong=0;

    }
    Hang::Hang(string maHangNew,string tenHangNew,int ngayNhapNew,string noiSanXuatNew,float giaNew,int soLuongNew){
       maHang=maHangNew;
	   tenHang=tenHangNew;
	   ngayNhap=ngayNhapNew;
	   noiSanXuat=noiSanXuatNew;
	   gia=giaNew;
	   soLuong=soLuongNew;	
	}
	void Hang::nhap(){
		cout<<"nhap ma hang : ";
		getline(cin,maHang);
		cout<<"nhap ten hang:  ";
		getline(cin,tenHang);
		cout<<"nhap ngay nhap hang : ";
		cin>>ngayNhap;
		cout<<"nhap noi san xuat : ";
		cin.ignore();
		getline(cin,noiSanXuat);
		cout<<"nhap gia hang : ";
		cin>>gia;
		cout<<"nhap so luong hang : ";
		cin>>soLuong;
	}
	void Hang::xuat(){
		cout<<"ma hang : "<<maHang;
		cout<<"\nten hang : "<<tenHang;
		cout<<"\nngay nhap hang : "<<ngayNhap;
		cout<<"\noi san xuat : "<<noiSanXuat;
		cout<<"\ngia hang : "<<gia;
		cout<<"\nso luong hang : "<<soLuong<<endl;
	}
	Hang::~Hang(){
	  maHang="";
       tenHang="";
       ngayNhap=0;
       noiSanXuat="";
       gia=0;
       soLuong=0;	
	}
int main(){
	Hang P;
	Hang Q("123qax","may giat",16,"binh luc",15034,5);
	cout<<"nhap thong tin hang P : \n";
	P.nhap();
cout<<"\n**thong tin hang P la : \n";
	P.xuat();
	cout<<"\n**thong tin hang Q la : \n";
	Q.xuat();
}
