#include<iostream>
using namespace std;
int main(){

    float num1,num2;
    char operand;


  

    do 
    {
    cout<<"\n";
    
    cout<<"Enter two numbers : \n";
    cin>>num1>>num2;
    cout<<"Choose a Operation type : \n ";
    cout<<"+ for Addition\n ";
    cout<<"- for Difference\n ";
    cout<<"* for Multiplication\n ";
    cout<<"/ for division\n ";
    cout<<"Q for quit\n ";

    cin>>operand;
    switch(operand){


        case '+' :
        cout<<"Sum is "<<num1+num2;
        break;
        
        case '-' :
        cout<<"Difference is "<<num1-num2;
        break;

        case '*' :
        cout<<"Multipliation is "<<num1*num2;
        break;

        case '/' :
        cout<<"Divison is  is "<<num1/num2;
        break;
        
        default:
        cout<<"You fool";
         }
    }
        while(operand !='q');
return 0;
}