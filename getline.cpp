/*************************************************************************
	> File Name: getline.cpp
	> Author: longing
	> Mail: du_303412@163.com 
	> Created Time: 2016年05月25日 星期三 00时30分07秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
	string str;
	cout << "Please enter your name\n";
	getline(cin, str);
	cout << "Hello, " << str << "!\n";
	return 0;
}
