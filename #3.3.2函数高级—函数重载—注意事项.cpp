#include<iostream>
using namespace std;

//�������ص�ע������
//1��������Ϊ���ص�����
void func(int &a) //int &a = 10; ���Ϸ� 
{
	cout <<"func��int &a���ĵ���"<< endl;
}

void func(const int &a) //const int &a = 10;���������޸�Ϊint temp = 10; const int &a = temp; �Ϸ� 
{
	cout <<"func��const int &a���ĵ���"<< endl;
}

//2��������������Ĭ�ϲ��� 
void func2(int a, int b = 10)
{
	cout <<"func2 (int a, int b) �ĵ���"<< endl;
}

void func2(int a)
{
	cout <<"func2 (int a) �ĵ���"<< endl;
}

int main()
{
	int a = 10;
	func(a); //����a��һ�����������Ե��õĺ���Ϊfunc(int &a)
	
	func(10);
	
	//func2(10); //��������������Ĭ�ϲ����������ֶ����ԣ������������������������ 
	
	system("pause");
	
	return 0;
}
