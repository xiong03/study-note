#include<iostream>
using namespace std;

int main()
{
	
	//��ά����������;
	
	//1�����Բ鿴�ڴ�ռ��С
	int arr[2][3] =  
	{
		{1,2,3},
		{4,5,6}
	};
	cout <<"��ά����ռ���ڴ�ռ�Ϊ��"<< sizeof(arr) << endl;
	cout <<"��ά�����һ��ռ���ڴ�Ϊ��"<< sizeof(arr[0]) << endl;
	cout <<"��ά�����һ��Ԫ��ռ���ڴ�Ϊ��"<< sizeof(arr[0][0]) << endl;
	cout <<"��ά��������Ϊ��"<< sizeof(arr) / sizeof(arr[0]) << endl;
	cout <<"��ά��������Ϊ��"<< sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
	
	//2�����Բ鿴��ά������׵�ַ
	cout <<"��ά�����׵�ַΪ��"<< (long long)arr << endl;
	cout <<"��ά�����һ���׵�ַΪ��"<< (long long)arr[0] << endl;
	cout <<"��ά����ڶ����׵�ַΪ��"<< (long long)arr[1] << endl;
	
	cout <<"��ά�����һ��Ԫ���׵�ַΪ��"<< (long long)&arr[0][0] << endl;
	cout <<"��ά����ڶ���Ԫ���׵�ַΪ��"<< (long long)&arr[0][1] << endl;
	
	system("pause");
	
	return 0;
}
