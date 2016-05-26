/*************************************************************************
	> File Name: count.cpp
	> Author: longing
	> Mail: du_303412@163.com 
	> Created Time: 2016年05月26日 星期四 00时05分10秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<iterator>
using namespace std;

int count(const string& s, char c);

int main()
{
	string m = "Mary had a little lamb";
	int a_count = count(m, 'a');
	cout << a_count << endl;
	return 0;
}

int count(const string& s, char c)
{
	int n = 0;
	string::const_iterator i = find(s.begin(), s.end(), c);
	while (i != s.end()){
		++n;
		i = find(i+1, s.end(), c);
	}
	return n;
}
