#include<iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;
class Vehicle{
	protected:
		char nhanHieu[20];
		int namSX;
		char hang[30];
	public:
		void Nhap();
		void Xuat();
};
void Vehicle::Nhap(){
 	cout<<"nhap nhan hieu : "; fflush(stdin) ; gets(nhanHieu);
 	cout<<"nhap nam san xuat : "; cin>>namSX;
 	cout<<"nhap ten hang : "; fflush(stdin); gets(hang);
 }
void Vehicle::Xuat(){
 	cout<<left<<setw(25)<<nhanHieu<<setw(20)<<namSX<<setw(30)<<hang;
 }
 class Oto: public Vehicle{
 	protected:
 		int soChoNgoi;
 		float dungTich;
 	public:
 		friend  void ThemOto(Oto *&a,int &n,int vt,Oto x);
 		void Nhap();
 		void Xuat();
 };
void Oto::Nhap(){
 	Vehicle::Nhap();
 	cout<<"nhap so cho ngoi : "; cin>>soChoNgoi;
 	cout<<"nhap dung tich cua xe : "; cin>>dungTich;
 }
void Oto::Xuat(){
 	Vehicle::Xuat();
 	cout<<left<<setw(20)<<soChoNgoi<<setw(20)<<dungTich<<endl;
 	
 }
 class Moto:public Vehicle{
 	protected:
 		int phanKhoi;
 	public:
 		void Nhap();
 		void Xuat();	
 };
void Moto::Nhap(){
 	Vehicle::Nhap();
 	cout<<"nhap so phan khoi : "; cin>>phanKhoi;
 }
void Moto::Xuat(){
 	Vehicle::Xuat();
 	cout<<left<<setw(20)<<phanKhoi<<endl;
 }
 void ThemOto(Oto *&a,int &n,int vt,Oto x){
 	a=(Oto * )realloc(a,(n+1)*sizeof(Oto));
 	for(int i=n;i>vt-1;i--){
 		a[i]=a[i-1];
	 }
	 a[vt-1]=x;
	 n++;
 }
int main(){
	Oto *a;
	int n;
	cin>>n;
	a=new Oto[n];
	for(int i=0;i<n;i++){
		a[i].Nhap();
	}
	for(int i=0;i<n;i++)
	a[i].Xuat();
	Oto x;
	x.Nhap();
	ThemOto(a,n,2,x);
	for(int i=0;i<n;i++)
	a[i].Xuat();
}
