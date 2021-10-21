#include<iostream>
#include<string.h>
using namespace std;
class person{
	public:
	string name;
	int age;
	string add;
	float toan;
	float li;
	float hoa;
	void nhap();
	void xuat();
	float tbc();
};
void person::nhap(){
	cout<<"\nnhap ten : ";

	getline(cin,name);
	cout<<"tuoi: ";
	cin>>age;
	cout<<"nhap dia chi: ";
	cin.ignore();
	getline(cin,add);
	cout<<"nhap diem toan: ";
	cin>>toan;
		cout<<"nhap diem li: ";
		cin>>li;
			cout<<"nhap diem hoa: ";
			cin>>hoa;
				cin.ignore();
}
void person::xuat(){
	cout<<" \nten : "<<name;
	cout<<"\ntuoi : "<<age;
	cout<<"\ndia chi : "<<add;
	cout<<"\ndiem toan: "<<toan;
	cout<<"\ndiem li : "<<li;
	cout<<"\ndiem hoa : "<<hoa;
	cout<<"\ndiem trung binh : "<<tbc();
	cout<<endl;
}
float person::tbc(){
	return (float)(toan+li+hoa)/3;
}
int main(){
	person *sv =new person[2];
	sv[0].nhap();
	sv[0].xuat();
	sv[1].nhap();
	sv[1].xuat();
	if(sv[0].tbc()>sv[1].tbc())
	cout<<"diem cao nhat la: "<<sv[0].name;
	else
	cout<<"diem cao nhat la: "<<sv[1].name;
	
	}
