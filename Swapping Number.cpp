#include<iostream>
using namespace std;

class book
{
	public:
		long x,y,z;
		void twovariables();
		void threevariables();
};

int main()
{
	book book1;
	book1.twovariables();
	book1.threevariables();
	return 0;
}

void book::twovariables()
{
	//Swapping Two Varibles
	cout<<"Swapping Two Variables"<<endl;
	cout<<"Input X: ";
	cin>>x;
	cout<<"Input Y: ";
	cin>>y;
	
	y=x+y;
	x=y-x;
	y=y-x;
	
	cout<<endl<<"Swapped Two Variables: "<<endl<<"X = "<<x<<endl;
	cout<<"Y = "<<y<<endl;
}

void book::threevariables()
{
	//Swapping Three Varibles
	cout<<endl<<"Swapping Three Variables"<<endl;
	cout<<"Input X: ";
	cin>>x;
	cout<<"Input Y: ";
	cin>>y;
	cout<<"Input Z: ";
	cin>>z;
	
	x=x+y;
	y=x-y;
	x=x-y; 
	z=z+x;
	x=z-x;
	z=z-x;
	
	cout<<endl<<"Swapped Three Variables: "<<endl<<"X = "<<x<<endl;
	cout<<"Y = "<<y<<endl;
	cout<<"Z = "<<z<<endl;
}
