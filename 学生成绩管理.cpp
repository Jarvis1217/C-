#include<iostream>
#include<string.h>
using namespace std;
class student
{
	protected:
		string name;
		int id;
		
		int Cgrade;            //������� 
		int Xgrade;            //�źŴ��� 
		int Sgrade;            //���ݽṹ 
		
		double average;       //ÿ��ѧ��ƽ���� 
		double sumaver;      //ÿ�ſγ�ƽ���� 
	public:
		//¼��ѧ����Ϣ 
	    void init(string Name,int ID,int x,int y,int z)
		{
			name=Name;
			id=ID;
			Cgrade=x;
			Xgrade=y;
			Sgrade=z;
		}
		//����ÿ��ѧ��ƽ���� 
		double aver(int x,int y,int z)
		{
			return average=((x+y+z)/3);
		}
		//���ѧ����Ϣ 
		void print()
		{
			cout<<"->";
			cout<<"������"<<name<<' ';
			cout<<"ѧ�ţ�"<<id<<' ';
			cout<<endl;
			cout<<"������ƣ�"<<Cgrade<<' ';
			cout<<"�źŴ���"<<Xgrade<<' ';
			cout<<"���ݽṹ��"<<Sgrade<<' '<<endl;
			cout<<"ƽ���ɼ���"<<average<<endl;
			cout<<endl;
		}
		//������������� 
		void failprint(int count1,int count2,int count3)
		{
			cout<<"----------------------"<<endl;
		    cout<<"������Ʋ�����������"<<count1<<endl;
			cout<<"�źŴ�������������"<<count2<<endl;
			cout<<"���ݽṹ������������"<<count3<<endl;
		}
} ;

int main()
{
	int n,i,j;
	double Csum=0,Xsum=0,Ssum=0;
	int count1=0,count2=0,count3=0;
	string Name;
	int ID,x,y,z;
	cout<<"������ѧ��������";
	cin>>n;
	cout<<endl;
	student stu[n];
	for(i=0;i<n;i++)
	{
		cout<<"������ѧ��"<<i+1<<"������";
		cin>>Name;
		cout<<"������ѧ��"<<i+1<<"ѧ�ţ�";
		cin>>ID;
		cout<<"������ѧ��"<<i+1<<"�ɼ���";
		cin>>x>>y>>z;
		Csum=Csum+x;        //��������ܷ� 
		Xsum=Xsum+y;        //�źŴ����ܷ� 
		Ssum=Ssum+z;        //���ݽṹ�ܷ� 
		if(x<60) count1++;                  //ͳ�Ƴ�����Ʋ��������� 
		if(y<60) count2++;                  //ͳ���źŴ����������� 
		if(z<60) count3++;                  //ͳ�����ݽṹ���������� 
		stu[i].init(Name,ID,x,y,z);        //¼��ѧ����Ϣ 
		stu[i].aver(x,y,z);               //����ѧ��ƽ���� 
		cout<<endl;
	}
	cout<<"----------------------"<<endl;
	for(j=0;j<n;j++)
	{
		stu[j].print();
	}
	stu[0].failprint(count1,count2,count3);
	cout<<"----------------------"<<endl;
	cout<<"�������ƽ����Ϊ:"<<Csum/n<<endl;
	cout<<"�źŴ���ƽ����Ϊ:"<<Xsum/n<<endl;
	cout<<"���ݽṹƽ����Ϊ:"<<Ssum/n<<endl;
}
