#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> arr;

    arr.push_back(5);
    arr.push_back(6);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    arr.pop_back();
    cout<<"After Pop "<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    vector <int> brr(10);

    cout<<"Size is :" << brr.size()<<endl;
    cout<<"Capacity is :"<<brr.capacity()<<endl;
 
    return 0;
}
