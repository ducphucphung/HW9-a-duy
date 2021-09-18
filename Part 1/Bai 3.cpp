#include <iostream>
using std namespace;
int main()
{
	//xoa mot hang
	int array2D[3][5] = 
    {
	    { 1,  2,  3,  4,  5 },  
	    { 6,  7,  8,  9,  10 },
	    { 11, 12, 13, 14, 15 } 
    };
    int delrow=0;
    cout<<"nhap hang muon xoa:"<<endl;
    cin>>delrow;
    for(int i=0; i<5; i++)
    {
    	array2D[delrow-1][i]=array2D[delrow][i];
	}
	for(int i=0; i<2;i++)
	{
		for(int j=0; j<5;j++)
		{
			cout<<array2D[i][j];
		}
	}
	//ham hoan doi hang
	int swap=0
	cout<<"Nhap so hang muon hoan doi"
	for(int j=0; j<5; j++)
	{
		swap=array[0][j];
		array[0][j]=array[1][j];
		array[1][j]=swap
	}
	for(int i=0; i<2;i++)
	{
		for(int j=0; j<5;j++)
		{
			cout<<array2D[i][j];
		}
	}	
	//xoa mot cot
	int delcol=0;
    cout<<"nhap cot muon xoa:"<<endl;
    cin>>delcol;
    for(int i=0; i<2; i++)
    {
    	array2D[i][delcol-1]=array2D[i][delcol];
	}
	for(int i=0; i<2;i++)
	{
		for(int j=0; j<5;j++)
		{
			cout<<array2D[i][j];
		}
	}
	//hoa doi cot
	int swapcol=0
	cout<<"Nhap so cot muon hoan doi"
	for(int j=0; j<2; j++)
	{
		swap=array[j][0];
		array[j][0]=array[j][1];
		array[j][1]=swapcol
	}
	for(int i=0; i<2;i++)
	{
		for(int j=0; j<5;j++)
		{
			cout<<array2D[i][j];
		}
	}	
}
