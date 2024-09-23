#include<iostream>
using namespace std;

//Base class
class Animal{
  public:
  //Virtual function for dynamic binding
  virtual void speak()const{
    cout<<"Some generic animal sound: "<<endl;
  }
  
  //Virtual destrutor to ensure proper cleanup of derived objects
  virtual ~Animal(){}
  
};

//derived class Dog
class Dog : public Animal{
  public: 
  //Override the base class function
  void speak() const override{
    cout<<"Woof!"<<endl;
  }
};

//derived class cat
class Cat : public Animal{
  public:
  //Override the base class function
  void speak() const override{
    cout<<"Meow!"<<endl;
  }
};

//Function that takes a pointer to Animal and calls its speak method
void makeAnimalSpeak(const Animal* animal){
  animal->speak();
  
}

int main(){
  //Create instances of Dog and Cat
  
  Dog myDog;
  Cat myCat;
  
  //Use pointers to base class
  Animal*animal1 = &myDog;
  Animal*animal2 = &myCat;
  
  //Call function to make each animal speak
  makeAnimalSpeak(animal1);    //Output: Woof!
  makeAnimalSpeak(animal2);    //Output: Meow!
  
  return 0;
  
}