#ifndef LSTSG_H
#define LSTSG_H
#include <iostream>
namespace ls201908010215
{ 

    class LSTSG
   {
	public:
		LSTSG(); //构造函数
        LSTSG(int a,char b[],char c[],char d[],char e[],char f[]); //有参数构造函数
        void setLSTSG(); //设置输入函数
        void outcom(); //输出函数 
        friend class arry; //有缘类
        friend class zhanghao;//有缘类 
        static int n; //静态成员(书) 
        static int n1;// 静态成员(账号)
	protected: 
        int number; //书的编号
        char name[30]; // 书的名字
        char author[20]; //书的作者
        char fenlei[15]; //书的种类
        char language[15]; // 书的语言 
        char zhuangtai[5]; //书的状态
		char z[12];//账号 
		char m[12];//密码 

   };
    class arry //arry类--对图书馆的操作函数
    {
    private:
        LSTSG *a; //子成员
        int len; //长度
    public:
        arry(int s){len=s;a=new LSTSG[len];} //构造函数
        ~arry(){ delete []a;} //析构函数
        void add(); //添加函数
        void del(); //删除函数
        void find(); //查找函数
        void modify(); //修改函数
        void sort(); //排序函数
        void Count(); //统计函数
        void get(); //借书函数
        void back(); //还书函数
        void print(); //显示函数
        int menu1(); //菜单函数
        int menu2();
        void cunshu();//存书 
        void dushu();//读书函数 
    };
    class zhanghao//账号类
	{   
	    private:
		  LSTSG *p;
		  int leng; 
		public:
		  zhanghao(int j){leng=j;p=new LSTSG[leng];}
		  ~zhanghao(){delete []p;} 
		  void cun(); //存低账号
		  void cung(); //存高级账号
		  void zhuce();//注册函数
		  void denglu();//登录函数
	
	} ;
    
}; 

#endif
