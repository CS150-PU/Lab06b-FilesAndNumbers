//******************************************************************************
// File name:   main.cpp
// Author:      CS Faculty
// Date:        8/22/2023
// Class:       CS150-xx (xx is your section number)
// Assignment:  Hello World
// Purpose:     Display the message Hello World to the screen
// Hours:       0.25
//******************************************************************************

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>


using namespace std;

int main () {

  const string FILE_NAME = "data/numbers.txt";
  const int SENTINEL = -999;

  ifstream inFile;
  int num, count = 0, sum = 0;

  cout << "*****************" << endl;
  cout << "Files and Numbers" << endl;
  cout << "*****************" << endl << endl;

  inFile.open(FILE_NAME);
  if (inFile.fail()) {
    cout << "Could not open file" << endl;
    return EXIT_FAILURE;
  }

  inFile.close();

  return EXIT_SUCCESS;
}
