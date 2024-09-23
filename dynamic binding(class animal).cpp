#include <iostream>
using namespace std;

// Base class
class animal{
  public :
  //virtual function for dynamic binding 
  virtual void speak()const {
    cout << "some generic animal sound" << endl;
  }
  
  //virtual destructor to ensure proper cleanup of derived objects
  virtual ~animal(){}
};

// derived class dog
class dog : public animal{
  public :
  //override the base class function
  void speak () const override {
    cout << "Woof!"<< endl;
  }
};

//derived class cat 
class cat : public animal{
  public :
  //override the base function 
  void speak () const override{
    cout << "meow" << endl;
  }
};

//function that takes a pointer to animal and calls its speak method 
void makeanimalspeak (const animal * animal){
  animal -> speak ();
}

int main (){
  //create instances of dog and cat 
  
  dog myDog;
  cat myCat;
  
  //use pointers to base class
  animal * animal1 = &myDog;
  animal * animal2 = &myCat;
  
  //cal function to make each animal speak
  makeanimalspeak(animal1);   //output : Woof!
  makeanimalspeak(animal2);   //output : meow
  
  return 0;
}