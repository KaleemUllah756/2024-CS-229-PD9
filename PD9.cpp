//Task 1
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

//Task 2
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

//Task 3
#include <iostream>
using namespace std;
int main(){
char string[100];

cout<<"Enter the string: ";
cin>>string;

int length=0;
while(string[length]!='\0'){
    length++;
}
if(length%2==0){
    cout<<"true"<<endl;
}else{
    cout<<"false"<<endl;
}
return 0;

}

//Task 4
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

//Task 5
#include <iostream>
using namespace std;
bool all_same(string array[], int size){
for(int i=1; i< size; i++){
    if(array[i] != array[0]){
        return false;
    }
}
return true;

}
int main(){
   
string array[4];
cout<<"Enter the elements: ";
for(int i=0; i<4; i++){
    cin>>array[i];
}

if(all_same(array, 4)){
    cout<<"True"<<endl;
}else{
    cout<<"False"<<endl;
}
return 0;
}

//Task 6
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

//Task 8
#include <iostream>
using namespace std;
int calculatecoloringtime(string colors[], int size){
if (size==0)
return 0;

int time=2;
for(int i=2; i< size;i++){
    time=time+2;
    if(colors[i] != colors[i-1]){
        time=time+1;
    }
}
return time;

}
int main(){

string colors[100];
int size=0;
string color;
cout<<"Enter the colors of the squares(enter done to stop): "<<endl;
while(true){
    cin>>color;
    if(color=="done")
    break;
    colors[size++]=color;
}
cout<<calculatecoloringtime(colors,size)<<endl;

return 0;
}

//Task 9
#include <iostream>
using namespace std;
int main() {
    char* MOVES[] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", 
        "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    char pin[5];
    cout << "Enter a 4-digit PIN: ";
    cin >> pin;
    bool valid = true;
    for (int i = 0; i < 4; ++i) {
        if (pin[i] < '0' || pin[i] > '9') {
            valid = false;
            break;
        }
    }

    if (!valid || pin[4] != '\0') {
        cout << "Invalid input." << endl;
        return 0;
    }
    for (int i = 0; i < 4; ++i) {
        int digit = pin[i] - '0'; 
        int moveIndex = (digit + i) % 10;
        cout << MOVES[moveIndex] << " ";
    }
    cout << endl;

    return 0;
}
