#include<iostream>
using namespace std;

int main()
{
	//continue���
	 
	for(int i = 0; i <= 100; i++)
	{
		//��������������ż�� �����
		if(i % 2 == 0)
		{
			continue;//����ɸѡ������ִ�е��˾Ͳ�������ִ�У�ִ����һ��ѭ��
			//break���Ƴ�ѭ������continue���� 
		} 
		cout << i << endl;
	}
	
	system("pause");
	
	return 0;
} 
