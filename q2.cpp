#include <iostream>

#include<stdio.h>
#include <string>
using namespace std;


int cube();

int main () 
{


cube();
	
	
}


int cube()
{	
	int r,c;
	
	cout << "enter rows: ";
	cin >> r;
	cout << "enter cols: ";
	cin >> c;
	
	
	int arr[r][c];
	
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){

			cout << "arr["<<i<<"]["<<j<<"]: ";
			cin >> arr[i][j];
		}
		cout << endl;
	}
					
	int *p[r][c];
					
		
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			
			p[i][j] = &arr[i][j];

			cout << arr[i][j]*arr[i][j]*arr[i][j] << " ";
		}
		cout << endl;
	}
}