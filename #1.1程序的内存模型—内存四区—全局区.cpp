#include<iostream>
using namespace std;

//ȫ�ֱ���
int g_a = 10;
int g_b = 10;

//const���ε�ȫ�ֱ��� 
const int c_g_a = 10;
const int c_g_b = 10;

int main()
{
	//ȫ������ȫ�ֱ����;�̬��������ڴˣ�ȫ�����������˳��������ַ�������������������const���εı�����Ҳ����ڴ� 
	
	//ȫ�ֱ�������̬����������
	
	
	//������ͨ�ֲ�����
	int a = 10;
	int b = 10;
	
	cout <<"�ֲ�����a��ַΪ��"<< (long long)&a << endl; 
	cout <<"�ֲ�����b��ַΪ��"<< (long long)&b << endl; 
	
	cout <<"ȫ�ֱ���g_a�ĵ�ַΪ��"<< (long long)&g_a << endl;
	cout <<"ȫ�ֱ���g_b�ĵ�ַΪ��"<< (long long)&g_b << endl;
	
	//��̬����  ����ͨ������ǰ���static�����ھ�̬���� 
	static int s_a = 10; 
	static int s_b = 10;
	
	cout <<"��̬����s_a�ĵ�ַΪ��"<< (long long)&s_a << endl;
	cout <<"��̬����s_b�ĵ�ַΪ��"<< (long long)&s_b << endl;
	
	//����
	//�ַ�������
	cout <<"�ַ��������ĵ�ַΪ:" << (long long)&"hello world" << endl;
	
	//const���εĳ��� 
	//const���ε�ȫ�ֱ�����const���εľֲ�����
	
	cout <<"ȫ�ֳ���c_g_a�ĵ�ַδ��"<< (long long)&c_g_a << endl; 
	cout <<"ȫ�ֳ���c_g_b�ĵ�ַδ��"<< (long long)&c_g_b << endl; 
	
	const int c_l_a = 10;// c-const g-global l-local
	const int c_l_b = 10;
	
	cout <<"�ֲ�������c_l_a�ĵ�ַΪ��"<< (long long)&c_l_a << endl;
	cout <<"�ֲ�������c_l_b�ĵ�ַΪ��"<< (long long)&c_l_b << endl;
	
	system("pause");
	
	return 0;
}
