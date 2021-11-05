#include<iostream>
using namespace std;
int main(){
    int limit,arr[25],key;
    cout<<"Enter limit : ";
    cin>>limit;


    for(int i = 0;i<limit;i++){
        cout<<"Enter the "<<i+1<<" number : ";
        cin>>arr[i];
    }

    cout<<"Enter the search key : ";
    cin>>key;

    for (int i = 0;i<limit-1;i++)
    {
       if(key==arr[i]){
           cout<<"The value found at "<<i+1;
           return 0;
       }
    }

    cout<<"The value not found!!!!!!!!!!!!";



	return 0;
}
