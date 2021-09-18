#include <iostream>
using namespace std;
int main()
{
	int n=0;
	int truyvan=0;
	cout<<"Nhap do dai n"<<endl;
	cin>>n;
	int arr[100];
	cout<<"Nhap mot mang"<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"Nhap so lan truy van:"<<endl;
	cin>>truyvan;
	for (int i=0; i<truyvan; i++)
	{
		int l_r[3];
		int sum=0;
		cout<<"Nhap l va r:"<<endl;
		for(int j=0; j<2; j++)
		{
			cin>>l_r[j];
		}
		sum=arr[l_r[0]]+arr[l_r[1]];
		cout<<sum<<endl;
		
	}
}
