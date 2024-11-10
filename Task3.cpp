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