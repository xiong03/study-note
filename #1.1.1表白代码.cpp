#include <iostream>
using namespace std; //���û������������
int main()
{
	int i, j;
	cout << "      *******    *******" << endl << "   ***********  **********" << endl << " ************* *************" << endl;
	//ǰ���ŵĹ����Բ�ǿ ֱ����ʾ
	for (i = 0; i < 3; i++)//��ʾ�м�����
	{
		for (j = 0; j < 29; j++)
			cout << "*";
		cout << endl;
	}
	for (i = 0; i < 7; i++)//��ʾ�ʵݼ����ƹ��ɵ��м�7��
	{
		for (j = 0; j < 2 * (i + 1) - 1; j++)
			cout << " ";
		for (j = 0; j < 27 - i * 4; j++)
			cout << "*";
		cout << endl;
	}
	for (i = 0; i < 14; i++)//���һ���Ǻ�*������Ĺ����ѽ��� ���Զ�����ʾ
		cout << " ";
	cout << "*";
	cout << endl;
	for (j = 0; j < 2; j++)
		cout << "101.10.0.01.11.01.100.";
	cout << endl;
	for (j = 0; j < 2; j++)
	{
		cout << "1                                         0" << endl;
	}
 
	cout << "1              �Ұ���һ��һ��             0" << endl;
	for (j = 0; j < 2; j++)
	{
		cout << "1                                         0" << endl;
	}
 
 
	cout << "0              5201314                    1" << endl;
	for (j = 0; j < 2; j++)
	{
		cout << "1                                         0" << endl;
	}
 
 
	cout << "1              101.10.0.01.11.01.100      0" << endl;
 
	for (j = 0; j < 2; j++)
	{
		cout << "1                                         0" << endl;
	}
	for (j = 0; j < 2; j++)
		cout << "101.10.0.01.11.01.100.";
	for (j = 0; j < 4; j++)
		cout << endl;
	return 0;
}
