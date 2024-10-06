#include <iostream> // Thu vien
using namespace std;
// ham co kieu
int tong(int a,int b,int c,int d){
	cout<<"a nhan dc la:"<<a<<endl;
	cout<<"b nhan dc la:"<<b<<endl;
	cout<<"c nhan dc la:"<<c<<endl;
	cout<<"d nhan dc la:"<<d<<endl;
	return a+b+c+d;
}
int main()
{
	// su dung ham da dinh nghia
	cout<<tong1(1,2,3,4)<<endl;
	cout<<tong2(1,1,2,2)<<endl;
	cout<<tong3(1,2)<<endl; //?
	cout<<tong4(1,2,3)<<endl; //?
	return 0;	
}
