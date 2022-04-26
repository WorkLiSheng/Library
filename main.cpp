#include <string> 
#include <fstream> 
#include <iostream> 
#include "LSTSG.h"
#include <windows.h>
using namespace std;
using namespace ls201908010215; 
	int main() //主函数
{   

    cout<<"请选择登陆模式:1 学生身份,2 管理员身份"<<endl;
    cout<<"请输入："; 
    int q;
	cin>>q;
	 system("cls");
	if(q==1)
	{   zhanghao p(50000);
	    p.cun(); 
		cout<<endl; 
        cout<<"请输入学生账号:";
    	cout<<"            ";
        cout<<"请输入密码："; 
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
	   case 3:system("cls");f.Count();break;//统计函数 
       case 4:system("cls");f.Count();cout<<endl;f.get();break;//借书函数 
       case 5:system("cls");f.back();break;//还书函数 
       case 6:system("cls");f.print();break;//显示函数 
       case 7:system("cls");f.dushu();break;
       case 8:system("cls");cout<<"退出菜单，谢谢使用!"<<endl;
 	  } 	
 	 cout<<endl;
     cout<<"是否返回首页？(y/n):";
     cin>>c;
     system("cls");
   
  
  } 
}
   if(q==2) 
{ 
    zhanghao p(50000);
	p.cung(); 
	cout<<endl; 
	cout<<"请输入管理员账号:";
	cout<<"            ";
     cout<<"请输入密码："; 
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
       case 1:	system("cls"); f.add();break;//添加函数 
       case 2:	system("cls"); f.del();break;//删除函数  
       case 3:	system("cls"); f.modify();break;//修改函数 
       case 4:	system("cls"); f.find() ;break;//查找函数 
       case 5:	system("cls"); f.sort();break;//排序函数 
       case 6: 	system("cls");f.Count();break;//统计函数 
       case 7: 	system("cls");f.get();break;//借书函数 
       case 8: 	system("cls");f.back();break;//还书函数 
       case 9: 	system("cls");f.print();break;//显示函数 
       case 10:	system("cls");f.dushu();break;
       case 11: system("cls");cout<<"退出菜单，谢谢使用!"<<endl;
     }
     cout<<endl;
     cout<<"是否返回首页？(y/n)  n为结束运行:";
     cin>>c;
     system("cls");
   
  }
 } 
} 
