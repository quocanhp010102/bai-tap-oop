#include<iostream>
#include<string.h>
using namespace std;
class School{
	private:
	      char ten[30];
	      char date[30];
    public:
    	friend class Faculty;
	
};
class Faculty{
	private: 
	     char name[30];
	     char date[30];
	     School x;
	public:
		friend class Student;
		void Nhap();
		void Xuat();
};
class Student{
	private:
	    Faculty y;
	    char cLass[15];
	    float score;
	public:
	
		void Nhap();
		void Xuat();
};
void Faculty::Nhap(){
	cout<<"nhap ten khoa : "; fflush(stdin); gets(name);
	cout<<"nhap date khoa : "; fflush(stdin); gets(date);
	cout<<"nhap ten truong : "; fflush(stdin); gets(x.ten);
	cout<<"nhap date truong : "; fflush(stdin); gets(x.date);
	
}
void Faculty::Xuat(){
	cout<<"ten khoa : "; cout<<name;
	cout<<"\ndate khoa : "; cout<<date;
	cout<<"\nten truong : "; cout<<x.ten;
	cout<<"\ndate truong : "; cout<<x.date;
	
}
void Student::Nhap(){
	y.Nhap();
	cout<<"nhap ten lop cua hoc sinh : "; fflush(stdin); gets(cLass);
	cout<<"nhap diem cua hoc sinh : "; cin>>score;
}
void Student::Xuat(){
	y.Xuat();
	cout<<"\nten lop cua hoc sinh : "; cout<<cLass;
	cout<<"\ndiem cua hoc sinh : "; cout<<score;
}
int main(){
	int n;
	cin>>n;
	Student *a;
	a=new Student [n];
	for(int i=0;i<n;i++){
		cout<<"nhap thong tin sinh vien thu "<<i+1<<" \n";
		a[i].Nhap();
	}
		for(int i=0;i<n;i++){
		cout<<"\n******thong tin sinh vien thu "<<i+1<<" ******\n";
		a[i].Xuat();
	}
	
}
