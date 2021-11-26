#include<iostream>
using namespace std;
int main()
{
    int inp,rem=0,output=0;
    cout<<"Enter a 5  digit number :";
    cin>>inp;
    while(inp > 0)
    {
        rem = inp%10;
        // printf("%d",rem);
        output = output*10 + rem;
        inp = inp/10;
    }   
    
    cout<<output;
    return 0 ;
    
}