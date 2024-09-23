//C++ program to demonstrate how to inherit a class
#include<iostream>
using namespace std;

//Base class that is to be inherited

class parent{
  public:
  //base class members
  int id_p;
  void printID_p()
  {
    cout<<"Base ID: "<<id_p<<endl;
  }
};

//Sub class or derived publicly inherting from Base class(Parent)
class Child:public parent{
  public:
  //derived class members
  int id_c;
  void printID_c()
  {
    cout<<"Child ID: "<<id_c<<endl;
  }
};

//Main function

int main(){
  //creating a child class object
  Child obj1;
  /*An object of class child has all data members and member functions
  of class parent so we try accessing the parents method and data from 
  the child class object*/
  obj1.id_p = 7;
  obj1.printID_p();
  //finally accessing the child class methods and data too
  obj1.id_c = 91;
  obj1.printID_c();
  
  return 0;
  

  
}
