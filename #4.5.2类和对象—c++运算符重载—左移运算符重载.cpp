#include<iostream>
using namespace std;

//�������������
//�����������������ʵ������Զ����������� 

class Person
{
	friend ostream & operator<<(ostream &cout,Person p);

public:
	Person(int a,int b)
	{
		m_A = a;
		m_B = b;
	}
private:
	
	//���ó�Ա�������� ��������� p.operator<<(cout) �򻯰汾 p << cout 
	//�������ó�Ա�����������������Ϊ�޷�ʵ��cout����� 
//	void operator<<(cout)
//	{
//		
//	} 
	
	int m_A;
	int m_B;
};

//ֻ������ȫ�ֺ����������������
ostream & operator<<(ostream &cout,Person p) //���� operator<<(cout,p) �� cout << p 
{
	cout <<"m_A = "<< p.m_A << " m_B = "<< p.m_B;
	return cout;
}

void test01()
{
	Person p(10,10);
	//p.m_A = 10;
	//p.m_B = 10;
	
	cout << p << endl;
}

int main()
{
	test01();
	
	system("pause");
	
	return 0;
}
