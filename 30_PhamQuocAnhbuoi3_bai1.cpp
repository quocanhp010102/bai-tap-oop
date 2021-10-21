#include<iostream>
#include<string.h>
using namespace std;

class Employee{
	private:
		int id;
	    string name;
	    int age;
	    static float salary;
	 
	public:
    	Employee();
    	void Nhap();
	    void Xuat();
	    friend void salaryy();
        ~Employee();
	
};
Employee::Employee(){
	id=0;
	name="";
	age=0;

}
void Employee::Nhap(){
	cout<<"nhap id : ";		cin>>id;
	cout<<"nhap ten : ";   fflush(stdin);  getline(cin,name);
	cout<<"nhap tuoi : ";   cin>>age;
	
}
void Employee::Xuat(){
	cout<<"id : ";		cout<<id;
	cout<<"\nten : ";   cout<<name;
	cout<<"\ntuoi : ";   cout<<age;
	cout<<"\nluong : ";  cout<<Employee::salary<<endl;
}
Employee::~Employee(){
	id=0;
	name="";
	age=0;

}
 float Employee::salary=100000;

int main(){
	Employee A,B;
	cout<<"nhap thong tin sinh vien A : \n";
	A.Nhap();
	cout<<"nhap thong tin sinh vien B : \n";
	B.Nhap();

	cout<<"*** Thong tin sinh vien A : ***\n";
	A.Xuat();
	cout<<"*** Thong tin sinh vien B : ***\n";
	B.Xuat();
}
