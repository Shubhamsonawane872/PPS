#include<iostream>
using namespace std;

class Rectangle{
  private:
  int length;
  int breadth;
  
  public:
  //Default Constructor
  Rectangle(){
    length = 0;
    breadth = 0;
  }
  
  //Parameterized Constructor
  Rectangle(int l, int b){
    length = l;
    breadth = b;
  }
  
  //Method to Calculate the area
  int area(){
    return length * breadth;
    
  }
  
  //Method to display dimensions
  void display(){
    cout<<"Length: "<<length<<", Breadth: "<<breadth<<endl;
    
  }
};

int main(){
  //Creating objects using different Constructor
  
  //object using default Constructor
  Rectangle rect1;
  cout<<"Rectangle 1 - ";
  rect1.display();
  cout<<"Area: "<<rect1.area()<<endl;
  
  //Object using Parameterized Constructor
  Rectangle rect2(10, 5);
  cout<<"\nRectangle 2 - ";
  rect2.display();
  cout<<"Area: "<<rect2.area()<<endl;
  
  return 0;
  
}