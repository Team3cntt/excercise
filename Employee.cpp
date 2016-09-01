#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

class Employee
{
	private:
		string name;
		int salary;
	public:
		void nhap()
		{ cout<< "name : "; cin>>name;
		cout <<"salary :"; cin>> salary;
		}
		void hienthi()
		{cout << name<<","<<salary<<endl;
		}
	
};

int main(){
	Employee  E[100];
	int i,n;
	cout<<"Nhap n: "; cin>>n;
	cout<<"Nhap "<<n<<" phan tu cua mang kieu Employee :"<<endl;
{
		for(i=1; i<=n; i++)
	{
			E[i].nhap();}
			cout<<"Thong tin vua nhap la: "<<endl;
			for(i=1; i<=n; i++)
	{
			E[i].hienthi();}
		}
		

	getch();
	return 0;
}

