#include<iostream>
#include<iomanip>
double Girth(double width, double height); 
double Area(double width, double height);
using namespace std;
int main (void)
{
	cout<<"��������γ����:";
	double a,b;
	cin>>a>>b;
	 Girth(a,b);
	 Area(a,b);
	 return 0;
}
double Girth(double width, double height)//��������ܳ� 
{
	double z;
	z=2*(width+height);
	cout<<"�ܳ�="<<fixed<<setprecision(2)<<z<<endl;
}
double Area(double width, double height)//����������
{
	double s;
	s=width*height;
	cout<<"���="<<fixed<<setprecision(2)<<s;
} 
