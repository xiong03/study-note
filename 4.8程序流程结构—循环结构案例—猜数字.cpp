#include<iostream>
using namespace std;
#include<stdlib.h>
 
int main()
{
	//1��ϵͳ���������
	
    int num = rand() % 100 + 1; // rand()%100 + 1 ϵͳ�Զ����� 0 + 1 ~ 99 + 1 ������� 
	//cout << num << endl;
	cout << "��������һ������"<< endl;
	 
	//2����ҽ��в²�
	int val = 0;//������������
	
	while (1)
	{
		cin >> val;
	 
	    //3���ж���ҵĲ²�
	
	    //�´���ʾ�µĽ����������߹�С�����·��ص�2��
	    if(val > num)
	    {
		    cout <<"�²����"<< endl;
	    }
	    else if(val < num)
	    {
		    cout <<"�²��С"<< endl; 
	    }
	    else if(val == num)
	    {
		    cout <<"��ϲ��¶���"<< endl; 
	    //�¶ԡ��˳���Ϸ
		break;    
		}
	    
    }
	
	
	
	 
	system("pause");
	
	return 0;
}
