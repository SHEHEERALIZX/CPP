#include<iostream>
using namespace std;

class student {
    int reg_no;
    char name[35];
    int m1,m2,m3;  //m represents marks m1 = mark1
    
    public :
     
        

        student(){
            cout<<"Constructor Working !!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
        }


        void read_data();

        void display_data();
    
};


void student::read_data(){
    

    cout<<"Enter the name of student :";
    cin>>name;
    cout<<"Enter the student register number : ";
    cin>>reg_no;
    cout<<"Enter three marks : ";
    cin>>m1>>m2>>m3;

}


void student::display_data(){

    cout<<"Name of the student  : "<<name<<endl;
    cout<<"Register no : "<<reg_no<<endl;
    cout<<"Total marks : "<<m1+m2+m3<<endl;
}


int main(){
    student s1;
    s1.read_data();
    s1.display_data();
    return 0;
}