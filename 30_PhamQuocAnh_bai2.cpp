#include<iostream>
#include<string.h>
using namespace std;
class sv{
	public:
	string ma;
	string ht;
	int db;
	int mb;
	int yb;
	char gt[5];
	float dtb;
	string DaoDuc;
	
	void Nhap(){
		cout<<"nhap ma: ";
		getline(cin,ma);
		cout<<"nhap ho ten: ";
		
		getline(cin,ht);
		cout<<"nhap ngay sinh : ";
		cin>>db;
		cout<<"nhap thang sinh: ";
		cin>>mb;
		cout<<"NHap nam sinh: ";
		cin>>yb;
		cout<<"nhap gioi tinh: ";
		cin.ignore();
		gets(gt);
		cout<<"nhap diem trung binh : ";
		cin>>dtb;
		cout<<" dao duc  : ";
		cin.ignore();
		getline(cin,DaoDuc);
		
		
	}
	void xuat(){
		cout<<"ma : "<<ma;
		cout<<"\nho ten :"<<ht;
		cout<<"\nngay thang nam sinh : "<<db<<"/"<<mb<<"/"<<yb;
		cout<<"\ngioi tinh : "<<gt;
		cout<<"\ndiem trung binh : "<<dtb;
		cout<<"\ndao duc : "<<DaoDuc<<"\n";
	}
};
int main(){
	sv SVDiemCao,SVDiemThap;
	cout<<"nhap thong tin cua sv diem cao: ";
	SVDiemCao.Nhap();
	cout<<"nhap thong tin sinh vien diem thap : ";
	SVDiemThap.Nhap();
	if(SVDiemCao.dtb<SVDiemThap.dtb){
		sv tt=SVDiemCao;
		SVDiemCao=SVDiemThap;
		SVDiemThap=tt;
	}
	cout<<"\n******thong tin cua sinh vien diem cao****** \n";
	SVDiemCao.xuat();
	cout<<"\n*******thong tin cua sinh vien diem thap******* \n";
	SVDiemThap.xuat();
	
}
