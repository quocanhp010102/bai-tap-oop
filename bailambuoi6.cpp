#include<iostream>
using namespace std;
class ConNguoi{
	private:
		char hoTen[30];
		char ngaySinh[20];
		char queQuan[30];
	public:
		void Nhap();
		void Xuat();
};
void ConNguoi::Nhap(){
	cout<<"nhap ho ten : "; fflush(stdin); gets(hoTen);
	cout<<"nhap ngay sinh"; fflush(stdin); gets(ngaySinh);
	cout<<"nhap que quan "; fflush(stdin); gets(queQuan);
}
void ConNguoi::Xuat(){
	cout<<"ho ten: "<<hoTen<<endl;
	cout<<"ngay sinh: "<<ngaySinh<<endl;
	cout<<"que quan : "<<queQuan<<endl;
}
class SinhVien: public ConNguoi{
	private:
		char tenTruong[30];
		char chuyenNghanh[30];
		char maSV[15];
	public:
		void Nhapp();
		void Xuatt();
		
};
void SinhVien::Nhapp(){
	SinhVien::Nhap();
	cout<<"nhap ten truong: "; fflush(stdin); gets(tenTruong);
	cout<<"nhap chuyen nghanh : "; fflush(stdin); gets(chuyenNghanh);
	cout<<"nhap ma sinh vien : "; fflush(stdin); gets(maSV);
}
void SinhVien::Xuatt(){
	SinhVien::Xuat();
	cout<<"ten truong: "<<tenTruong<<endl;
	cout<<" chuyen nghanh : "<<chuyenNghanh<<endl;
	cout<<"ma sinh vien : "<<maSV<<endl;
}
int main(){
	SinhVien a;
	
	a.Nhapp();
	
	a.Xuatt();
}
