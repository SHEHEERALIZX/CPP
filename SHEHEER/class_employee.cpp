#include<iostream>
using namespace std;

class employee {
    int emp_no,grosspay,netpay;
    char name[35];
    int bp,da,hra,lic,pf; //m represents marks m1 = mark1

    
    public :
     
     
        void read_data();

        void display_data();
    
};


void employee::read_data(){
    

    cout<<"Enter the name :";
    cin>>name;
    cout<<"Enter the employee number : ";
    cin>>emp_no;
    cout<<"Enter basic pay : ";
    cin>>bp;
    cout<<"Enter DA : ";
    cin>>da;
    cout<<"Enter HRA : ";
    cin>>hra;
    cout<<"Enter PF : ";
    cin>>pf;
    cout<<"Enter LIC : ";
    cin>>lic;

}


void employee::display_data(){
    grosspay = bp + da + hra;
    netpay = grosspay - (pf - lic);

    cout<<"Net salary of "<<name<<" is : "<<netpay;

}


int main(){
    employee e1;
    e1.read_data();
    e1.display_data();
    return 0;
}