#include <iostream> // Thu vien
using namespace std;
// ham co kieu
float tong1(int a, int b){
	return a/b;
}
float tong2(int a, int b){
	return float(a)/b;
}

float tong3(float a, float b){
	return a/b;
}
int tong4(float a, float b){
	return a/b;
}
int main()
{
	// su dung ham da dinh nghia
	cout<<tong1(1,2)<<endl;
	cout<<tong2(1,2)<<endl;
	cout<<tong3(1,2)<<endl;
	cout<<tong4(1,2)<<endl;
	return 0;	
}
