#include<iostream>
using namespace std;
class Date{
  private:
   int day;
   int month;
   int year;
  public:
  	friend class DoanhNghiep;
  	void Nhap();
  	void Xuat();
};
class DiaChi{
	private:
		char dienThoai[12];
		char phuong[30];
		char quan[30];
		char thanhPho[30];
	public:
			friend class DoanhNghiep;
};
class DoanhNghiep{
	private:
		int maDn;
		char tenDn[60];
		Date NgayTl;
		DiaChi diaChi;
		char giamDoc;
		long doanhThu;
	public:
		void Nhap();
		void Xuat();
};

void Date::Nhap(){
	cout<<"nhap ngay tra luong: "; cin>>day;
	cout<<"nhap thang tra luong: "; cin>>month;
	cout<<"nhap nam tra luong: "; cin>>year;
	
}
void Date::Xuat(){
		cout<<"\nngay tra luong: "<<day<<"/"<<month<<"/"<<year;
}
void DoanhNghiep::Nhap(){
	cout<<"nhap ma doanh nghiep : ";cin>>maDn;
	cout<<"nhap ten doanh nghiep : "; fflush(stdin);     gets(tenDn);
	NgayTl.Nhap();
	cout<<"nhap so dien thoai : ";    fflush(stdin);     gets(diaChi.dienThoai);
	cout<<"nhap phuong : ";           fflush(stdin);      gets(diaChi.phuong);
	cout<<"nhap quan : ";             fflush(stdin);       gets(diaChi.quan);
	cout<<"nhap thanh pho thoai : ";  fflush(stdin);     gets(diaChi.thanhPho);
	
}
void DoanhNghiep::Xuat(){
		cout<<"ma doanh nghiep : "<<maDn;
	cout<<"\nten doanh nghiep : "<<tenDn;
	NgayTl.Xuat();
	cout<<"\nso dien thoai : "<<diaChi.dienThoai;
	cout<<"\nphuong : "<<diaChi.phuong;
	cout<<"\nquan : "<<diaChi.quan;
	cout<<"\nthanh pho thoai : "<<diaChi.thanhPho<<endl;
}
int main(){
	DoanhNghiep a;
	a.Nhap();
	a.Xuat();
}
