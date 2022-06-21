#include<iostream>
using namespace std;

int main()
{
    //Âß¼­ÔËËã·û¡ªÓë¡ª&&£¨shift+7Îª&£©
	int a = 10;
	int b = 10;
	 
	cout << (a && b) << endl;
	
	a = 0;
	b = 10;
	
	cout << (a && b) << endl;
	
	a = 0;
	b = 0;
	
	cout << (a && b) << endl;
	
	system("pause");
	
	return 0;
}
