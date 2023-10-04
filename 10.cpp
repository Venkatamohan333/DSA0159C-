#include<iostream> 
using namespace std;
int main() 
{
 int n;
 do
 {
  cout<<"enter a non negative integer:";
  cin>>n;
  if(n<0) 
  {
   cout<<"the integer you entered is negative"<<endl;
 }
}
 while(n<0);
}
