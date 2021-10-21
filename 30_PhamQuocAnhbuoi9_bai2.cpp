#include<iostream>
using namespace std;
class ARRAY{
	protected:
		int n;
		int *a;
	public: 
	    ARRAY();
	    ~ARRAY();
	    friend istream &operator >> ( istream &is, ARRAY &t);
	    friend ostream &operator << (ostream &os,ARRAY t);
	    
};
ARRAY::ARRAY(){
    n=0;
    
}
ARRAY::~ARRAY(){
	n=0;
	delete [] a;
}
 istream &operator >> ( istream &is, ARRAY &t){
	cin>>t.n;
	t.a=new int [t.n];
	for(int i=0;i<t.n;i++){
		cin>>t.a[i];
	}
	
}
ostream &operator << (ostream &os,ARRAY t){
	for(int i=0;i<t.n;i++){
		cout<<t.a[i]<<" ";
	}
}
ARRAY ARRAY::operator!!(){
	ARRAY e;
	for(int i=0;i<n;i++){
		if (this->a[i]>5)
			e.a[i]=-this->a[i];
	}
	
 	return e;
}
int main(){
	ARRAY r;
	cin>>r;
	cout<<r;
}
