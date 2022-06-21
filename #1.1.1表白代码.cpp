#include <iostream>
using namespace std; //调用基本输入输出库
int main()
{
	int i, j;
	cout << "      *******    *******" << endl << "   ***********  **********" << endl << " ************* *************" << endl;
	//前三排的规律性不强 直接显示
	for (i = 0; i < 3; i++)//显示中间三排
	{
		for (j = 0; j < 29; j++)
			cout << "*";
		cout << endl;
	}
	for (i = 0; i < 7; i++)//显示呈递减趋势规律的中间7排
	{
		for (j = 0; j < 2 * (i + 1) - 1; j++)
			cout << " ";
		for (j = 0; j < 27 - i * 4; j++)
			cout << "*";
		cout << endl;
	}
	for (i = 0; i < 14; i++)//最后一个星号*与上面的规律脱节了 所以独立显示
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
 
	cout << "1              我爱你一生一世             0" << endl;
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
