#include<string>
#include<iostream>
using namespace std;

string reverseString(string str)
{
	// Write your code here.
	   	int len=0;
		int a=str.size()-1;
		while(len<a){
			swap(str[len],str[a]);
			len++;
			a--;
		}
		return str;
}
