#include<iostream>
using namespace std;
#include<string>
#define MAX 100

//设计一个学生类，属性有姓名和学号
//可以给姓名和学号赋值，可以显示学生的姓名和学号

//设计学生类 
class student 
{
public: //公共权限
    
    //类中的属性和行为 我们统一称为 成员
	//属性 成员属性 成员变量
	//行为 成员函数 成员方法
	
	 
	//属性
	
	//姓名
	string m_Name;
	//学号
	string m_Xuehao;
	
	//行为
	//显示学生的姓名和学号 
	void showStudent()
	{
		cout <<"姓名："<< m_Name << endl;
		cout <<"学号："<< m_Xuehao << endl;
	}
	
	//给姓名赋值
	void setName(string name)
	{
		m_Name = name;
	}
	
	//给学号赋值
	void setXuehao(string Xuehao)
	{
		m_Xuehao = Xuehao;
	}
};

int main()
{
	//创建一个具体学生 实例化对象
	student s1;
	
//	cout <<"请输入你的姓名："<< endl;
//	cin >> s1.m_Name;
//	cout <<"请输入你的学号："<< endl;
//	cin >> s1.m_Xuehao;

    //给s1对象 进行属性赋值操作
	//s1.m_Name = "张三";
	s1.setName("张三");
	//s1.m_Xuehao;
	s1.setXuehao("20210203922");
	   
	//显示学生信息
	s1.showStudent();
	
	system("pause");
	
	return 0;
} 
