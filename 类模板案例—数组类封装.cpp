#include <iostream>
using namespace std;
#include"MyArray.hpp"

void printArray(MyArray<int>& arr1)
{
	for(int i = 0; i < arr1.getSize(); i++)
	{
		cout << arr1[i] << endl;
	}
}

void test01()
{
	MyArray<int>arr1(5);
	
	for(int i = 0; i < 5; i++)
	{
		//利用尾插法向数组中插入数组
		arr1.Push_Back(i);
	}
	
	cout <<"arr1的打印输出为："<< endl; 
	printArray(arr1);
	
	cout <<"arr1的容量为："<< arr1.getCapacity() << endl;
	cout <<"arr1的大小为："<< arr1.getSize() << endl;
	
//	MyArray<int>arr2(arr1);
	
//	MyArray<int>arr3(100);
//	arr3 = arr1;
}

int main()
{
	test01();
	
	system("pause"); 
	
	return 0;
}
