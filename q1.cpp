#include <iostream>

#include<stdio.h>
#include <string>
using namespace std;

int main () 
{
	string str;
	cout << "enter the string content: ";
	getline(cin, str);
	
	


string* p = &str;


string p2 = *p;


	cout << p2.length() << endl;
	
	
	
	
	
}