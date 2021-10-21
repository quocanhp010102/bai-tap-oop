#include<iostream>
#include<iomanip>
using namespace std;
class Date{
  private:
    int ngay;
	int thang;
	int nam;
  public:
  	friend class NhanSu;
  	void Nhap();
  	void Xuat();
};
class NhanSu{
  private:
	static int ma;
	char hoTen[30];
    Date nS;
  public: 
//    NhanSu(){
//        ma+=1;
//	}
    void Nhap();
    void Xuat();
    
	
};
int NhanSu::ma=1;
void NhanSu::Nhap(){

	cout<<"nhap ho ten nhan vien : "; fflush(stdin); gets(this->hoTen);
	nS.Nhap();
	
}
void NhanSu::Xuat(){
	

	cout<<left<<setw(14)<<NhanSu::ma<<setw(22)<<this->hoTen<<setw(0);
	cout<<left;
	nS.Xuat();
	NhanSu::ma++;
}

void Date::Nhap(){
	cout<<"nhap ngay san xuat : ";cin>>this->ngay;
	cout<<"nhap thang san xuat : ";cin>>this->thang;
	cout<<"nhap nam san xuat : ";cin>>this->nam;
	
}
void Date::Xuat(){
	cout<<this->ngay<<"/"<<this->thang<<"/"<<this->nam<<endl;

	
}

int main(){
	int n;
	cout<<"nhap so nhan su : ";
	cin>>n;
	NhanSu *a;
	a=new NhanSu[n];
	for(int i=0;i<n;i++)
	a[i].Nhap();
		cout<<"thong tin nhan vien la : \n";
	cout<<left<<setw(15)<<"ma nhan su"<<setw(19)<<"ho ten"<<setw(30)<<"ngay sinh"<<endl;
	for(int i=0;i<n;i++)
	a[i].Xuat();
}
