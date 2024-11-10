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