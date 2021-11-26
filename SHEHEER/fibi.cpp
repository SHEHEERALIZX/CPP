#include<iostream>
using namespace std;
int main()
{
    int limit,a =1 ,b = 1,c,i = 2;
    cout<<"Fibinocci series up to limit : ";
    cin>>limit;
    cout<<a<<"\n"<<b;
    
    do {
        c = a + b; 
        cout<<"\n"<<c;
        c = a + b;
        a = b;
        b = c;
        i++;
        
    }
    while(limit>i);
    return 0 ;
    
}
