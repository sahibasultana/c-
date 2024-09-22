#include <iostream>
using namespace std;
int main(){
int n;
cout<<"Enter size of your array: "; cin>>n;
int arr[n];
cout<<endl;
for(int i = 0; i < n; i++){
cout<<"Enter the value for position "<<i<<": ";
cin >> arr[i];
}
int value;
cout<<"\nEnter the value that you want to search: ";
cin>> value;
for(int i = 0; i < n; i++){
if (value == arr[i]){
cout<<"\nThe value "<<value<< " was found at the position: "<<i+1;
break;
}
}
return 0;}
