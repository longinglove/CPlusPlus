/*************************************************************************
	> File Name: io.cpp
	> Author: longing
	> Mail: du_303412@163.com 
	> Created Time: 2016年05月26日 星期四 00时23分45秒
 ************************************************************************/

#include<iostream>
#include<iterator>
using namespace std;

int main()
{
	ostream_iterator<string> oo(cout);
	*oo = "Hello, ";
	++oo;
	*oo = "world!\n";
	istream_iterator<string> ii(cin);
	string s1 = *ii;
	++ii;
	string s2 = *ii;
	cout << s1 << ' ' << s2 << endl;
}
