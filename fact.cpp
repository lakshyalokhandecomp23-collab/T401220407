#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter the value of n: ";
  cin>>n;
  int fact=1;

  if(n==0){
   cout<<"1";
  }
  else
  {
   for(int i=1;i<n+1;i++){
    fact= fact * i;
   }
  };
  
  cout<<"The factorial of " << n << " is " << fact <<endl;

  return 0;
  
}
