#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<string.h>
using namespace std;
class CTy;
class Nguoi{
	protected:
		char hoTen[30];
		int tuoi;
		char gT[10];
	public:
		void Nhap();
		void Xuat();
};
void Nguoi::Nhap(){
	cout<<"nhap ho ten : "; fflush(stdin); gets(hoTen);
	cout<<"nhap tuoi: "; cin>>tuoi;
	cout<<"nhap gioi tinh : "; fflush(stdin); gets(gT);
}
void Nguoi::Xuat(){
	cout<<left<<setw(30)<<hoTen<<setw(20)<<tuoi<<setw(15)<<gT;
}
class NhanVien:public Nguoi{
	protected:
		char maNhanVien[15];
		char chucVu[15];
		float luong;
	public:
		friend void Sua(CTy a);
		friend void SapXep(CTy a);
		void Nhap();
		void Xuat();
};
void NhanVien::Nhap(){
	Nguoi::Nhap();
	cout<<"nhap ma nhan vien : "; fflush(stdin); gets(maNhanVien);
	cout<<"nhap chuc vu : "; fflush(stdin); gets(chucVu);
	cout<<"nhap luong nhan vien : "; cin>>luong;
}
void NhanVien::Xuat(){
	Nguoi::Xuat();
	cout<<left<<setw(20)<<maNhanVien<<setw(20)<<chucVu<<setw(20)<<luong<<endl;
}
class CTy{
	private:
		char maCTy[15];
		char diaChi[30];
		NhanVien *x;
		int n;
	public:
		friend void Sua(CTy a);
		friend void SapXep(CTy a);
		void Nhap();
		void Xuat();
};
void CTy::Nhap(){
	cout<<"nhap ma cong ty : "; fflush(stdin); gets(maCTy);
	cout<<"nhap dia chi cong ty : "; fflush(stdin); gets(diaChi);
	cout<<"nhap so nhan vien cua cong ty : "; cin>>n;
	x=new NhanVien[n];
	for(int i=0;i<n;i++){
		cout<<"nhap thong tin nhan vien thu "<<i+1<<" : \n";
		x[i].Nhap();
	}
}
void CTy::Xuat(){
	cout<<"\n***************THONG TIN CONG TI********\n";
	cout<<"ma cong ty : "<<maCTy<<endl;
	cout<<"dia chi : "<<diaChi<<endl;
	cout<<left<<setw(30)<<"ho ten "<<setw(20)<<"tuoi"<<setw(15)<<"gioi tinh"<<setw(20)<<"ma nhan vien "<<setw(20)<<"chuc vu"<<"luong"<<endl;
	for(int i=0;i<n;i++){
		x[i].Xuat();
	}
}
void Sua(CTy a){
	for(int i=0;i<a.n;i++){
		if(a.x[i].tuoi>40||strcmp(a.x[i].chucVu,"ke toan")==0){
			a.x[i].luong=1000;
		}
	}
}
void SapXep(CTy a){
	for(int i=0;i<a.n-1;i++){
	    for(int j=i+1;j<a.n;j++){
	    	if(a.x[i].luong>a.x[j].luong){
	    		NhanVien t=a.x[i];
	    		a.x[i]=a.x[j];
	    		a.x[j]=t;
			}
		}
	}
}
int main(){
	CTy a;
	a.Nhap();
	a.Xuat();
	Sua(a);
	a.Xuat();
	SapXep(a);
	a.Xuat();
}
