#include <iostream>
using namespace std; //���û������������
int main()
{
	int i, j;
	cout << "      *******    *******" << endl << "  xcf love sxy  sxy love xcf" << endl << " ************* *************" << endl;
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
	return 0;
}
