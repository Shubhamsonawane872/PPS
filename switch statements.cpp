#include<iostream>
using namespace std;

//Driver Code
int main()
{
  //Switch variable
  char x = 'A';
  
  //switch statements
  switch(x)
  {
    case'A':
    cout<<"Choice is A";
    break;
     case'B':
    cout<<"Choice is B";
    break;
     case'C':
    cout<<"Choice is C";
    break;
    default:
    cout<<"Choice other than A,B and C";
    break;
  }
  
  return 0;
  
}