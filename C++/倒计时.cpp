#include<iostream>
#include<windows.h>
using namespace std;

//���ع��
void HideCursor()
{
 CONSOLE_CURSOR_INFO cursor_info = {1, 0}; 
 SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
}
//��ʾ���
void DispCursor()
{
 CONSOLE_CURSOR_INFO cursor_info = {1, 1}; 
 SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
} 

int main(void)
{
	int sec;
	cout<<"���뿪ʼʱ��(��):";
	cin>>sec;
	cout<<"����س�����ʼ��ʱ";
	while(getchar()!='\n')
	{
	}
	
	system("cls");
	//��ʼ����ʱ
	 HideCursor();
	 while(sec!=0)
	 {
	 	cout<<"����ʱ�������ʣ"<<sec<<"s";
	 	sec=sec-1;
	 	Sleep(1000);
	 	system("cls");
	 }
	 cout<<"Time Over";
	 DispCursor();
	 return 0;
}
