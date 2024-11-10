#include <iostream>
using namespace std;
void even_odd(int arr[], int size){
for(int i=0; i< size; i++){
    if(arr[i]%2==0){
        arr[i]-=2;
    }else{
        arr[i]+=2;
    }
}


}
int main(){
    int times;
int arr[3];
cout<<"Enter the array: ";
for(int i=0; i<3; i++){
    cin>>arr[i];
}
cout<<"Enter the number of times even-odd transformation need to be done: ";
cin>>times;

for(int i=0; i< times; i++){
    even_odd(arr,3);
}

cout<<"Transformed array after "<<times<<" transformations: ";
for(int i=0; i< 3; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;





return 0;


}