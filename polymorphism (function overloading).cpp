#include <iostream>
using namespace std;

//function with 2 int parameters
int sum (int num1,int num2){
  return num1 + num2;
}

//function with 2 double parameters
double sum(double num1 , double num2){
  return num1 + num2;
}

//function with 3 parameters 
int sum(int num1 , int num2 , int num3){
  return num1 + num2 + num3;
}

int main (){
  //call function with 2 int parameters 
  cout << "sum 1 ="<< sum(5,7)<< endl;


  //call function with 2 double parameters
  cout << "sum2 =" << sum (5.5, 8.4) << endl;
  
  // call function with 3 parameters
  cout << "sum3 = " << sum(5,8,9) << endl;
  
return 0;
}