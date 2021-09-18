#include <iostream>
using namespace std;
int main()
{
	
	int array2D[100][100];
	int row, col;
	cout<<"Nhap so hang"<<endl;
	cin>>row;
	cout<<"Nhap so cot"<<endl;
	cin>>col;
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			cin>>array2D[i][j];
		}
	}
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			cout<<"mang vua nhap:"<<array2D[i][j];
		}
		cout<<endl;
    }
}

