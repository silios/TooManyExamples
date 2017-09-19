//GuessMyNumber - The classic number guessing game

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

void example1() {
  cout << "Example1() was called" << "\n\n";
  for(int i = 0; i < 20; i++) {
    for(int j = 0; j < i; j++) {
      cout << j;
    }
    cout << endl;

  }
}


void example2() {
  cout << "Example2() was called" << "\n\n";
}


int main() {
  int selection;
  cout << "\tWelcome to Too Many Examples :D\n\n";
  cout << "Choose an example 1,2,3 etc..\n";
  cin >> selection;

  // while (selection != 0) {


  switch (selection) {
    case 1:
      example1();
      break;
    case 2:
      example2();


      break;
    default:
      break;
  }
  //}
  cout << "\t\t!!GAME OVER!!\n\n";
  return 0;
}

