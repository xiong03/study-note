#include<iostream>
using namespace std;

int main()
{
	
	//1��const����ָ�� ����ָ��
	int a = 10;
	int b = 20;
	
	const int * p = &a;
	//ָ��ָ���ֵ�����Ըı䣬ָ���ָ����Ը�
	//*p = 20;���� 
	p = &b;  
	
	//2��const���γ��� ָ�볣��
	//ָ���ָ�򲻿��Ը� ��ָ���ָ����Ը� 
	int * const p2 = &a;
	*p2 = 100;//��ȷ��
	//p2 = &b;//����ָ���ָ�򲻿��Ը� 
	 
	//3��const����ָ��ͳ���
	//const int const * p3 = &a;
	//ָ���ָ�� ��ָ��ָ���ֵ�� �����Ը� 
	//*p3 = 100;//���� 
	//p3 = &b;//���� 
	cout << sizeof(int *) << endl;
	 
	system("pause");
	
	return 0;
}
