#include<iostream>
using namespace std;
#include<string>
#include<ctime>
#include<stdlib.h>

int main()
{
	//���������֣����ã����õ�ǰϵͳʱ���������������ֹÿ���������һ��
	srand((unsigned int)time(NULL));
	//whileѭ��ʵ����������Ϸ
	int num = rand()%100+1; //����1~100�������
	
	int val = 0;
	
	int j;
	
	int i = 0;
	
	int time = 0;
	
	cout <<"��ȷ����Ҫ�¼��� "; 
	
	cin >> j;
	
	cout <<"���������²������"<< endl;
	 
	while(1)
	{
		cin >> val;
		i++;
		if(i >= j)
		{
			cout <<"��Ϸʧ�ܣ��˳���Ϸ"<< endl;
			break; 
		}
		else if(val > num)
		{
			cout <<"���²�����ֹ���"<< endl; 
		}
		else if(val < num)
		{
			cout <<"����������ֹ�С"<< endl; 
		}
		else if(val == num)
		{
			cout <<"��ϲ���²���ȷ"<< endl;
			break;
		}
		
	}
	system("pause");
	
	return 0;
}
