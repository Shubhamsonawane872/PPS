#include <iostream>
#include <string>
using namespace std;

int main (){
  string str = "Hello";
  
  //concatenation 
  string greeting = str + ", World!";
  cout << "concatenation:" << greeting << endl;
  
  //substring 
  string part = greeting.substr(7,5); // Extrtacts "world"
  cout << "Substring: "<< part << endl;
  
  //Find 
  size_t pos = greeting.find("World");
  cout << "Find : 'World' found at postion" << pos << endl;
  
  //Replace
  string replaced = greeting ;
  replaced.replace(pos, 5 , "C++");
  cout << "Replace:" << replaced << endl;
  
  //INsert 
  string inserted = greeting;
  inserted.insert(5," beautiful");
  cout << "insert:" << inserted<< endl;
  
  //Erase 
  string erased = greeting ;
  erased.erase(5,7); // Removes "beautiful"
  cout << "Erase:" << erased << endl;
  
  //To uppercase
  string uppercase = greeting;
  for (char &c : uppercase) c = toupper(c);
  cout << "to uppercase:" << uppercase<< endl;
  
  //To lowercase
  string lowercase = greeting;
  for (char &c : lowercase) c = tolower(c);
  cout << "to lowercase:" << lowercase<< endl;
  
  return 0;
  
  
}