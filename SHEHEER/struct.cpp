#include<iostream>
using namespace std;

struct parent {
    char name[20];
    int mark1;
    int mark2;
    int mark3;
    float average;

    

};

int main()
{ 
    struct parent child[5];
    int limit;

    cout<<"Enter the number of students :";

    cin>>limit; 

    for(int i = 0; i < limit; i++){
        cout<<"Enter the Name : ";
        cin>>child[i].name; 

        cout<<"Enter the "<<i+1 <<" mark: ";
        cin>>child[i].mark1;

        cout<<"Enter the "<<i+1 <<" mark: ";
        cin>>child[i].mark2;

        cout<<"Enter the "<<i+1 <<" mark: ";
        cin>>child[i].mark3;

        child[i].average = (child[i].mark1 + child[i].mark2 + child[i].mark3) / 3 ;

        cout<<"Average mark of "<<child[i].name<<" : "<<child[i].average<<endl;

        
        
    


    }





 return 0;
}
