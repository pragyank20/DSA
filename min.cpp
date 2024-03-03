#include<iostream>
#include<limits.h>
using namespace std;
int main(){
int arr[]={2,4,6,7,8,56,41,23,77,49};
int size =10;
int mini=INT_MAX;

for (int i = 0; i < size; i++)
{
    if(arr[i]<mini)
    mini=arr[i];
}
cout<<mini<<endl;
return 0;
}
