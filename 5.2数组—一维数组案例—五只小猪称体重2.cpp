#include<iostream>
using namespace std;

int main()
{
	int max = 0;
	int arr[5] = {300,350,200,400,250};
	//ѭ����Ŀ����� 
	for(int i = 0; i < 5; i++)
	{
		max = (max > arr[i] ? max : arr[i]); 
	}
	cout <<"���ص�С��Ϊ��"<< max << endl;
	
	system("pause");
	
	return 0;
}
