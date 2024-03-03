#include<iostream>
using namespace std;
int main(){
int arr[]={0,0,1,0,1,0,1,0,1,0,1,1,0};
int size =13;

int num0=0;
int num1=0;

for (int i = 0; i < size; i++)
{
    if(arr[i]==0){
        num0++;
    }
    else{
        num1++;
    }
}
cout<<"total numberof 0 is "<<num0<<endl;
cout<<"total numberof 1 is "<<num1<<endl;
return 0;
}