//GuessMyNumber - The classic number guessing game

#include <iostream>


using namespace std;

void HalfPyramid() {
  int rows;
  int printType;

  cout << "Enter number of rows: ";
  cin >> rows;

  cout << "Print with numbers(1) or *(2): ";
  cin >> printType;
  cout << "\n";

  for(int i = 1; i <= rows; ++i) {
    for(int j = 1; j <= i; ++j) {
      if(printType == 1) {
        cout << j;
      } else {
        cout << "*";
      }
    }
    cout << "\n";
  }
}


void InvertedHalfPyramid() {
  int rows;
  int printType;

  cout << "Enter number of rows: ";
  cin >> rows;

  cout << "Print with numbers(1) or *(2): ";
  cin >> printType;
  cout << "\n";

  for(int i = rows; i > 1; i--) {
    for(int j = 1; j <= i; ++j) {
      if(printType == 1) {
        cout << j;
      } else {
        cout << "*";
      }
    }
    cout << "\n";
  }
}

void Pyramid() {
  int space, rows;

  cout << "Enter number of rows: ";
  cin >> rows;
  cout << "\n";

  for(int i = 1, k = 0; i <= rows; ++i, k = 0) {
    for(space = 1; space <= rows - i; ++space) {
      cout << "  ";
    }

    while(k != 2 * i - 1) {
      cout << "* ";
      ++k;
    }
    cout << endl;
  }
}

int main() {
  int selection;
  cout << "Welcome to Too Many Examples :D\n\n";
  cout << "Choose an example : \n";
  cout << "1 - Print half pyramid with numbers or *\n";
  cout << "2 - Print inverted half pyramid with number or *\n";
  cout << "3 - Print pyramid *\n";
  cin >> selection;

  // while (selection != 0) {


  switch (selection) {
    case 1:
      HalfPyramid();
      break;
    case 2:
      InvertedHalfPyramid();
    case 3:
      Pyramid();

      break;
    default:
      break;
  }
  //}
  cout << "\n\n\t!!DONE!!\n\n";
  return 0;
}

