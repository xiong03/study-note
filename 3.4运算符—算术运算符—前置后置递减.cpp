#include<iostream>
using namespace std;

int main()
{
	//1:ǰ�õݼ� 
	int a1 = 10;
	--a1;
	cout <<"a1 = "<< a1 << endl;
	 
	//2:���õݼ�
	int b1 = 10;
	b1--;
	cout <<"b1 = " << b1 << endl;
	 
	//3��ǰ�úͺ��õ����� 
	//ǰ�õݼ�
	int a2 = 10;
	int b2 = --a2*10;
	cout <<"a2 = "<< a2 << endl;
	cout <<"b2 = "<< b2 << endl;
	
	//���õݼ�
	int a3 = 10;
	int b3 = a3--*10;
	cout <<"a3 = "<< a3 << endl;
	cout <<"b3 = "<< b3 << endl; 
	system("pause");
	
	return 0;
}
