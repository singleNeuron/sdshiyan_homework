#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
//�������Unix�����±��룬����һ��ע�͡����棬��ģʽδ�����ԣ� 
#define runinwin
#ifdef runinwin
	#include <windows.h>
	#pragma comment(lib, "user32")
#endif
using namespace std;
int c,s;
int main () {
#ifdef runinwin
	system ("color F0");
    HWND hwnd=GetForegroundWindow(); 
    SetWindowTextA(hwnd,"��ѧ����"); 
#endif 
	for (;;) {
		cout<<"========================="<<endl; 
	 	cout<<"1.���100��*"<<endl;
		cout<<"2.���1-10֮�������"<<endl; 
		cout<<"3.���1-10֮�������"<<endl; 
		cout<<"4.���1-10֮���ż��"<<endl; 
		cout<<"5.1-100�ĺ�"<<endl; 
		cout<<"6.100֮���������"<<endl; 
		cout<<"7.100֮���ż����"<<endl; 
		cout<<"8.*�Ż������"<<endl; 
		cout<<"9.����"<<endl; 
		cout<<"========================="<<endl; 
		cin>>c;
		switch (c) {
			case 1 :
				for (int i=1;i<=100;i++) cout<<"*";
				cout<<endl<<endl;
				break; 
			case 2 :
				for (int i=1;i<=10;i++) cout<<i<<" ";
				cout<<endl<<endl;
				break;
			case 3 :
				for (int i=1;i<=10;i+=2) cout<<i<<" ";
				cout<<endl<<endl;
				break;
			case 4 :
				for (int i=2;i<=10;i+=2) cout<<i<<" ";
				cout<<endl<<endl;
				break;
			case 5 :
				s=0;
				for (int i=1;i<=100;i++) s+=i;
				cout<<s<<endl<<endl;
				break;
			case 6 :
				s=0;
				for (int i=1;i<=100;i+=2) s+=i;
				cout<<s<<endl<<endl;
				break;
			case 7 :
				s=0;
				for (int i=2;i<=100;i+=2) s+=i;
				cout<<s<<endl<<endl;
				break;
			case 8 :
				for (int i=1;i<=100;i++) cout<<"*"<<endl;
				cout<<endl;
				break;
			case 9 :
#ifdef runinwin
				system ("cls");
#else
				system ("clear");
#endif
				break;
		}
	}
}
