#include<iostream>
using namespace std;

int main()
{
	//1:�ַ��ͱ����Ĵ�����ʽ
	char ch ='a';
	cout << ch <<endl; 
	
	//2:�ַ��ͱ�����ռ�ڴ��С
	cout <<"char�ַ��ͱ�����ռ�ڴ棺"<<sizeof(char)<< endl;
	//3:�ַ��ͱ�����������
	//char ch2 ="b";//�����ַ��ͱ���ʱ��Ҫ�õ�����
	//char ch ='abcdef'//�����ַ��ͱ���ʱ�򣬵�������ֻ����һ���ַ� 
	
	//4:�ַ��ͱ�����ӦASCII���� 
	cout << (int)ch << endl;
	//a-97 A-65
	system("pause");
	
	return 0;
 } 
