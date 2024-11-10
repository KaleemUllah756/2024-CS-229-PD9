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