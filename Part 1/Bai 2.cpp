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
	
	cout<<"Nhap cac phan tu cho mang: "<<endl;
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			cin>>array2D[i][j];
		}
	}
	
	cout<<"Mang co duoc la: "<<endl;
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			cout<<array2D[i][j]<<" ";
		}
		cout<<endl;
    }
    
    //tinh tong cac hang
    int sum=0;
    int arr_sum[1][10];
    for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			sum+= array2D[i][j];
		}
		arr_sum[1][i]=sum;
		sum=0;
	}
	
	cout<<"Tong cac phan tu tung hang cua mang la: ";
	for(int i=0; i<row; i++)
	{
		cout<<arr_sum[1][i]<<" ";
	}

	//cau b
	int k, tmp
	for(i=0; i<row; i++)
	{
		for(j=0; j<col-1; j++)
		{
			for(k=j+1; k<col; k++)
			{
				if(array2D[i][j]>array2D[i][k])
				{
					tmp=array2D[i][j]
					array2D[i][j]=array2D[i][k]
					array2D[i][j]=tmp
				    	
				}
			}
		}
	}
	cout<<"Mang co duoc la: "<<endl;
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			cout<<array2D[i][j]<<" ";
		}
		cout<<endl;
    }
	
	//cau c
	int bien=0;
	int arr_bien1[100];
	int arr_bien2[100];
	int arr_bien3[100];
	int arr_bien4[100];
	for(int i=0; i<row; i++)
	{
		bien=array2D[i][0];
		arr_bien1=bien;
		bien=0
	}
	cout<<arr_bien1;
	for(int i=0; i<row; i++)
	{
		bien=array2D[i][col-1];
		arr_bien2=bien;
		bien=0
	}
	cout<<arr_bien2
	for(int j=1; i<col-1; j++)
	{
		bien=array2D[0][j];
		arr_bien3=bien;
		bien=0
	}
	cout<<arr_bien3;
	for(int j=1; i<col-1; j++)
	{
		bien=array2D[row-1][j];
		arr_bien4=bien;
		bien=0
	}
	cout<<arr_bien4;
	
    
	//d
	int cheo=0;
	int arr_bien[10];
	for (int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			if (i==j)
			{
				cheo=array2D[i][j]
			}
		}
	    arr_bien=bien
	    bien=0
	    cout<<arr_bien
	}

	
	
}

