#include <iostream>
#include <string>
using namespace std;

class student {
  public :
  //Properties
  string name ;
  int rollNumber;
  int age ;
  
  
  //Function to display student information 
  void displayInfo(){
    cout << "Name :" << name << endl;
    cout << "Roll Number : " << rollNumber << endl;
    cout << "age:"<< age << endl;
  }
};

int main (){
  // Create objects (instances) of the student class
  student s1;
  student s2; 
  
  //Set properties for  s1
  s1.name = "Alice";
  s1.rollNumber = 101;
  s1.age = 20;
  
  
  // set properties for s2
  s2.name = "bob";
  s2.rollNumber = 102;
  s2.age = 20;
  
  //display information for each student 
  cout << "S1 information :" << endl;
  s1.displayInfo();
  cout << endl; // For better readability
  
  cout << "S2 information :" << endl;
  s2.displayInfo();
  
  
  return 0;
} 