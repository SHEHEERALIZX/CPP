#include<iostream>
#include<cmath>
using namespace std;
int main(){

    int num1,num2,num3,disc,x1,x2;
    disc = (num2 * num2 - 4 * num1 * num3);

    cin>>num1>>num2>>num3;

    if (disc < 0 )
    cout<<" Roots are imaginary ";
else if  (disc == 0){

    x1 = -num2 / 2 * num1;
    cout<<x1;
}
else {
    x1 = (-num2 + sqrt(disc)) / 2 * num1;  
    x2 = (-num2 - sqrt(disc)) / 2 * num1;
    cout<<x1;
    cout<<x2;
}

return 0;
}