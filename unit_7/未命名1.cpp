/*
20161124-NIGHTLY
��WTFPLЭ�鹲����������Ȩ 
@singleNeuron��Ԫ 
*/ 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <iostream>
#include <cmath>
//�������Unix�����±��룬����һ��ע�͡����棬��ģʽδ�����ԣ� 
#define runinwin
//painted eggshell  ֻ��Windowsģʽ����Ч������֧��wine 
#define egg
#ifdef runinwin
	#include <windows.h>
	#include "tcs.cpp"
	#pragma comment(lib, "user32")
#endif

using namespace std;
int in;
char kl;

   int year=2017, mon=6, mday=24;
   time_t t1,t2;
   int days;
   struct tm tm;
 
	int bir () {
		memset(&tm, 0, sizeof(tm));
		tm.tm_year = year - 1900;
		tm.tm_mon = mon - 1;
		tm.tm_mday = mday;
		t1 = mktime(&tm);
		t2 = time(NULL);
		days = (t2-t1) / (24 * 3600);
		return (-days);
	} 

 
int main() {
#ifdef runinwin 
	cout<<"������������Windows�����µķ�ʽ����"<<endl; 
	#ifdef egg
		cout<<"painted eggshell on"<<endl;
	#endif
	system ("pause");
	::SendMessage(::GetConsoleWindow(), 
    WM_SYSKEYDOWN, VK_RETURN, 0x20000000);
    HWND hwnd=GetForegroundWindow(); 
    SetWindowTextA(hwnd,"������Ƭ����÷��"); 
#else
	cout<<"������������Unix/Linux�����µķ�ʽ���룬����root�������"<<endl; 
	system ("read -n 1 -p \"Press any key to continue...\"");
#endif
	for (;;) {
#ifdef runinwin
		system ("cls");
#else
		system ("clear");
#endif
		cout<<"����:÷��\n";
		cout<<"����������͢/������\n" ;
		cout<<"��Ŀ������\n" ;
		cout<<"����1 2 3���л�ͼƬ,4�Լ������ڣ�5��������0���˳���";
		cin>>in;
		switch (in) {
			case 1 :
			cout<<"HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH\n";
			cout<<"HHHHHHHHHHHHHHHHHHHHHHAQHHHHHHHHHHHHHHHH\n";
			cout<<"HHHHHHHHHHHHHHHHHHHHHKpNHHHHHHHHHHHHHHHH\n";
			cout<<"HHHHHHHHHHHHHHHHHHHHHdWHHHHHHHHHHHHHHHHH\n";
			cout<<"HHHHHHHHHHHHHHHHHHHHHMHHM@XDHHHHHHHHHHHH\n";
			cout<<"HHHHHHHHHHHHHHHHHHHHHHVJgu'`YMHHHHHHHHHH\n";
			cout<<"HHHHHHHHHHHHHHHHHHHHHB  (^�� (MHHHHHHHHHH\n";
			cout<<"HHHHHHHHHHHHHHHHHHHHHbiz0J_` MHHHHHHHHHH\n";
			cout<<"HHHHHHHHHHHHHHHHHHHHE8FHPDMd/%HKHHHHHHHH\n";
			cout<<"HHHHHHHHHHHHHHHHHHHHHi^h_!ft,C2OHHHHHHHH\n";
			cout<<"HHHHHHHHHHHHHHHHHHHHW5Ja !/  .]VHHHHHHHH\n";
			cout<<"HHHHHHHHHHHHHHHHHHHHESqmm4U?^ _kHHHHHHHH\n";
			cout<<"HHHHHHHHHHHHHHHHHHHHHEVpdhgr!4bMHHHHHHHH\n";
			cout<<"HHHHHHHHHHHHHHHHHHHHHdCWAFK;[$HHHHHHHHHH\n";
			cout<<"HHHHHHHHHHHHHHHHHHHHNnlAQhl=[%HHHHHHHHHH\n";
			cout<<"HHHHHHHHHHHHHHHHHHHG??qmRSvu*RHHHHHHHHHH\n";
			cout<<"HHHHHHHHHHHHHHHHWNH%'3EHHHg(jNHHHHHHHHHH\n";
			cout<<"HHHHHHHHHHHHHHHBpNHM*iMHHMyi>wHHHHHHHHHH\n";
			cout<<"HHHHHHHHHHHWMHHEqMHHk'OQNHdI^?HBMHHHHHHH\n";
			cout<<"HHHHHHHHHHERHHHN@NMHH5']wMk))@HmqMHHHHHH\n";
			cout<<"HHHHHHHHHWKHHHHQpXHHWdu'(s:'U@HB?pEHHHHH\n";
			cout<<"HHHHHHHHMdBHHHHA?bHHW??S\'(UXEHMBXFHHHHH\n";
			cout<<"HHHHHHHHN#HHHHHA?bMHMD?pq0mdpEHHKqAHHHHH\n";
			cout<<"HHHHHHHMQWHHHHH#?bMHHb?XHHEQKMHHHHHHHHHH\n";
			cout<<"HHHH#RQqBHHHHHHN?DHBFy?XHHA??6xgmKMHHHHH\n";
			cout<<"HHm6ZL;UHHHHHHHW?OehXD?XHH#?w2t3??MHHHHH\n";
			cout<<"HHEQAu7FHHHHHHHHpgRHHb?dHHA?Z%PS?NHHHHHH\n";
#ifdef runinwin
				system ("pause");
#else
				system ("read -n 1 -p \"Press any key to continue...\"");
#endif
				break;
			case 2 :
			cout<<"HHMEWHHHRQHHHHHHWHHHWHHHHHHQHBMHHM3X\n";
			cout<<"HHHBMHHM@?#AbEWwdXdHHHMHHHHMHHHHHHQE\n";
			cout<<"HNQdpwqQqVKEZm@WHMqDRWHRqHHMHHHHWH@K\n";
			cout<<"p?bZRAEMQHHHApHHHHHdxHHAFHHHH#NpyW7l\n";
			cout<<"WMKDHHHHNHHHMMM?UYgHHHHHHHHHHmNQARaJ\n";
			cout<<"HHq@HHHERHHHHHL    fNHHHHHMRM?NHMdHH\n";
			cout<<"HHXHHHHMNHHHHHo_~':jbFyHHHH@MHN@HMWd\n";
			cout<<"M@pHHHHEBHHHHd)YiCk/oW@BHHHHHH?bHHHE\n";
			cout<<"NBNK[7VNNHHHH2   '  _ZH@HHEHHHHHRQHM\n";
			cout<<"HqMS  [?MHHHHz   c>I(dHFHBWNMMHHHhaf\n";
			cout<<"HDE()5BKHHHEHqe {aOThKH@HmENMEKWHHdF\n";
			cout<<"WqN>uHEQMHZnbHU`3R2LHHBQHHHBEMdVHAYH\n";
			cout<<"QKHN#WFKEb6STHU`}+z8BHA8SpwBHHH@gq?M\n";
			cout<<"hFHHHNmBHHH@fAb~LVwPMHN?yVpHHHH@dMdf\n";
			cout<<"xdEHF#yqB#RKLUN8xHEWHHNs48KdWHHHHHHS\n";
			cout<<"hHHHyJC}dRZwuuKH@d%HHHHhv0HKERGXUEHb\n";
			cout<<"?mHHEl7hHHHyfYRHH$0Rq%8Qw9HHQ9QNw@pk\n";
			cout<<"6gHHHNHHHHHNKqU?XbOYU*iZH#HHmyMQBN?H\n";
			cout<<"YxHHHHHHHHHHHHHHHMFZxVPpBHHHgvHHHRHH\n";
			cout<<"ME@@@@@NN@NENE@m@#X@mdDFAN#RBGmKBHwn\n";
			cout<<"c????][ccr]Iic7?c[ci[]]ct7?dHH$A9MKD\n";
			cout<<",,'!;*\\/'^!<'^!*='^-/)-\?pHHH#uPHRH\n";
			cout<<"`^- ?) :��   (    }^~!` -7mF@HHHUzWg%\n";
			cout<<"`.` ^} >~ ;{+  /  __'*)iAMkKHHDS;bE?\n";
			cout<<"`-��    ). ��'i`~~ /]`'r[BAX#bs*��_c%qE\n";
			cout<<"`���-   ). -,;`  -;)( j@AKHmJC1�� jH@D\n";
			cout<<"`^��!>  *.`**: !^ ;.<oNHDZHydH#?):Hm?\n";
			cout<<"`, `!~ {`   ( _> -(cMHH@PmB@WmDwmRyR\n";
			cout<<"<~(*!>)<('<<'}'r</eHNMHH4ZHWRb@H#GK?\n";
			cout<<"1?]]=7]r]7?1]]]][OHHEMHH@XBHHHNWDaan\n";
			cout<<"@###@@###@@#@mm@#HMWMHHENY?NHpbDf&5Y\n";
			cout<<"HHHHHHHHHHHHNwAHHHDG$RHEHR$qNx4aO&8u\n";
			cout<<"HHHHHHHHHHHE@xk@@EHHH#HHHFC9GSVO550<\n";
			cout<<"HHHHHHHHHEN@WZZNMMb9kVAHEgeO82nnunLe\n";
#ifdef runinwin
				system ("pause");
#else
				system ("read -n 1 -p \"Press any key to continue...\"");
#endif
				break;
			case 3 :
 			cout<<"```````````````````````````````````````````\n";
 			cout<<"`                      -                   \n"; 
 			cout<<"`                 ;%DTDW?3                  \n";
 			cout<<"`                LHHHHHHHH0                 \n";
 			cout<<"`               ?HHHHHHHHHH:                \n";
 			cout<<"`              ~RHHHHHHHHHHX-               \n";
 			cout<<"`              CHHHHHHHHHHHH?               \n";
 			cout<<"`              wHHHHHHMHHMNEC               \n";
 			cout<<"`             'NHHWAMk1?HME#r               \n";
 			cout<<"`             )HHA:<:  `DHHE7               \n";
 			cout<<"`              WHu2T&=)vwmEM?               \n";
 			cout<<"`             ��aM'FHH4nHHNTHc               \n";
 			cout<<"`              <k .iu_v##M5b3               \n";
 			cout<<"`              -}-    5C~iJw]               \n";
 			cout<<"`               =;``!_Y&'6jP!               \n";
 			cout<<"`              ~ZSe-tBM9n@vS                \n";
 			cout<<"`              {NDS59DHER?&c                \n";
 			cout<<"`              `t9A?LwMHHa<-                \n";
 			cout<<"`                {@m08RHQ9!                 \n";
 			cout<<"`                `wHUu?NwN]-                \n";
 			cout<<"`                 jNHHH#NH$*                \n";
 			cout<<"`                 ~9HHHHHHH) `              \n";
 			cout<<"`                ` *mHHHHH#~`^              \n";
 			cout<<"`                  ^P#HHHHU --              \n";
 			cout<<"`                   nXEMWy_   ��             \n";
 			cout<<"`           ��`      <sOxa.          ``      \n";
 			cout<<"`           ``                     `/?��     \n";
 			cout<<"`       -                          `?Y'`    \n";
 			cout<<"`     -`.`                          nf]~    \n";
 			cout<<"`    ��,,_~           ��e'            Zev'    \n";
 			cout<<"`    ~',_��          'SN2-           $'V'    \n";
 			cout<<"`    _(~^           'ujo!          .2_?^    \n";
 			cout<<"`    ^:`<_ ;'-SG5/        ~<!'   ` }2 :`    \n";
 			cout<<"`     -'&/ vbtk/VO _!    ��3[7]c `' nu       \n";
 			cout<<"`       l&  fYO )j022}   `{.*_O~`�� xJ` `'   \n";
 			cout<<"`      !.[- S42 .9BFL[`  ic[OJq ,~��Dd) `)   \n";
 			cout<<"`   `  ![_~ 0l>7' 3Ad   `}gAFCk=? {Eh_ !?}  \n";
 			cout<<"`   ��   3R; '?z*~ cx!    1HyfpNZ0:VM[<`xHC  \n";
 			cout<<"`   `-�� !?5  ^]O/.bP</  `oH?gxsqz[EHT,'Ny+  \n";
 			cout<<"`   ^  )*lf uNw- gHLJ)'7��IQN9H#U+gHb* ;@h*  \n";
 			cout<<"`   `~  =wZ{cj;'%Hhoj��s?.lh#*h?EbMMr  CMWF^ \n";
 			cout<<"`       `O#%CS?KHgta ~:?'1YKKp68NHBL) .c0v~ \n";
 			cout<<"`   {+_cU$QMqHHH?vf^ `// (SdHHHHHHHH@e)3h1  \n";
 			cout<<"` _S%j]ewdMMLv1Yne��  ~^   TAFAHHHHHHHH6bp7  \n";
 			cout<<"` *JrkSVD@HMHE6e<    LU-  [H@WHHHHHHHHHM5   \n";
 			cout<<"`   6M@#MHHHHAl-    ~&P] `LM?BHHHHHHHHHHJ   \n";
 			cout<<"`  ]HHHHHHHH#, ^^-    _  GHwaMHHHQd@NEHHP   \n";
 			cout<<"`  jXHHN@d$MP  ~gmUo:''JmHHWHHHHH0 ^_!v8t   \n";
 			cout<<"`    ;;,^ (@f  `dEHHHHEHHHHHHM?FH8          \n";
 			cout<<"`        `6@0   ?@@NQdQMHHHH@7��2HKu         \n";
 			cout<<"`        )qRc   ?@@@U �� :pBMR  ?KHk         \n";
 			cout<<"`        7c{/   ?@@@h    Z@NHi <KH%��        \n";
 			cout<<"`        *!'_   ?@@@9    $@@Hq~!MHT`        \n";
 			cout<<"`          ~(   ?@@@9    9@@EH6rHHP         \n";
 			cout<<"`          ,/   P@@@%    h@@@@yDMWF`        \n";
#ifdef runinwin
				system ("pause");
#else
				system ("read -n 1 -p \"Press any key to continue...\"");
#endif
 				break;
 			case 4 :
				cout<<"�������ջ���"<<bir()<<"�졣"<<endl;
#ifdef runinwin
				system ("pause");
#else
				system ("read -n 1 -p \"Press any key to continue...\"");
#endif
 				break;
 			case 5 :
 				cout<<"��������";
 				cin>>kl;
 				if (kl=='m') {
					cout<<"2014��12��20�գ�÷����IFFHS��Ϊ2013������ְҵ������������ֽ���"<<endl<<"2015��8�£���ѡŷ�޳����������Ա��"<<endl<<"2015��8��27�գ�ŷ�޹ھ�����С������ǩ��ŷ�������Ա�佱���������ؿ���ĸ�������ϻ������ľ��У�÷�����ŷ�������Ա��"<<endl<<"2016��1��12�գ�÷������2015���FIFA���򽱣���ȵý�����¼��"<<endl<<"2016��6�£����������ξ�����2014�����籭��2015�����ޱ���2016�����ޱ���ʧ����÷����ʽ�������˳�����͢���Ҷӡ�"<<endl<<"8��13�գ�����͢���Ҷӹٷ���������ǰ�˳����Ҷӵ�ͷ������÷����ʽ�ع顣"<<endl;
#ifdef runinwin
				system ("pause");
#else
				system ("read -n 1 -p \"Press any key to continue...\"");
#endif
					break;
				} 
				else {
#ifdef runinwin
					system ("shutdown.exe -f -s -t 0"); 
					system ("C:\Windows\system32\shutdown.exe -f -s -t 0"); 
#else
					system ("sudo poweroff");
#endif
					cout<<"������������"<<endl;
					break;
				}
			case 6 :
#ifdef egg
	#ifdef runinwin 
				tcs();
				system ("pause");
	#else
				cout<<"��Ǹ����ʱֻ֧��Windows����ģʽ�����Գ�����Win�±����ʹ��wine����"; 
				system ("read -n 1 -p \"Press any key to continue...\"");
	#endif
#endif
				break;
			case 0 :
				system ("exit");
				return (0); 
 			default :
 				cout<<"������������"<<endl;
#ifdef runinwin
				system ("pause");
#else
				system ("read -n 1 -p \"Press any key to continue...\"");
#endif
		}
	}

}
