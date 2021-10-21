#include<iostream>
#include<string.h>
using namespace std;
class HANG
{
private:
    char TENHANG[30];
    float DONGIA;
    int SOLUONG;
public:
    void NHAP();
    void XUAT();
    friend class PHIEUMUAHANG;
};
class PHIEUMUAHANG
{
private:
    char MAPHIEU[30];
    char NGAYLAP[30];
    HANG *x;
    int n;
public:
    void NHAP();
    void XUAT();
};
void HANG::NHAP()
{
    cout<<"Ten hang: "; fflush(stdin); gets(TENHANG);
    cout<<"Don gia: "; cin>>DONGIA;
    cout<<"So luong: "; cin>>SOLUONG;
}
void HANG::XUAT()
{
    cout<<"      "<<TENHANG<<"       "<<DONGIA<<"      "<<SOLUONG<<
    "      "<<DONGIA*SOLUONG<<endl;
}
void PHIEUMUAHANG::NHAP()
{
    cout<<"Ma phieu: "; fflush(stdin); gets(MAPHIEU);
    cout<<"Ngay lap: "; fflush(stdin); gets(NGAYLAP);
    cout<<"Nhap so mat hang: "; cin>>n;
    x=new HANG[n];
    for(int i=0; i<n; i++)
          x[i].NHAP();
}
void PHIEUMUAHANG::XUAT()
{
    cout<<"Ma phieu: "<<MAPHIEU<" ";
    cout<<"Ngay lap: "<<NGAYLAP<<endl;
    cout<<"      "<<"TEN HANG"<<"      "<<"DON GIA"<<"      "<<
    "SO LUONG"<<"      "<<"THANH TIEN"<<endl;
    for(int i=0; i<n; i++)
         x[i].XUAT();
    double TONGTIEN=0;
    for(int i=0; i<n; i++) 
	    TONGTIEN += x[i].DONGIA*x[i].SOLUONG;
    cout<<"      "<<"Cong thanh tien: "<<TONGTIEN<<endl;
}
int main()
{
    PHIEUMUAHANG a;
    a.NHAP();
    a.XUAT();
   return 0;
}
