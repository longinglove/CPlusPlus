/*************************************************************************
	> File Name: intocm.cpp
	> Author: longing
	> Mail: du_303412@163.com 
	> Created Time: 2016年05月25日 星期三 00时21分18秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
	const float factor = 2.54;
	float x, in, cm;
	char ch = 0;
	cout << "enter length: ";

	cin >> x;
	cin >> ch;
	switch (ch) {
		case 'i':
			in = x;
			cm = x*factor;
			break;
		case 'c':
			in = x/factor;
			cm = x;
			break;
		default:
			in = cm = 0;
			break;
	}
	cout << in << " in = " << cm << " cm\n";
	return 0;
}
