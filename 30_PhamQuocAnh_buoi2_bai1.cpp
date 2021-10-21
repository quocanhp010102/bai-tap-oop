#include<iostream>
#include<math.h>
using namespace std;
class qEquation{
	private:
		float a;
		float b;
		float c;

	public:
		void Input();
		void Output();
		void Solution();
		qEquation();
		qEquation(float A,float B,float C);
		~qEquation();
		
};
qEquation::qEquation(){
	a=0;
	b=0;
	c=0;
}
qEquation::~qEquation(){
		a=0;
	b=0;
	c=0;
	cout<<" \ngiai xong ";
}
qEquation::qEquation(float A,float B,float C){
	a=A;
	b=B;
	c=C;
}
void qEquation::Input(){
	cout<<"\nphuong trinh bac 2 co dang ax^2+bx+c=0";
	cout<<"\nnhap a: ";
	cin>>a;
	cout<<"nhap b: ";
	cin>>b;
	cout<<"nhap c: ";
	cin>>c;
}
void qEquation::Output(){
	cout<<"\nphuong trinh : "<<a<<"x^2 + "<<b<<"x + "<<c<<" = 0";
}
void qEquation::Solution(){
	if(a==0)
	cout<<"\nphuong trinh la phuong trinh bac nhat co nghiem : x = "<<c/b;
	else 
	{
		float tt=b*b-4*a*c;
		if(tt<0)
		cout<<"\nphuong trinh vo nghiem";
		else if(tt==0)
		{
		
			 cout<<"\nphuong trinh co nghiem duy nhat : x = "<<(-b)/(2*a);
		}
		
		 else
		  {
		  	cout<<"\nphuong trinh co hai nghiem phan biet : x1 = "<<(-b+sqrt(tt))/2*a <<" , x2 = "<<(-b-sqrt(tt))/2*a;
		  	
		  }
	}
}

int main(){
//	qEquation P;
cout<<"Phuong trinh P : ";
	qEquation P(1,0,0);
   
	P.Output();
	
	P.Solution();
	cout<<"\nphuong trinh Q: ";
	qEquation Q;
	Q.Input();
	Q.Output();
	Q.Solution();
	
	
}
