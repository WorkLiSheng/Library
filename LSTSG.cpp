#include "LSTSG.h"
#include<iomanip>
#include<string.h>
#include <iostream>
#include <fstream> 
using namespace std;
using namespace ls201908010215; 
 int LSTSG::n=0;
 int LSTSG::n1=0; 
 void arry::cunshu()//���麯�� 
 {
 	ifstream infile(".\\message\\һ����.txt",ios::in);
 	for(int i=0;;i++)
 	{
 		infile>>a[i].number>>a[i].name>>a[i].author>>a[i].fenlei>>a[i].language>>a[i].zhuangtai; 
 		if(a[i].number==-1) break;
 		LSTSG::n++;
	 }
 }
 LSTSG::LSTSG() //���캯�� 
  {  number=-1;   
     strcpy(name,"-");
     strcpy(author,"-");strcpy(fenlei,"-");
     strcpy(language,"-");strcpy(zhuangtai,"-");
  }

LSTSG::LSTSG(int a,char b[],char c[],char d[],char e[],char f[]) //���캯��
{ 
number=a;
strcpy(name,b);
strcpy(author,c);
strcpy(fenlei,d);
strcpy(language,e);
strcpy(zhuangtai,f);
n++;
}

void LSTSG::setLSTSG() //�������뺯��
{ cout<<"�������鼮����"<<endl;
cout<<"���"<<setw(20)<<"����"<<setw(15)<<"����"<<setw(15)<<"����"<<setw(10)<<"����"<<setw(5)<<"״̬"<<endl;
cin>>number>>name>>author>>fenlei>>language>>zhuangtai;cout<<endl;
n++;}

void LSTSG::outcom() //�������
{ 
cout<<number<<setw(21)<<name<<setw(16)<<author<<setw(14)<<fenlei<<setw(13)<<language<<setw(11)<<zhuangtai<<endl;
}

void arry::add() //��Ӻ���
{ 
if(LSTSG::n!=0)
{
for(int i=LSTSG::n-1;i<len;i++)
{
a[i+1].LSTSG::setLSTSG();
ofstream outfile(".\\message\\һ����.txt",ios::app);
outfile<<a[i+1].number<<" "<<a[i+1].name<<" "<<a[i+1].author<<" "<<a[i+1].fenlei<<" "<<a[i+1].language<<" "<<a[i+1].zhuangtai<<endl; 
cout<<"��Ҫ���������ȷ����y��/ȡ����n��:";
char c;
cin>>c;
if(c=='y'||c=='Y') continue;
else if(c=='n'||c=='N') { cout<<"�˳����!"<<endl; return; }
else { cout<<"ѡ�ߴ���Ĭ���˳����!"<<endl;
return; } 
}
}
else 
{
for(int i=0;i<len;i++)
{
a[i].LSTSG::setLSTSG();
cout<<"��Ҫ���������ȷ����y��/ȡ����n��:";
char c;
cin>>c;
if(c=='y'||c=='Y') continue;
else if(c=='n'||c=='N') { cout<<"�˳����!"<<endl; return; }
else { cout<<"ѡ�ߴ���Ĭ���˳����!"<<endl;
return; } 
} 
} 
} 

void arry::del() //ɾ������
{ 
cout<<"��ѡ��ɾ����ʽ��·����"<<endl;
cout<<"1.�����ɾ��"<<endl;
cout<<"2.������ɾ��"<<endl;
cout<<"������ɾ����ʽ:";
int i,j,k;
char c;
cin>>k;

if (k==1)
{ int n;
cout<<" ��������:";
cin>>n;
{ for( i=0;i<LSTSG::n;i++)
if(a[i].number==n)
{ 
j=i;
cout<<"��Ҫɾ������Ϣ:"<<endl;
cout<<"���"<<setw(20)<<"����"<<setw(15)<<"����"<<setw(15)<<"����"<<setw(15)
<<"����"<<setw(10)<<"״̬"<<endl;
a[j].LSTSG::outcom();
cout<<"ȷ��Ҫɾ����ȷ����y��/ȡ����n��";
cin>>c;

if(c=='y'||c=='Y')
{
for( i=j;i<LSTSG::n-1;i++)
a[i]=a[i+1];               //�����׶���ɾ����ʽ 
cout<<"��ɾ������:"<<endl;
LSTSG::n--;
ofstream outfile(".\\message\\һ����.txt",ios::out);
for(int i=0;i<LSTSG::n ;i++)
{
	outfile<<a[i].number<<" "<<a[i].name<<" "<<a[i].author<<" "<<a[i].fenlei<<" "<<a[i].language<<" "<<a[i].zhuangtai<<endl;
}
return;
}

else if(c=='n'||c=='N')
{
cout<<"ȡ��ɾ�� !"<<endl;
return; } 

else { cout<<"ѡ�����Ĭ���˳�!"<<endl;
return; }
}
}
cout<<"��Ҫɾ�������ݲ�����!"<<endl;return;

}

if (k==2)
{ 
char m[40];
cout<<" ����������:";
cin>>m;
{
for( i=0;i<LSTSG::n;i++)
if(!strcmp(a[i].name,m))
{
j=i;
cout<<"��Ҫɾ������Ϣ:"<<endl;
cout<<"���"<<setw(20)<<"����"<<setw(15)<<"����"<<setw(15)<<"����"<<setw(15)
<<"����"<<setw(10)<<"״̬"<<endl;
a[j].LSTSG::outcom(); 
cout<<"ȷ��Ҫɾ����ȷ����y��/ȡ����n��";
cin>>c;
if(c=='y'||c=='Y')
{
for( i=j;i<LSTSG::n-1;i++)
a[i]=a[i+1];
cout<<"��ɾ������Ϣ"<<endl;
LSTSG::n--;
ofstream outfile(".\\message\\һ����.txt",ios::out);
for(int i=0;i<LSTSG::n ;i++)
{
	outfile<<a[i].number<<" "<<a[i].name<<" "<<a[i].author<<" "<<a[i].fenlei<<" "<<a[i].language<<" "<<a[i].zhuangtai<<endl;
}
return;
}

else if(c=='n'||c=='N')
{
cout<<"ȡ��ɾ�� !"<<endl;
return;
}
else {
     cout<<"ѡ�����Ĭ���˳�!"<<endl;return;
    }
}
}

cout<<"��Ҫɾ�������ݲ�����!"<<endl;return; 
}
}

void arry::find() //���Һ���
{ bool pd=false; 
cout<<"��ѡ����ҷ�ʽ"<<endl;
cout<<"1.����Ų���"<<"    "<<"2.���������Ҽ����߲���"<<endl;

cout<<"�����뷽ʽ:";
int i,j ,k;
cin>>k;

if(k==1)
{ int n;
cout<<"��������:";
cin>>n;
for(i=0;i<LSTSG::n;i++)
if(a[i].number==n)
{ 
j=i;
cout<<"��Ҫ���ҵ�����Ϣ:"<<endl;
cout<<"���"<<setw(20)<<"����"<<setw(15)<<"����"<<setw(15)<<"����"<<setw(15)<<"����"<<setw(10)<<"״̬"<<endl;
a[j].LSTSG::outcom();pd=true;
return;
}
if(pd==false) { cout<<"����δ�ش���!"<<endl; }
}

else if(k==2)
{ 
char n[40];char m[20];
cout<<"����������������:";
cin>>n>>m;
for(i=0;i<LSTSG::n;i++)
if(!strcmp(a[i].name,n)&&!strcmp(a[i].author,m))
{ 
j=i;
cout<<"��Ҫ���ҵ�����Ϣ:"<<endl;
cout<<"���"<<setw(20)<<"����"<<setw(15)<<"����"<<setw(15)<<"����"<<setw(15)
<<"����"<<setw(10)<<"״̬"<<endl;
a[j].LSTSG::outcom();
return;
}
if(pd==false) { cout<<"����δ�ش���!"<<endl;return; }
}

}

void arry::modify() //�޸ĺ���
{
cout<<"��ѡ���޸ĵķ�ʽ"<<endl;
cout<<"1.������޸ķ�ʽ"<<endl;
cout<<"2.�������޸ķ�ʽ"<<endl;
cout<<"3.�������޸ķ�ʽ"<<endl;
cout<<"4.�������޸ķ�ʽ"<<endl;
cout<<"5.�������޸ķ�ʽ"<<endl;
cout<<"6.��״̬�޸ķ�ʽ"<<endl;
cout<<"�����뷽ʽ��";
int k,i,j;
int A;//��� 
char b[50];//���� 
char c[20];//���� 
char d[15];//���� 
char e[10];//���� 
char f[5];//״̬ 
cin>>k;
if(k==1)
{
cout<<"��������:";
cin>>A; }

else if(k==2)
{ cout<<"����������:";
cin>>b; }

else if(k==3)
{ cout<<"������������:";
cin>>c; }

else if(k==4)
{ 
cout<<"�����������:";
cin>>d; }

else if(k==5)
{ cout<<"���������ԣ����ġ�Ӣ�Ļ���������:";
cin>>e; }

else if(k==6)
{ cout<<"������״̬�������n��/δ�����y��:";
cin>>f; }

else { cout<<"�������Ĭ���˳��޸�!"<<endl;
return; }

for(i=0;i<LSTSG::n;i++)
if((a[i].number==A)||!strcmp(a[i].name,b)||!strcmp(a[i].author,c)||!strcmp(a[i].fenlei,d)||!strcmp(a[i].language,e)||!strcmp(a[i].zhuangtai,f))
{
j=i;
cout<<"�㽫Ҫ�޸ĵ���Ϣ:"<<endl;
cout<<"���"<<setw(20)<<"����"<<setw(15)<<"����"<<setw(15)<<"����"<<setw(15)
<<"����"<<setw(10)<<"״̬"<<endl;
a[j].LSTSG::outcom();
cout<<"ȷ���Ƿ����Ҫ�޸ģ�ȷ��(y)/ȡ��(n):"<<endl;
char c;
cin>>c;
if(c=='y')
{ a[j].LSTSG::setLSTSG();
ofstream outfile(".\\message\\һ����.txt",ios::out);
for(int i=0;i<LSTSG::n ;i++)
{
	outfile<<a[i].number<<" "<<a[i].name<<" "<<a[i].author<<" "<<a[i].fenlei<<" "<<a[i].language<<" "<<a[i].zhuangtai<<endl;
}

 return;
}
else if(c=='n') {cout<<"ȡ���޸�"<<endl;return;}
}  //������е�����ͱ����ڿ���û���ҵ�ƥ����飬 
   cout<<"��Ҫ�޸ĵ����ݲ�����!"<<endl;
}

void arry::sort() // ������
{ 
cout<<"��ѡ������ʽ"<<endl;
cout<<"1.���������"<<endl;
cout<<"2.����������"<<endl;
cout<<"3.����������"<<endl;
cout<<"���뷽ʽ:";
int k;
int i,j;
LSTSG s;
cin>>k; 
if(LSTSG::n>1)
{
if(k==1){ 
cout<<"���������У����Ե�.......";
for( i=0;i<LSTSG::n-1;i++)
{
for (j=0;j<LSTSG::n-1-i;j++)
if(a[j].number>a[j+1].number)
{ s=a[j];a[j]=a[j+1];a[j+1]=s; }
}
ofstream outfile(".\\message\\һ����.txt",ios::out);
for(int i=0;i<LSTSG::n ;i++)
{
	outfile<<a[i].number<<" "<<a[i].name<<" "<<a[i].author<<" "<<a[i].fenlei<<" "<<a[i].language<<" "<<a[i].zhuangtai<<endl;
} 
 cout<<"�������"; 
} 
else if(k==2){ 
cout<<"���������У����Ե�.......";
for( i=0;i<LSTSG::n-1;i++)
{
for (j=0;j<LSTSG::n-1-i;j++)
if( strcmp(a[j].name,a[j+i].name)>0) 

{ s=a[j];a[j]=a[j+1];a[j+1]=s; }
}
ofstream outfile(".\\message\\һ����.txt",ios::out);
for(int i=0;i<LSTSG::n ;i++)
{
	outfile<<a[i].number<<" "<<a[i].name<<" "<<a[i].author<<" "<<a[i].fenlei<<" "<<a[i].language<<" "<<a[i].zhuangtai<<endl;
}
cout<<"�������"; 
} 
else if(k==3){ 
cout<<"���������У����Ե�.......";
for( i=0;i<LSTSG::n-1;i++)
{
for (j=0;j<LSTSG::n-1-i;j++)
if(strcmp(a[j].author,a[j+1].author)>0)
{ s=a[j];a[j]=a[j+1];a[j+1]=s; }
}
ofstream outfile(".\\message\\һ����.txt",ios::out);
for(int i=0;i<LSTSG::n ;i++)
{
	outfile<<a[i].number<<" "<<a[i].name<<" "<<a[i].author<<" "<<a[i].fenlei<<" "<<a[i].language<<" "<<a[i].zhuangtai<<endl;
}
cout<<"�������"; 
} 
else cout<<"ѡ�����Ĭ���˳�����!"<<endl; 
}
} 
void arry::Count() //���麯��
{ 
cout<<"����Ŀǰ����:"<<LSTSG::n<<"��"<<endl;
}

void arry::get()
{ int i;
  int s;
  
cout<<"��������Ҫ�����ı��"<<endl;
cin>>s;
{ for(i=0;i<LSTSG::n;i++)
if((a[i].number==s)&&(strcmp(a[i].zhuangtai ,"δ���")==0) )
{ 
cout<<"��Ҫ�������Ϣ��"<<endl;
cout<<"���"<<setw(20)<<"����"<<setw(15)<<"����"<<setw(15)<<"����"<<setw(15)
<<"����"<<setw(10)<<"״̬"<<endl;
a[i].LSTSG::outcom();
cout<<"�ɽ���,�Ƿ����ȷ����y��/ȡ����n��,������:"<<endl;
char c;
cin>>c;
if(c=='y')
{ strcpy(a[i].zhuangtai,"���");
ofstream outfile(".\\message\\һ����.txt",ios::out);
for(int i=0;i<LSTSG::n ;i++)
{
	outfile<<a[i].number<<" "<<a[i].name<<" "<<a[i].author<<" "<<a[i].fenlei<<" "<<a[i].language<<" "<<a[i].zhuangtai<<endl;
}  
cout<<"��ϲ������ɹ�"<<endl;
return; 
}

else {
cout<<"ȡ������!"<<endl;return;
}
}
else if((a[i].number==s)&&(strcmp(a[i].zhuangtai ,"���")==0)) 
{
cout<<"�����ѽ��"<<endl;return;
}
}
cout<<"����δ�ش���!"<<endl;
}

void arry::back() //���麯��
{ 
int n;
int i;
cout<<"��������Ҫ����ı���:";
cin>>n;
{ for(i=0;i<LSTSG::n;i++)
if((a[i].number==n)&&strcmp(a[i].zhuangtai ,"���")==0)
{ cout<<"��Ҫ�������Ϣ��"<<endl;
cout<<"���"<<setw(20)<<"����"<<setw(15)<<"����"<<setw(15)<<"����"<<setw(15)
<<"����"<<setw(10)<<"״̬"<<endl;
a[i].LSTSG::outcom();
cout<<"ȷ���Ƿ��飺ȷ����y��/��n��"<<endl;
char c;
cin>>c;
if(c=='y')
{ strcpy(a[i].zhuangtai,"δ���");
cout<<"����ɹ�"<<endl;
ofstream outfile(".\\message\\һ����.txt",ios::out);
for(int i=0;i<LSTSG::n ;i++)
{
	outfile<<a[i].number<<" "<<a[i].name<<" "<<a[i].author<<" "<<a[i].fenlei<<" "<<a[i].language<<" "<<a[i].zhuangtai<<endl;
}
return;

 }

else if(c=='n')
{
cout<<"ȡ������"<<endl;
return;}
else{ cout<<"�������Ĭ���˳�!"<<endl;
return;}
} 
}
cout<<"����δ����Ҫ�˻���������δ���!"<<endl;
}

void arry::print() //��ʾ����
{ 
cout<<"���"<<setw(20)<<"����"<<setw(15)<<"����"<<setw(15)<<"����"<<setw(15)
<<"����"<<setw(10)<<"״̬"<<endl;
for(int i=0;i<LSTSG::n;i++)
a[i].LSTSG::outcom();
}
int arry::menu1()
{
	int i;
cout<<"--------------------------��ӭ����ͼ�����ϵͳ!----------------------------"<<endl;
cout<<endl;
cout<<"��------------------------------M E N U----------------------------------��"<<endl;
cout<<"��  ��ӣ�û��Ȩ�ޣ�             ѧ                                      ��"<<endl; 
cout<<"��  ɾ����û��Ȩ�ޣ�             ��                                      ��"<<endl; 
cout<<"��  �޸ģ�û��Ȩ�ޣ�             ϵ                                      ��"<<endl; 
cout<<"��  1.����                       ͳ                                      ��"<<endl;
cout<<"��  2.����                                                               ��"<<endl;
cout<<"��  3.ͳ��                                                               ��"<<endl;
cout<<"��  4.����                                                               ��"<<endl;
cout<<"��  5.����                                                               ��"<<endl;
cout<<"��  6.��ʾ                                                               ��"<<endl;
cout<<"��  7.�����Ķ�                                                           ��"<<endl;
cout<<"��  8.�˳��������˳���                                                   ��"<<endl;
cout<<"��  ��ѡ��(1~8)���г���                                                  ��"<<endl;
cout<<"��-----------------------------------------------------------------------��"<<endl;
for(;;)
{ 
  
cin>>i;
if(i<1||i>8)
cout<<"������������ԣ���ѡ��1~8��!:"<<endl;
else break;
 }
 return i;
}
int arry::menu2() //�˵�����
{
int i;
cout<<"--------------------------��ӭ����ͼ�����ϵͳ!----------------------------"<<endl;
cout<<endl ;
cout<<"��------------------------------M E N U------------------------------------��"<<endl;
cout<<"��  1.��ӣ�����Ա��                                                       ��"<<endl;
cout<<"��  2.ɾ��������Ա��                        ��                             ��"<<endl;
cout<<"��  3.�޸ģ�����Ա��                        ��                             ��"<<endl;
cout<<"��  4.����                                  Ա                             ��"<<endl;
cout<<"��  5.����                                  ϵ                             ��"<<endl; 
cout<<"��  6.ͳ��                                  ͳ                             ��"<<endl;
cout<<"��  7.����                                                                 ��"<<endl;
cout<<"��  8.����                                                                 ��"<<endl;
cout<<"��  9.��ʾ                                                                 ��"<<endl;
cout<<"��  10.�����Ķ�                                                            ��"<<endl;
cout<<"��  11.�˳��������˳���                                                    ��"<<endl;
cout<<"��  ��ѡ��(1~11)���г���                                                   ��"<<endl;
cout<<"��-------------------------------------------------------------------------��"<<endl;
for(;;)
{ 
cin>>i;
if(i<1||i>11)
cout<<"������������ԣ���ѡ��1~11��!:"<<endl;
else break;
 }
return i;
}//bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb

void zhanghao::cun ()
{
	ifstream infile(".\\message\\�ͼ��˺�.txt",ios::in);
	for(int i=0;i<50000;i++)
	{
		infile>>p[i].z>>p[i].m;LSTSG::n1++;
	}
 } 

 void zhanghao::cung()
 {
 	ifstream infile(".\\message\\�߼��˺�.txt",ios::in);
	for(int i=0;i<50000;i++)
	{
		infile>>p[i].z>>p[i].m;LSTSG::n1++;
	}
 	
 }

 void zhanghao::denglu()
 {  bool pd=false;
    for(;;)
	{
	
      char a1[12],b1[12];
      cin>>a1>>b1;
       for(int i=0;i<LSTSG::n1;i++)
       { 
         if(!strcmp(p[i].z,a1)&&!strcmp(p[i].m,b1)) 
          {
        	pd=true;break;
	      }
       } 
      if(pd==true) break;
      else cout<<"�˺Ż������������������"<<endl;
    }
 }
 
 void arry::dushu()//�����Ķ� 
 {  bool pf=false; 
     char e;
    for(;;)
   { 
    cout<<"������Ҫ�Ķ���������֣���ʽ������+��+����������֮ǰ������һ���ո�"<<endl;
    char w[30];
	cin>>w; 
    char Q[30];
    cin>>Q;
    for(int i=0;i<LSTSG::n;i++)
	{
    if(strcmp(a[i].name,Q)==0)
    { cout<<endl; 
	 cout<<"��Ϊ���ҵ����飺"<<endl; 
	 cout<<endl; 
	cout<<"���"<<setw(20)<<"����"<<setw(15)<<"����"<<setw(15)<<"����"<<setw(15)<<"����"<<setw(10)<<"״̬"<<endl; 
	a[i].LSTSG::outcom();
	cout<<endl; 
    char a[100000]; 
    string file=".\\message\\";
    for(int i=0;i<strlen(Q);i++)
    {
    	file+=Q[i];
	}
	file+=".txt";
 	ifstream infile(file,ios::in);
    cout<<"�Ƿ��Ķ���y/�ǣ�n/��:" ;
	cin>>e;
	if(e=='n'||e=='N') return; 
 	if(!infile) 
	 {  pf=true; 
	 	cerr<<"������ʱ�����Զ�"<<endl;
	 	break;
	  } 
	  system("cls") ;
 	for(int i=0;;i++)
 	 { 
 	    infile>>a[i];
 	    if(a[i]=='n') break;
     	cout<<a[i];
		// _sleep(0.5); 
     } 
     cout<<endl;
	return; 
 	} 
 	}
 	if(pf==false){ 
     cout<<"�����޴��飬������ n ������������������ N �˳�����:";
	 char s;
	 cin>>s;
	 if(s=='N') break; 
	  } 
	else if(pf==true) {cout<<"�� n �����Ķ������� N �˳�:" ;
	  char s;
	 cin>>s;
	 if(s=='N') break; 
	  
	  } 
	  
	 }
 	
   }
  
 
 	


