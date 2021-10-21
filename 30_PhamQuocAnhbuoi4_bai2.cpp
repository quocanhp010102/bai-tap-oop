#include<iostream>
#include<iomanip>
using namespace std;
class Hang{
	private:
		char tenHang[20];
		float donGia;
		int soLuong;
	public:
		friend class Phieu;
		void Nhap();
		void Xuat();
};
class Ncc{
	private:
		char maNcc[10];
		char tenNcc[25];
	public:
		friend class Phieu;
		void Nhap();
		void Xuat();
		
};
class Date{
  private:
    int ngay;
	int thang;
	int nam;
  public:
  	friend class Phieu;
  	void Nhap();
  	void Xuat();
};
class Phieu{
	private:
		char maPhieu[15];
		Date ngayLap;
		Ncc ncc;
		char Dc[40];
		int n;
		Hang *a;
	public:
		void Nhap();
		void Xuat();
};
void Hang::Nhap(){
	cout<<"nhap ten hang "; fflush(stdin); gets(tenHang);
	cout<<"nhap don gia "; cin>>donGia;
	cout<<"nhap so luong "; cin>>soLuong;
}
 void Hang::Xuat(){
	cout<<left<<setw(30)<<tenHang<<setw(30)<<donGia<<setw(30)<<soLuong;
}
void Ncc::Nhap(){
	cout<<"nhap ma Ncc : "; fflush(stdin);  gets(maNcc);
	cout<<"nhap ten Ncc : "; fflush(stdin);  gets(tenNcc);
}
void Ncc::Xuat(){
	cout<<left<<" ma Ncc : "<< setw(50)<<maNcc<<"ten Ncc : "<<tenNcc<<endl;
}
void Date::Nhap(){
	cout<<"nhap ngay lap : "; cin>>ngay;
	cout<<"nhap thang lap : "; cin>>thang;
	cout<<"nhap nam nhap : "; cin>>nam;
}
void Date::Xuat(){
	cout<<"ngay lap : "<<ngay<<"/"<<thang<<"/"<<nam<<endl;;
}
void Phieu::Nhap(){
	cout<<"Nhap ma phieu : "; fflush(stdin);  gets(maPhieu);
	ngayLap.Nhap();
	ncc.Nhap();
	cout<<"nhap dia chi : "; fflush(stdin);  gets(Dc);
	cout<<"nhap so hang : ";
	cin>>n;
	a=new Hang[n];
	for(int i=0;i<n;i++){
	    cout<<"Nhap thong tin hang thu "<<i+1<<" \n";
	    a[i].Nhap();
	    
	}



	
}
void Phieu::Xuat(){
	cout<<"\n\t\t*****PHIEU NHAP HANG***** \n";
	cout<<left<<setw(30)<<maPhieu; ngayLap.Xuat();
	ncc.Xuat();
	cout<<"dia chi : "<<Dc<<endl;
	float s;
	cout<<left<<setw(30)<<"ten hang "<<setw(30)<<"don gia "<<setw(30)<<"so luong "<<setw(30)<<"thanh tien ";
	for(int i=0;i<n;i++){
		a[i].Xuat();
		cout<<left<<setw(30)<<a[i].donGia*a[i].soLuong;
		s=s+a[i].donGia*a[i].soLuong;
	}
	cout<<right<<setw(90)<<"thanh tien : "<<s;	
}
int main(){
	Phieu p;
	p.Nhap();
	p.Xuat();
	
}
