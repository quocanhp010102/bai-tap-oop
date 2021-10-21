#include<iostream>
#include<iomanip>
using namespace std;
class Vehicle{
	private:
		char nhanHieu[15];
		char namSanXuat[20];
		char hang[20];
	public:
	  void Nhap();
	  void Xuat();
};
void Vehicle::Nhap(){
	cout<<"nhap nhan hieu : "; fflush(stdin); gets(nhanHieu);
	cout<<"nhap nam san xuat : "; fflush(stdin); gets(namSanXuat);
	cout<<"nhap hang : "; fflush(stdin); gets(hang);
}
void Vehicle::Xuat(){
	cout<<left<<setw(30)<<nhanHieu<<setw(30)<<namSanXuat<<setw(30)<<hang;
}

class Oto:public Vehicle{
	private:
		int soChoNgoi;
		float dungTich;
	public:
		void Nhap();
		void Xuat();
};
void Oto::Nhap(){
	Vehicle::Nhap();
	cout<<"nhap so cho ngoi : "; cin>>soChoNgoi;
	cout<<"nhap dung tich : "; cin>>dungTich;
}
void Oto::Xuat(){
	Vehicle::Xuat();
	cout<<left<<setw(15)<<soChoNgoi<<dungTich<<endl;
}
class Moto:public Vehicle{
	private:
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
int main(){
	Oto a;
	Moto b;
	cout<<"nhap thong tin o to: \n";
	a.Nhap();
	cout<<"nhap thong tin xe may:  \n";
	b.Nhap();
	cout<<"\n\t\t\t*******o to: \n\n";
	cout<<left<<setw(30)<<"nhan hieu "<<setw(30)<<"nam san xuat "<<setw(30)<<"hang"<<setw(15)<<"so cho ngoi"<<"dung tich"<<endl;
    a.Xuat();
	cout<<"\n\t\t\t*******mo to: \n\n";
    cout<<left<<setw(30)<<"nhan hieu "<<setw(30)<<"nam san xuat "<<setw(30)<<"hang"<<setw(20)<<"so phan khoi"<<endl;
    b.Xuat();
}
