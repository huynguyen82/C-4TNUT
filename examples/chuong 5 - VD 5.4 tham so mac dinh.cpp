#include <iostream> // Thu vien
using namespace std;
/*
	- Cac tham khong nhan gia tri mac dinh: a,b va c
	- Cac tham so nhan gia tri mac dinh: d va e
*/
float tong(int a,int b,int c,float d=3.14,int e=9){
	cout<<"a nhan dc la:"<<a<<endl;
	cout<<"b nhan dc la:"<<b<<endl;
	cout<<"c nhan dc la:"<<c<<endl;
	cout<<"d nhan dc la:"<<d<<endl;
	cout<<"e nhan dc la:"<<e<<endl;
	return a+b+c+d+e;
}
int main()
{
	// su dung ham da dinh nghia
	cout<<tong1(1,2,3,4,5)<<endl;
	cout<<tong1(1,2,3,4)<<endl;
	cout<<tong1(1,2,3)<<endl;
	cout<<tong4(1,2)<<endl; //?
	cout<<tong4(1)<<endl; //?
	return 0;	
}
