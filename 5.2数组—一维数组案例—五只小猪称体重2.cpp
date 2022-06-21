#include<iostream>
using namespace std;

int main()
{
	int max = 0;
	int arr[5] = {300,350,200,400,250};
	//循环三目运算符 
	for(int i = 0; i < 5; i++)
	{
		max = (max > arr[i] ? max : arr[i]); 
	}
	cout <<"最重的小猪为："<< max << endl;
	
	system("pause");
	
	return 0;
}
