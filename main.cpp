#include <string> 
#include <fstream> 
#include <iostream> 
#include "LSTSG.h"
#include <windows.h>
using namespace std;
using namespace ls201908010215; 
	int main() //������
{   

    cout<<"��ѡ���½ģʽ:1 ѧ�����,2 ����Ա���"<<endl;
    cout<<"�����룺"; 
    int q;
	cin>>q;
	 system("cls");
	if(q==1)
	{   zhanghao p(50000);
	    p.cun(); 
		cout<<endl; 
        cout<<"������ѧ���˺�:";
    	cout<<"            ";
        cout<<"���������룺"; 
        cout<<endl;
 	    p.denglu() ;
 	   	system("cls");
 	    char c='y';
        arry f(100000);
        f.cunshu();
    while(c=='y'||c=='Y')
  { 
     switch(f.menu1()) 
 	  {  
	   case 1:system("cls");f.find();break;
	   case 2:system("cls");f.sort();break;
	   case 3:system("cls");f.Count();break;//ͳ�ƺ��� 
       case 4:system("cls");f.Count();cout<<endl;f.get();break;//���麯�� 
       case 5:system("cls");f.back();break;//���麯�� 
       case 6:system("cls");f.print();break;//��ʾ���� 
       case 7:system("cls");f.dushu();break;
       case 8:system("cls");cout<<"�˳��˵���ллʹ��!"<<endl;
 	  } 	
 	 cout<<endl;
     cout<<"�Ƿ񷵻���ҳ��(y/n):";
     cin>>c;
     system("cls");
   
  
  } 
}
   if(q==2) 
{ 
    zhanghao p(50000);
	p.cung(); 
	cout<<endl; 
	cout<<"���������Ա�˺�:";
	cout<<"            ";
     cout<<"���������룺"; 
     cout<<endl;
	p.denglu() ;
	system("cls");
    char c='y';
    arry f(100000);
    f.cunshu();
    while(c=='y'||c=='Y')
  { 
     switch(f.menu2())
     { 
       case 1:	system("cls"); f.add();break;//��Ӻ��� 
       case 2:	system("cls"); f.del();break;//ɾ������  
       case 3:	system("cls"); f.modify();break;//�޸ĺ��� 
       case 4:	system("cls"); f.find() ;break;//���Һ��� 
       case 5:	system("cls"); f.sort();break;//������ 
       case 6: 	system("cls");f.Count();break;//ͳ�ƺ��� 
       case 7: 	system("cls");f.get();break;//���麯�� 
       case 8: 	system("cls");f.back();break;//���麯�� 
       case 9: 	system("cls");f.print();break;//��ʾ���� 
       case 10:	system("cls");f.dushu();break;
       case 11: system("cls");cout<<"�˳��˵���ллʹ��!"<<endl;
     }
     cout<<endl;
     cout<<"�Ƿ񷵻���ҳ��(y/n)  nΪ��������:";
     cin>>c;
     system("cls");
   
  }
 } 
} 
