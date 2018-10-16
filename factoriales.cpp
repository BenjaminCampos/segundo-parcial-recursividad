
#include<iostream>
#include<conio.h>

using namespace std;

int factorial(int);

int main(){
	int n;
	cout<<"de que numero desa optener su factorial"<<endl;
	cin>>n;
	cout<<"\n el factorial de su numero es :"<<factorial(n)<<"\n";
	
	
	return 0;
}

int factorial(int n){
	if(n==0)
	{
		n=1;
	}
	else{
		n=n*factorial(n-1);
	}
	return n;
}
