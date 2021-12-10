#include<iostream>
using namespace std;
int fact (int);
int main() {
	int num;
	cout<<"Enter number to print factorial : ";
	cin>>num;
	cout<<fact(num);

	
	return 0;
}


int  fact(int n){
	int s=1;
     if(n==1)
	 	return s ;

	else 
		return n * fact(n-1);	 

}
