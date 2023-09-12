//Jair Tobias-Zamora
#include <iostream>
#include <fstream>
#include <vector>



using namespace std;

void readFileData(const string& filename, vector<int>& array) { // function for reading data from a file into an array
  ifstream file(filename); // asks for name of file to open and if the file doesn't exist, prints an error stating file couldn't be opened
  if (!file) {
    cout << "Error opening file: " << filename << endl;
    return;
  }
  //data.clear();
  vector<int> data;
  int num;
  while (file >> num) { // looks through the lines of data in the array
    data.push_back(num);
    if (data.size() == 10) {
      data.push_back(num);
      //data.clear();
    }
  }
  file.close();
}

int findInteger(const vector<int>& array, int num) { // function for finding specific number in an array
  for (int i = 0; i < array.size(); i++) { // iterates through the array, searching for specific number requested by user and returns said number
    if (array[i] == num) {
      return i;
    }
  }
  return -1;
}


/* int modifyValue(vector<int>& array, int index, int newValue) { // function to modify the value at a specified index in an array         (couldn't figure out how to get this to work, just left it incomplete)
  try { // checks to see if index is less than 0 or greater than or equal to the size of the array, if so throws an error
    if (index < 0 || index >= array.size()) {
      throw out_of_range("Index is out of range");
    }
    int row = index / 10;
    int col = index % 10;
    int oldValue = array[row][col];
    array[row][col] = newValue;
    return newValue;
  } */
    /*int oldValue = array[index]; // stores the old value before modifying              <---- seperate segment of code I didn't end up using
    array[index] = newValue; // modifies the value at the specified index
    */ 
  /*catch (...) { // handles the out-of-range exception
    cout << "Error!" << endl;
    return -1; // return -1 to indicate an error
  }
}*/

void addInteger(vector<int> &array, int num) { // function to add an integer to the end of an array
    try { // use the push_back() method to add the integer to the end of the vector
      array.push_back(num);
    } 
    catch (...) { // handles any exceptions that may occur
      cout << "Error!" << endl;
    }
}

void replaceIndex(vector<int>& array, int index, bool remove) { // function to replace the value at a given index with either 0 or remove the integer
  if (index >= 0 && index < array.size()) { // as long as the index is greater than or equal to 0 and doesn't go past the size of the array, it'll replace the chosen index or replace it with 0
    if (remove) {
      array.erase(array.begin() + index);
    } 
    else {
      array[index] = 0;
    }
  }
}
