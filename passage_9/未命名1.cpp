#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
//如果在类Unix环境下编译，将下一行注释。警告，本模式未经测试！ 
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
    SetWindowTextA(hwnd,"数学问题"); 
#endif 
	for (;;) {
		cout<<"========================="<<endl; 
	 	cout<<"1.输出100个*"<<endl;
		cout<<"2.输出1-10之间的整数"<<endl; 
		cout<<"3.输出1-10之间的奇数"<<endl; 
		cout<<"4.输出1-10之间的偶数"<<endl; 
		cout<<"5.1-100的和"<<endl; 
		cout<<"6.100之间的奇数和"<<endl; 
		cout<<"7.100之间的偶数和"<<endl; 
		cout<<"8.*号换行输出"<<endl; 
		cout<<"9.清屏"<<endl; 
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
