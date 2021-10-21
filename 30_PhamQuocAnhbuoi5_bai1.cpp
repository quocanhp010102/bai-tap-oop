#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class Date{
	private:
		int ngay;
		int thang;
		int nam;
	public:
		int getday(){
			return ngay;
		}
		int getmonth(){
			return thang;
		}
		int getyear(){
			return nam;
		}
		void setday(int ngay){
			this->ngay=ngay;
		}
			void setmonth(int thang){
			this->thang=thang;
		}
			void setyear(int nam){
			this->nam=nam;
		}
		void Nhap();
		void Xuat();
};
void Date::Nhap(){
	int t;
	cout<<"nhap ngay sinh : "; cin>>t; setday(t);
	cout<<"nhap thang sinh : "; cin>>t; setmonth(t);
	cout<<"nhap nam sinh : "; cin>>t; setyear(t);
	
}
void Date::Xuat(){
	cout<<"ngay sinh : "<<getday()<<"/"<<getmonth()<<"/"<<getyear()<<endl;
}

class Student{
	private:
	string maSV;
		string hoTen;
		Date ngaySinh;
		string gT;
		float dTB;
		string xepLoai;
	public:
//		Student();
       	void setmaSV(string maSV){
		    this->maSV=maSV;
		}
			void sethoTen(string hoTen){
		    this->hoTen=hoTen;
		}
			void setdTB(float dTB){
		    this->dTB=dTB;
		}
			void setgT(string gT){
		    this->gT=gT;
		}
			void setxepLoai(string xepLoai){
		    this->xepLoai=xepLoai;
		}
		string getmaSV(){
			return maSV;
		}
		string gethoTen(){
			return hoTen;
		}
		string getgT(){
			return gT;
		}
		
		float getdTB(){
			return dTB;
		}
		string getxepLoai(){
			return xepLoai;
		}
	
		void Nhap();
		void Xuat();
//		~Student();
};
//Student::Student(){
//	strcpy(maSV,"");
//	strcpy(hoTen,"");
//	strcpy(xepLoai,"");
//	dTB=0;
//}
//Student::~Student(){
//	strcpy(maSV,"");
//	strcpy(hoTen,"");
//	strcpy(xepLoai,"");
//	dTB=0;
//}
void Student::Nhap(){
	string q;
	float x;
	cout<<"nhap ma sinh vien : "; fflush(stdin); getline(cin,q); setmaSV(q);
	
	
	cout<<"nhap ho ten sinh vien : "; fflush(stdin); getline(cin,q); sethoTen(q);
	
	ngaySinh.Nhap();
	cout<<"nhap gioi tinh sinh vien : "; fflush(stdin); getline(cin,q); setgT(q);
	
	cout<<"nhap diem trung binh sinh vien : "; cin>>x; setdTB(x);
	cout<<"nhap xep loai sinh vien : "; fflush(stdin); getline(cin,q); setxepLoai(q);
	
}
void Student::Xuat(){
     cout<<"ma sinh vien : "<<getmaSV(); cout<<endl;
     cout<<"ho ten sinh vien : "<<gethoTen()<<endl;
     ngaySinh.Xuat();
     cout<<"gioi tinh : "<<getgT()<<endl;
     cout<<"diem trung binh : "<<getdTB()<<endl;
     cout<<"xep loai : "<<getxepLoai()<<endl;
}
void Tot(Student *s ,int n){
	for(int i=0;i<n;i++){
		if(s[i].getxepLoai()=="Tot")
		 s[i].Xuat();
	}
}
int main(){
	int n;
	cout<<"nhap so sinh vien : ";
	cin>>n;
	Student *s;
	s=new Student [n];
	for(int i=0;i<n;i++){
		cout<<"nhap thoong tin sinh vien thu "<<i+1<<endl;
		s[i].Nhap();
	}
		for(int i=0;i<n;i++){
		cout<<"\n************* thoong tin sinh vien thu "<<i+1<<"**********"<<endl;
		s[i].Xuat();
	}
	cout<<"***nhung sinh vien co hanh kiem tot: \n";
	Tot(s,n);
	
}
