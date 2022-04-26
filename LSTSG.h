#ifndef LSTSG_H
#define LSTSG_H
#include <iostream>
namespace ls201908010215
{ 

    class LSTSG
   {
	public:
		LSTSG(); //���캯��
        LSTSG(int a,char b[],char c[],char d[],char e[],char f[]); //�в������캯��
        void setLSTSG(); //�������뺯��
        void outcom(); //������� 
        friend class arry; //��Ե��
        friend class zhanghao;//��Ե�� 
        static int n; //��̬��Ա(��) 
        static int n1;// ��̬��Ա(�˺�)
	protected: 
        int number; //��ı��
        char name[30]; // �������
        char author[20]; //�������
        char fenlei[15]; //�������
        char language[15]; // ������� 
        char zhuangtai[5]; //���״̬
		char z[12];//�˺� 
		char m[12];//���� 

   };
    class arry //arry��--��ͼ��ݵĲ�������
    {
    private:
        LSTSG *a; //�ӳ�Ա
        int len; //����
    public:
        arry(int s){len=s;a=new LSTSG[len];} //���캯��
        ~arry(){ delete []a;} //��������
        void add(); //��Ӻ���
        void del(); //ɾ������
        void find(); //���Һ���
        void modify(); //�޸ĺ���
        void sort(); //������
        void Count(); //ͳ�ƺ���
        void get(); //���麯��
        void back(); //���麯��
        void print(); //��ʾ����
        int menu1(); //�˵�����
        int menu2();
        void cunshu();//���� 
        void dushu();//���麯�� 
    };
    class zhanghao//�˺���
	{   
	    private:
		  LSTSG *p;
		  int leng; 
		public:
		  zhanghao(int j){leng=j;p=new LSTSG[leng];}
		  ~zhanghao(){delete []p;} 
		  void cun(); //����˺�
		  void cung(); //��߼��˺�
		  void zhuce();//ע�ắ��
		  void denglu();//��¼����
	
	} ;
    
}; 

#endif
