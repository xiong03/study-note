#include<iostream>
using namespace std;

class C1
{
	int m_A; //Ĭ��Ȩ�� ��˽�� private
};

struct C2
{
	int m_A; //Ĭ��Ȩ�� �ǹ��� public
};

int main()
{
	//struct��class������
	//struct Ĭ��Ȩ���� ���� public
	//class  Ĭ��Ȩ���� ˽�� private
	
	C1 c1;
	//c1.m_A = 100; //��classĬ��Ȩ��Ϊ˽�У�������ⲻ���Է���
	
	C2 c2;
	c2.m_A = 100; //��structĬ�ϵ�Ȩ��Ϊ��������˿��Է���
	
	system("pause");
	
	return 0;
 } 
