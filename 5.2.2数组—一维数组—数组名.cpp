#include<iostream>
using namespace std;

int main()
{
	//数组名的用途
	//1：可以通过数组名统计整个数组占用内存大小
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	cout <<"整个数组占用内存空间为："<< sizeof(arr) << endl;
	cout <<"每个元素占用内存空间为；"<< sizeof(arr[0]) << endl;
	cout <<"数组中元素的个数为："<< sizeof(arr) / sizeof(arr[0]) << endl;
	
	//2：可以通过数组名查看首地址
	cout <<"数组的首地址为："<< (long long)arr << endl;//(long long)将16进制转化为10进制
	cout <<"数组中第一个元素地址为："<< (long long)&arr[0] << endl; 
	
	//数组名是常量，不可以进行赋值 
	//arr = 100;
	 
	system("pause");
	
	return 0;
 } 
