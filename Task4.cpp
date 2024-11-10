#include <iostream>
using namespace std;
bool contain_seven_number(int number){
while(number>0){
    if(number%10==7){
        return true;
    }
    number/=10;

}
return false;


}
int main(){
int n;
cout<<"Enter the number of elements: ";
cin>>n;

int arr[n];
cout<<"Enther the elements: ";
for(int i=0; i<n; i++){
    cin>> arr[i];
}

bool foundseven=false;
for(int i=0; i<n;i++){
    if(contain_seven_number(arr[i])){
        foundseven=true;
        break;
    }
}

if(foundseven){
    cout<<"Boom!"<<endl;
}else{
    cout<<"There is no 7 in the array"<<endl;
}

return 0;













}