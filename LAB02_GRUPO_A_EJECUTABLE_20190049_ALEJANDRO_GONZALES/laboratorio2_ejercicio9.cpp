#include<iostream>
using namespace std;

int main()
{
	int x;
	cout<<"Ingrese la altura de su triangulo: ";
	cin>>x;
	for(int i=1;i<=x;i++)
	{
		for(int j=1;j<=i;j++)
			cout<<"#";
		cout<<endl;
	}
	cin.get();
	return 0;
}
