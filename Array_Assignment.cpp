#include<iostream>
using namespace std;
int main()
{
	int arr[10],j,sum=0;
	cout<<"Enter 10 numbers :"<<endl;
	for(j=0; j<10; j++)
	{
		cin>>arr[j];
	}
	for(int j=0; j<10; j++){
	if (j==3||j==5){
		continue;
	}
	else{
	sum=sum+arr[j];
	}
	}
	cout<<"sum of array : "<<sum<<endl;
	cout<<endl;
	cout<<"Output of array in orginal order:"<<endl;
	for(j=0;j<10;j++)
	cout<<arr[j]<<endl;
	cout<<endl;
	cout<<"Output of array in reverse order:"<<endl;
	for(j=9;j>=0;j--)
	cout<<arr[j]<<endl;
	return 0;
}
