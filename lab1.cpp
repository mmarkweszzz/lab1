#include<iostream>
using namespace std;

int main(){
cout<<"please input a number:";
int n;
cin>>n;
cout<<endl;
while(n!=1){
 cout<<n<<" ";
  if(n%2==1){
     n=n*3+1;
     }
 else  if(n%2==0){
     n=n/2;
     }
}
cout<<n;
return 0;
}
