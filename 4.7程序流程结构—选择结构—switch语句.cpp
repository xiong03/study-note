#include<iostream> 
using namespace std;

int main()
{
	//switch���
	//����Ӱ���д��
	//10~9  ����
	// 8~7  �ǳ���
	// 6~5  һ��
	//5���� ��Ƭ
	
	//1����ʾ�û�����Ӱ����
	cout <<"�����Ӱ���д��"<< endl; 
	//2���û���ʼ���д��
	int score = 0;
	cin >> score;
	cout <<"����ķ���Ϊ��"<< score << endl;
	//3�������û�����ķ�������ʾ�û����Ľ��
	
	switch(score)
	{
	
	case 10://ע����ð�Ų��Ƿֺ� 
		cout <<"����Ϊ�Ǿ����Ӱ"<< endl;
		break; //�˳���ǰ��֧
		
	case 9://ע����ð�Ų��Ƿֺ� 
		cout <<"����Ϊ�Ǿ����Ӱ"<< endl;
		break; //�˳���ǰ��֧
		
	case 8://ע����ð�Ų��Ƿֺ� 
		cout <<"����Ϊ��Ӱ�ǳ���"<< endl; 
		break; //�˳���ǰ��֧
		
	case 7://ע����ð�Ų��Ƿֺ� 
		cout <<"����Ϊ��Ӱ�ǳ���"<< endl;
		break; //�˳���ǰ��֧
		
	case 6://ע����ð�Ų��Ƿֺ� 
		cout <<"����Ϊ��Ӱһ��"<< endl;
		break; //�˳���ǰ��֧
		
	case 5://ע����ð�Ų��Ƿֺ� 
		cout <<"����Ϊ��Ӱһ��"<< endl;
		break; //�˳���ǰ��֧
		
	default:
	    cout <<"����Ϊ������Ƭ"<< endl;
		break; //�˳���ǰ��֧		 
	}
	//if��switch������
	//switchȱ�㣺�ж�ʱ��ֻ�������λ����ַ��ͣ���������һ������
	//switch�ŵ㣺�ṹ������ִ��Ч�ʸ�
	 
	system("pause");
	
	return 0;
}
