/*************************************************************************
	> File Name: hello.cpp
	> Author: longing
	> Mail: du_303412@163.com 
	> Created Time: 2016年05月24日 星期二 23时30分08秒
 ************************************************************************/

#include<iostream>

using namespace std;

int main(int argc, char *argv[])
{
	string s1 = "hello";
	string s2 = "world";
	string s3 = s1 + ", " + s2 + "!\n";
	cout << "Hello, world\n";
	cout<<s3;
	string s = s3.substr(0, 5);
	cout << s << "\n";
	return 0;
}

