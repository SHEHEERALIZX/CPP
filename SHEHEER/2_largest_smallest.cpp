#include<iostream>
using namespace std;
int main(){
    int limit,arr[25],temp;
    cout<<"Enter limit : ";
    cin>>limit;


    for(int i = 0;i<limit;i++){
        cout<<"Enter the "<<i+1<<" number : ";
        cin>>arr[i];
    }

    for (int i = 0;i<limit-1;i++)
    {
        for (int j = 0; j < limit -1 ; j++){
            if(arr[j]>arr[j+1]){
            temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;
        
        }

        }
  
    }

    cout<<"Largest Number is :"<<arr[limit-1]<<"\n";
    cout<<"Smallest  Number is :"<<arr[0];


	return 0;
}
