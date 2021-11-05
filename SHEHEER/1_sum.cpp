#include<iostream>
using namespace std;
int main(){
    int limit,arr[25],sum = 0;
    cout<<"Enter limit : ";
    cin>>limit;


    for(int i = 0;i<limit;i++){
        cout<<"Enter the "<<i+1<<" number : ";
        cin>>arr[i];
        sum = sum + arr[i];
    }


cout<<"Sum of "<<limit<<sum;





	return 0;
}
