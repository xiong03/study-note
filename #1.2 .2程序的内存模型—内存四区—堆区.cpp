#include<iostream>
using namespace std;

//ջ�����ݵ�ע������ ������Ҫ���ؾֲ������ĵ�ַ 
//ջ���������ɱ����������ٺ��ͷ�
 
int * func (int b) //�β�����Ҳ�����ջ��
{
	b = 100;
	int a = 10; //�ֲ�����  �����ջ����ջ���������ں���ִ������Զ��ͷ�
	return &a; //���ؾֲ������ĵ�ַ
}

int main()
{
	int b = 1;
	//����func�����ķ���ֵ 
	int * p = func(1);
	cout << b << endl;
	
	cout << *p << endl; //��һ�ο��Դ�ӡ��ȷ�����֣�����Ϊ���������˱��� 
	//cout << *p << endl; //�ڶ���������ݾͲ��ٱ����� 
	
	system("pause");
	
	return 0;
 } 
