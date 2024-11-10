#include <iostream>
using namespace std;
int main(){
string fruit[]={"peach", "apple", "guava", "watermelon"};
int price[]={60,70,40,30};
int size=4;

string fruitname;
cout<<"Enter the fruit name: ";
cin>>fruitname;

int quantity;
cout<<"Enter the quantity in kgs: ";
cin>>quantity;

bool found=false;
for (int i=0; i< size; i++){
    if(fruit[i]==fruitname){
        int totalbill= price[i]* quantity;
        cout<<"The total bill for "<<quantity<< " kg of "<<fruitname<< " is: "<<totalbill<<endl;
    found=true;
    break;
    }
}
if(!found){
    cout<<"Fruit not found in the list."<<endl;
}


return 0;
}