#include <iostream>
#include<time.h>
#include <stdlib.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void nhapmang(int m[],int n)
{
	srand(time(NULL));
	for(int i=0;i<n;i++)
	{
		m[i]=rand()%100;
	}
}
void xuatmang(int m[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<m[i]<<"\t";
	} 
}
void bubblesort(int m[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=n-1;j>i;j--)
		{
			if(m[j]<m[j-1])
		{
			int temp=m[j];
			m[j]=m[j-1];
			m[j-1]=temp;
		}
		}
	}
}
int main(int argc, char** argv) {
	int n;
	cout<<"nhap n:";
	cin>>n;
	int m[n];
	nhapmang(m,n);
	cout<<"mang sau khi nhap:\n";
	xuatmang(m,n);
	bubblesort(m,n);
	cout<<"\nbubble sort sau khi nhap:\n";
	xuatmang(m,n);
	
	return 0;
}
