#include<iostream>
using namespace std;

int * func()
{
	//����new�ؼ��� ���Խ����ݿ��ٵ����� 
	//ָ�� ����Ҳ�Ǿֲ�����������ջ���ϣ�ָ�뱣������ݷ��ڶ��� 
	int * p = new int(10);
	return p;
}

int main()
{
	//�ڶ����п�������
	int * p = func(); 
	
	cout << *p << endl;
	cout << *p << endl;
	
	system("pause");
	
	return 0;
}
