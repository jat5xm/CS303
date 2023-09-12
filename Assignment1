
//Jair Tobias-Zamora
#include "functions.h"



int main() {
  
  vector<int> array;
  
  readFileData("A1text.txt", array); // replace the text in quotations for the specific file you want to use

  int num = 13; // replace with the number you want to search for
  int searchIndex = findInteger(array, num); //calls the findInteger function to search for the user's designated number in the array
  if (searchIndex != -1) { // prints out whether the number is or is not found in the array
    cout << "Number " << num << " found at index " << searchIndex << endl;
  }
  else {
    cout << "Number " << num << " not found in the array" << endl;
  }

  int newInteger = 123; // replace with the new integer to add
  addInteger(array, newInteger);

  int changeIndex = 8; // replace with the index you want to replace/remove
  bool remove = true; // set to true to remove, false to replace with 0
  replaceIndex(array, changeIndex, remove); // calls the replaceIndex function to change a specific index

  cout << "Updated Array:" << endl; // print the updated array
  for (int num : array) {
    cout << num << " ";
    
  }
  cout << endl;
  return 0;
}
