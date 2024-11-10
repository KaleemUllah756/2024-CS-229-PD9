#include <iostream>
using namespace std;
int main(){

string movies[5]={"gladiator","starwars","terminator","takinglives","tombrider"};



string moviename;
cout<<"Enter the movie name: ";
cin>>moviename;
int price=500;
bool found=false;
for(int i=0; i<5; i++){
if(movies[i]==moviename){
    found=true;
    float discount=(i%2==0) ? 0.10 : 0.05;
    float finalprice= price* (1- discount);
    cout<<"The ticket price for " << moviename<<" after discount is: "<<finalprice<<endl; 
break;
}


}
if(!found){
    cout<<"Movie is not available."<<endl;

}


return 0;


}