#include<iostream>
using namespace std;

//1��������
class Person
{
public:
	
	Person()
	{
		cout <<"PersonĬ�Ϲ��캯������"<< endl;
	}
	
	//thisָ��ı��ʣ���ָ�볣����ָ���ָ���ǲ��ɱ��޸ĵ�
	//const Person * const this; 
	//�ڳ�Ա���������const�����ε���thisָ�룬��ָ��ָ���ֵҲ�����޸� 
	void showPerson() const
	{
		this->m_B = 100; 
		//this->m_A = 100;
		//this = NULL; //thisָ���ǲ������޸�ָ���ָ��� 
	}
	
	void func()
	{
		m_A = 100;
	}
	
	int m_A;
	mutable int m_B; //�����������ʹ�ڳ������У�Ҳ�����޸����ֵ�����Ϲؼ���mutable
 
};

void test01()
{
	Person p;
	p.showPerson(); 
}

//2��������

void test02()
{
	const Person p; //�ڶ���ǰ���cosnt����Ϊ������
	//p.m_A = 100;
	p.m_B = 100; //m_B������ֵ���ڳ�������Ҳ�����޸�
	
	//������ֻ�ܵ��ó�����
	p.showPerson();
	//p.func(); //�����󲻿��Ե�����ͨ��Ա��������Ϊ��ͨ��Ա���������޸����� 
}

int main()
{
	test02();
	
	system("pause");
	
	return 0;
}
