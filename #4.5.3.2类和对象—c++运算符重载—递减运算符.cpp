#include<iostream>
#include<string>
using namespace std;

//�ݼ���������غ͵������������ԭ����ͬ��ֻ���������һ��
class MyInteger
{
public:
	friend ostream& operator<<(ostream& cout, MyInteger myint);
	//ǰ�õݼ���������أ���������
	MyInteger& operator--();
	MyInteger operator--(int);//ͬ����Ҫʹ��ռλ�������ñ�����֪�����Ǻ�������

	MyInteger()
	{
		m_Num = 2;
	}

public:
	int m_Num;
};

//ǰ�õݼ� 
MyInteger& MyInteger::operator--()
{
	//������--
	m_Num--;
	//Ȼ�󷵻�����
	return *this;
}

//���õݼ� 
MyInteger MyInteger::operator--(int)
{
	//�ȴ���һ����ʱ���������浱ǰ��ֵ
	MyInteger temp = *this;
	m_Num--;
	return temp;
}

//����<<������
ostream& operator<<(ostream& cout, MyInteger myint)//���ں��õݼ���������ص���ֵ����������������������ʱ����ʹ������
{
	cout << "num�ĵ�ǰ��ֵΪ��"<< myint.m_Num  << endl;
	return cout;
}

//ǰ�õݼ� 
void test01()
{
	MyInteger myint;
	cout << "ǰ�õݼ����������" << endl;
	cout <<"ǰ�õݼ�"  << (--myint) << endl;
	cout <<"ǰ�õݼ���my"  << myint << endl;

}

//���õݼ� 
void test02()
{
	MyInteger myint;
	cout << "���õݼ����������" << endl;
	cout << "���õݼ�ǰ" << myint << endl;
	cout << (myint--) << endl;
	cout << "���õݼ���" << myint << endl;
}
int main()
{
	test01();
	
	test02();
	
	system("color E5");
	system("pause");
	return 0;
}
