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
		//����β�巨�������в�������
		arr1.Push_Back(i);
	}
	
	cout <<"arr1�Ĵ�ӡ���Ϊ��"<< endl; 
	printArray(arr1);
	
	cout <<"arr1������Ϊ��"<< arr1.getCapacity() << endl;
	cout <<"arr1�Ĵ�СΪ��"<< arr1.getSize() << endl;
	
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
