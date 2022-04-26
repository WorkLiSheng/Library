#include "LSTSG.h"
#include<iomanip>
#include<string.h>
#include <iostream>
#include <fstream> 
using namespace std;
using namespace ls201908010215; 
 int LSTSG::n=0;
 int LSTSG::n1=0; 
 void arry::cunshu()//存书函数 
 {
 	ifstream infile(".\\message\\一万本书.txt",ios::in);
 	for(int i=0;;i++)
 	{
 		infile>>a[i].number>>a[i].name>>a[i].author>>a[i].fenlei>>a[i].language>>a[i].zhuangtai; 
 		if(a[i].number==-1) break;
 		LSTSG::n++;
	 }
 }
 LSTSG::LSTSG() //构造函数 
  {  number=-1;   
     strcpy(name,"-");
     strcpy(author,"-");strcpy(fenlei,"-");
     strcpy(language,"-");strcpy(zhuangtai,"-");
  }

LSTSG::LSTSG(int a,char b[],char c[],char d[],char e[],char f[]) //构造函数
{ 
number=a;
strcpy(name,b);
strcpy(author,c);
strcpy(fenlei,d);
strcpy(language,e);
strcpy(zhuangtai,f);
n++;
}

void LSTSG::setLSTSG() //设置输入函数
{ cout<<"请输入书籍数据"<<endl;
cout<<"编号"<<setw(20)<<"书名"<<setw(15)<<"作者"<<setw(15)<<"分类"<<setw(10)<<"语言"<<setw(5)<<"状态"<<endl;
cin>>number>>name>>author>>fenlei>>language>>zhuangtai;cout<<endl;
n++;}

void LSTSG::outcom() //输出函数
{ 
cout<<number<<setw(21)<<name<<setw(16)<<author<<setw(14)<<fenlei<<setw(13)<<language<<setw(11)<<zhuangtai<<endl;
}

void arry::add() //添加函数
{ 
if(LSTSG::n!=0)
{
for(int i=LSTSG::n-1;i<len;i++)
{
a[i+1].LSTSG::setLSTSG();
ofstream outfile(".\\message\\一万本书.txt",ios::app);
outfile<<a[i+1].number<<" "<<a[i+1].name<<" "<<a[i+1].author<<" "<<a[i+1].fenlei<<" "<<a[i+1].language<<" "<<a[i+1].zhuangtai<<endl; 
cout<<"还要继续添加吗？确定（y）/取消（n）:";
char c;
cin>>c;
if(c=='y'||c=='Y') continue;
else if(c=='n'||c=='N') { cout<<"退出添加!"<<endl; return; }
else { cout<<"选者错误，默认退出添加!"<<endl;
return; } 
}
}
else 
{
for(int i=0;i<len;i++)
{
a[i].LSTSG::setLSTSG();
cout<<"还要继续添加吗？确定（y）/取消（n）:";
char c;
cin>>c;
if(c=='y'||c=='Y') continue;
else if(c=='n'||c=='N') { cout<<"退出添加!"<<endl; return; }
else { cout<<"选者错误，默认退出添加!"<<endl;
return; } 
} 
} 
} 

void arry::del() //删除函数
{ 
cout<<"请选择删除方式（路径）"<<endl;
cout<<"1.按编号删除"<<endl;
cout<<"2.按书名删除"<<endl;
cout<<"请输入删除方式:";
int i,j,k;
char c;
cin>>k;

if (k==1)
{ int n;
cout<<" 请输入编号:";
cin>>n;
{ for( i=0;i<LSTSG::n;i++)
if(a[i].number==n)
{ 
j=i;
cout<<"将要删除的信息:"<<endl;
cout<<"编号"<<setw(20)<<"书名"<<setw(15)<<"作者"<<setw(15)<<"分类"<<setw(15)
<<"语言"<<setw(10)<<"状态"<<endl;
a[j].LSTSG::outcom();
cout<<"确定要删除吗？确定（y）/取消（n）";
cin>>c;

if(c=='y'||c=='Y')
{
for( i=j;i<LSTSG::n-1;i++)
a[i]=a[i+1];               //最简便易懂的删除方式 
cout<<"已删除该书:"<<endl;
LSTSG::n--;
ofstream outfile(".\\message\\一万本书.txt",ios::out);
for(int i=0;i<LSTSG::n ;i++)
{
	outfile<<a[i].number<<" "<<a[i].name<<" "<<a[i].author<<" "<<a[i].fenlei<<" "<<a[i].language<<" "<<a[i].zhuangtai<<endl;
}
return;
}

else if(c=='n'||c=='N')
{
cout<<"取消删除 !"<<endl;
return; } 

else { cout<<"选择错误，默认退出!"<<endl;
return; }
}
}
cout<<"你要删除的内容不存在!"<<endl;return;

}

if (k==2)
{ 
char m[40];
cout<<" 请输入书名:";
cin>>m;
{
for( i=0;i<LSTSG::n;i++)
if(!strcmp(a[i].name,m))
{
j=i;
cout<<"将要删除的信息:"<<endl;
cout<<"编号"<<setw(20)<<"书名"<<setw(15)<<"作者"<<setw(15)<<"分类"<<setw(15)
<<"语言"<<setw(10)<<"状态"<<endl;
a[j].LSTSG::outcom(); 
cout<<"确定要删除吗？确定（y）/取消（n）";
cin>>c;
if(c=='y'||c=='Y')
{
for( i=j;i<LSTSG::n-1;i++)
a[i]=a[i+1];
cout<<"已删除该信息"<<endl;
LSTSG::n--;
ofstream outfile(".\\message\\一万本书.txt",ios::out);
for(int i=0;i<LSTSG::n ;i++)
{
	outfile<<a[i].number<<" "<<a[i].name<<" "<<a[i].author<<" "<<a[i].fenlei<<" "<<a[i].language<<" "<<a[i].zhuangtai<<endl;
}
return;
}

else if(c=='n'||c=='N')
{
cout<<"取消删除 !"<<endl;
return;
}
else {
     cout<<"选择错误，默认退出!"<<endl;return;
    }
}
}

cout<<"你要删除的内容不存在!"<<endl;return; 
}
}

void arry::find() //查找函数
{ bool pd=false; 
cout<<"请选择查找方式"<<endl;
cout<<"1.按编号查找"<<"    "<<"2.按书名查找加作者查找"<<endl;

cout<<"请输入方式:";
int i,j ,k;
cin>>k;

if(k==1)
{ int n;
cout<<"请输入编号:";
cin>>n;
for(i=0;i<LSTSG::n;i++)
if(a[i].number==n)
{ 
j=i;
cout<<"你要查找的书信息:"<<endl;
cout<<"编号"<<setw(20)<<"书名"<<setw(15)<<"作者"<<setw(15)<<"分类"<<setw(15)<<"语言"<<setw(10)<<"状态"<<endl;
a[j].LSTSG::outcom();pd=true;
return;
}
if(pd==false) { cout<<"馆内未藏此书!"<<endl; }
}

else if(k==2)
{ 
char n[40];char m[20];
cout<<"请输入书名和作者:";
cin>>n>>m;
for(i=0;i<LSTSG::n;i++)
if(!strcmp(a[i].name,n)&&!strcmp(a[i].author,m))
{ 
j=i;
cout<<"你要查找的书信息:"<<endl;
cout<<"编号"<<setw(20)<<"书名"<<setw(15)<<"作者"<<setw(15)<<"分类"<<setw(15)
<<"语言"<<setw(10)<<"状态"<<endl;
a[j].LSTSG::outcom();
return;
}
if(pd==false) { cout<<"馆内未藏此书!"<<endl;return; }
}

}

void arry::modify() //修改函数
{
cout<<"请选择修改的方式"<<endl;
cout<<"1.按编号修改方式"<<endl;
cout<<"2.按书名修改方式"<<endl;
cout<<"3.按作者修改方式"<<endl;
cout<<"4.按分类修改方式"<<endl;
cout<<"5.按语言修改方式"<<endl;
cout<<"6.按状态修改方式"<<endl;
cout<<"请输入方式：";
int k,i,j;
int A;//编号 
char b[50];//书名 
char c[20];//作者 
char d[15];//分类 
char e[10];//语言 
char f[5];//状态 
cin>>k;
if(k==1)
{
cout<<"请输入编号:";
cin>>A; }

else if(k==2)
{ cout<<"请输入书名:";
cin>>b; }

else if(k==3)
{ cout<<"请输入作者名:";
cin>>c; }

else if(k==4)
{ 
cout<<"请输入分类名:";
cin>>d; }

else if(k==5)
{ cout<<"请输入语言（中文、英文或其他）名:";
cin>>e; }

else if(k==6)
{ cout<<"请输入状态（借出（n）/未借出（y）:";
cin>>f; }

else { cout<<"输入错误，默认退出修改!"<<endl;
return; }

for(i=0;i<LSTSG::n;i++)
if((a[i].number==A)||!strcmp(a[i].name,b)||!strcmp(a[i].author,c)||!strcmp(a[i].fenlei,d)||!strcmp(a[i].language,e)||!strcmp(a[i].zhuangtai,f))
{
j=i;
cout<<"你将要修改的信息:"<<endl;
cout<<"编号"<<setw(20)<<"书名"<<setw(15)<<"作者"<<setw(15)<<"分类"<<setw(15)
<<"语言"<<setw(10)<<"状态"<<endl;
a[j].LSTSG::outcom();
cout<<"确定是否真的要修改？确定(y)/取消(n):"<<endl;
char c;
cin>>c;
if(c=='y')
{ a[j].LSTSG::setLSTSG();
ofstream outfile(".\\message\\一万本书.txt",ios::out);
for(int i=0;i<LSTSG::n ;i++)
{
	outfile<<a[i].number<<" "<<a[i].name<<" "<<a[i].author<<" "<<a[i].fenlei<<" "<<a[i].language<<" "<<a[i].zhuangtai<<endl;
}

 return;
}
else if(c=='n') {cout<<"取消修改"<<endl;return;}
}  //如果进行到这里，就表明在库内没有找到匹配的书， 
   cout<<"你要修改的内容不存在!"<<endl;
}

void arry::sort() // 排序函数
{ 
cout<<"请选择排序方式"<<endl;
cout<<"1.按编号排序"<<endl;
cout<<"2.按书名排序"<<endl;
cout<<"3.按作者排序"<<endl;
cout<<"输入方式:";
int k;
int i,j;
LSTSG s;
cin>>k; 
if(LSTSG::n>1)
{
if(k==1){ 
cout<<"正在排序中，请稍等.......";
for( i=0;i<LSTSG::n-1;i++)
{
for (j=0;j<LSTSG::n-1-i;j++)
if(a[j].number>a[j+1].number)
{ s=a[j];a[j]=a[j+1];a[j+1]=s; }
}
ofstream outfile(".\\message\\一万本书.txt",ios::out);
for(int i=0;i<LSTSG::n ;i++)
{
	outfile<<a[i].number<<" "<<a[i].name<<" "<<a[i].author<<" "<<a[i].fenlei<<" "<<a[i].language<<" "<<a[i].zhuangtai<<endl;
} 
 cout<<"排序完毕"; 
} 
else if(k==2){ 
cout<<"正在排序中，请稍等.......";
for( i=0;i<LSTSG::n-1;i++)
{
for (j=0;j<LSTSG::n-1-i;j++)
if( strcmp(a[j].name,a[j+i].name)>0) 

{ s=a[j];a[j]=a[j+1];a[j+1]=s; }
}
ofstream outfile(".\\message\\一万本书.txt",ios::out);
for(int i=0;i<LSTSG::n ;i++)
{
	outfile<<a[i].number<<" "<<a[i].name<<" "<<a[i].author<<" "<<a[i].fenlei<<" "<<a[i].language<<" "<<a[i].zhuangtai<<endl;
}
cout<<"排序完毕"; 
} 
else if(k==3){ 
cout<<"正在排序中，请稍等.......";
for( i=0;i<LSTSG::n-1;i++)
{
for (j=0;j<LSTSG::n-1-i;j++)
if(strcmp(a[j].author,a[j+1].author)>0)
{ s=a[j];a[j]=a[j+1];a[j+1]=s; }
}
ofstream outfile(".\\message\\一万本书.txt",ios::out);
for(int i=0;i<LSTSG::n ;i++)
{
	outfile<<a[i].number<<" "<<a[i].name<<" "<<a[i].author<<" "<<a[i].fenlei<<" "<<a[i].language<<" "<<a[i].zhuangtai<<endl;
}
cout<<"排序完毕"; 
} 
else cout<<"选择错误，默认退出排序!"<<endl; 
}
} 
void arry::Count() //借书函数
{ 
cout<<"馆内目前藏书:"<<LSTSG::n<<"册"<<endl;
}

void arry::get()
{ int i;
  int s;
  
cout<<"请输入你要借的书的编号"<<endl;
cin>>s;
{ for(i=0;i<LSTSG::n;i++)
if((a[i].number==s)&&(strcmp(a[i].zhuangtai ,"未借出")==0) )
{ 
cout<<"你要借书的信息："<<endl;
cout<<"编号"<<setw(20)<<"书名"<<setw(15)<<"作者"<<setw(15)<<"分类"<<setw(15)
<<"语言"<<setw(10)<<"状态"<<endl;
a[i].LSTSG::outcom();
cout<<"可借阅,是否借阅确定（y）/取消（n）,请输入:"<<endl;
char c;
cin>>c;
if(c=='y')
{ strcpy(a[i].zhuangtai,"借出");
ofstream outfile(".\\message\\一万本书.txt",ios::out);
for(int i=0;i<LSTSG::n ;i++)
{
	outfile<<a[i].number<<" "<<a[i].name<<" "<<a[i].author<<" "<<a[i].fenlei<<" "<<a[i].language<<" "<<a[i].zhuangtai<<endl;
}  
cout<<"恭喜您借书成功"<<endl;
return; 
}

else {
cout<<"取消借阅!"<<endl;return;
}
}
else if((a[i].number==s)&&(strcmp(a[i].zhuangtai ,"借出")==0)) 
{
cout<<"此书已借出"<<endl;return;
}
}
cout<<"馆内未藏此书!"<<endl;
}

void arry::back() //还书函数
{ 
int n;
int i;
cout<<"请输入你要还书的编码:";
cin>>n;
{ for(i=0;i<LSTSG::n;i++)
if((a[i].number==n)&&strcmp(a[i].zhuangtai ,"借出")==0)
{ cout<<"你要还书的信息："<<endl;
cout<<"编号"<<setw(20)<<"书名"<<setw(15)<<"作者"<<setw(15)<<"分类"<<setw(15)
<<"语言"<<setw(10)<<"状态"<<endl;
a[i].LSTSG::outcom();
cout<<"确定是否还书：确定（y）/否（n）"<<endl;
char c;
cin>>c;
if(c=='y')
{ strcpy(a[i].zhuangtai,"未借出");
cout<<"还书成功"<<endl;
ofstream outfile(".\\message\\一万本书.txt",ios::out);
for(int i=0;i<LSTSG::n ;i++)
{
	outfile<<a[i].number<<" "<<a[i].name<<" "<<a[i].author<<" "<<a[i].fenlei<<" "<<a[i].language<<" "<<a[i].zhuangtai<<endl;
}
return;

 }

else if(c=='n')
{
cout<<"取消还书"<<endl;
return;}
else{ cout<<"输入错误。默认退出!"<<endl;
return;}
} 
}
cout<<"馆内未藏你要退还的书或此书未借出!"<<endl;
}

void arry::print() //显示函数
{ 
cout<<"编号"<<setw(20)<<"书名"<<setw(15)<<"作者"<<setw(15)<<"分类"<<setw(15)
<<"语言"<<setw(10)<<"状态"<<endl;
for(int i=0;i<LSTSG::n;i++)
a[i].LSTSG::outcom();
}
int arry::menu1()
{
	int i;
cout<<"--------------------------欢迎进入图书管理系统!----------------------------"<<endl;
cout<<endl;
cout<<"┏------------------------------M E N U----------------------------------┓"<<endl;
cout<<"│  添加（没有权限）             学                                      │"<<endl; 
cout<<"│  删除（没有权限）             生                                      │"<<endl; 
cout<<"│  修改（没有权限）             系                                      │"<<endl; 
cout<<"│  1.查找                       统                                      │"<<endl;
cout<<"│  2.排序                                                               │"<<endl;
cout<<"│  3.统计                                                               │"<<endl;
cout<<"│  4.借书                                                               │"<<endl;
cout<<"│  5.还书                                                               │"<<endl;
cout<<"│  6.显示                                                               │"<<endl;
cout<<"│  7.在线阅读                                                           │"<<endl;
cout<<"│  8.退出并结束此程序                                                   │"<<endl;
cout<<"│  请选择(1~8)运行程序                                                  │"<<endl;
cout<<"┗-----------------------------------------------------------------------┛"<<endl;
for(;;)
{ 
  
cin>>i;
if(i<1||i>8)
cout<<"输入错误，请重试，并选择（1~8）!:"<<endl;
else break;
 }
 return i;
}
int arry::menu2() //菜单函数
{
int i;
cout<<"--------------------------欢迎进入图书管理系统!----------------------------"<<endl;
cout<<endl ;
cout<<"┏------------------------------M E N U------------------------------------┓"<<endl;
cout<<"│  1.添加（管理员）                                                       │"<<endl;
cout<<"│  2.删除（管理员）                        管                             │"<<endl;
cout<<"│  3.修改（管理员）                        理                             │"<<endl;
cout<<"│  4.查找                                  员                             │"<<endl;
cout<<"│  5.排序                                  系                             │"<<endl; 
cout<<"│  6.统计                                  统                             │"<<endl;
cout<<"│  7.借书                                                                 │"<<endl;
cout<<"│  8.还书                                                                 │"<<endl;
cout<<"│  9.显示                                                                 │"<<endl;
cout<<"│  10.在线阅读                                                            │"<<endl;
cout<<"│  11.退出并结束此程序                                                    │"<<endl;
cout<<"│  请选择(1~11)运行程序                                                   │"<<endl;
cout<<"┗-------------------------------------------------------------------------┛"<<endl;
for(;;)
{ 
cin>>i;
if(i<1||i>11)
cout<<"输入错误，请重试，并选择（1~11）!:"<<endl;
else break;
 }
return i;
}//bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb

void zhanghao::cun ()
{
	ifstream infile(".\\message\\低级账号.txt",ios::in);
	for(int i=0;i<50000;i++)
	{
		infile>>p[i].z>>p[i].m;LSTSG::n1++;
	}
 } 

 void zhanghao::cung()
 {
 	ifstream infile(".\\message\\高级账号.txt",ios::in);
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
      else cout<<"账号或密码错误，请重新输入"<<endl;
    }
 }
 
 void arry::dushu()//在线阅读 
 {  bool pf=false; 
     char e;
    for(;;)
   { 
    cout<<"请输入要阅读的书的名字：格式（作者+的+书名；书名之前请输入一个空格）"<<endl;
    char w[30];
	cin>>w; 
    char Q[30];
    cin>>Q;
    for(int i=0;i<LSTSG::n;i++)
	{
    if(strcmp(a[i].name,Q)==0)
    { cout<<endl; 
	 cout<<"已为你找到此书："<<endl; 
	 cout<<endl; 
	cout<<"编号"<<setw(20)<<"书名"<<setw(15)<<"作者"<<setw(15)<<"分类"<<setw(15)<<"语言"<<setw(10)<<"状态"<<endl; 
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
    cout<<"是否阅读？y/是，n/否:" ;
	cin>>e;
	if(e=='n'||e=='N') return; 
 	if(!infile) 
	 {  pf=true; 
	 	cerr<<"该书暂时不可以读"<<endl;
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
     cout<<"馆内无此书，请输入 n 重新输入书名或输入 N 退出输入:";
	 char s;
	 cin>>s;
	 if(s=='N') break; 
	  } 
	else if(pf==true) {cout<<"请 n 重新阅读或输入 N 退出:" ;
	  char s;
	 cin>>s;
	 if(s=='N') break; 
	  
	  } 
	  
	 }
 	
   }
  
 
 	


