#include<iostream>
using namespace std;

//���������ã�ת��Ϊint* const ref = &a;
void func(int& ref)
{
	ref = 100;
}

int main()
{
	int a = 10;
	
	//�Զ�ת��Ϊ int* const ref = &a;ָ�볣����ָ��ָ�򲻿ɸı䣬��Ҳ˵�����ò����Ըı�
	int& ref = a;
	
	ref = 20; //�ڲ�����ref�����ã��Զ�������ת��Ϊ��*ref = 20;
	
	cout <<"a:"<< a << endl;
	cout <<"ref:"<< ref << endl;
	
	func(a); 
	
	system("pause");
	
	return 0;
}
