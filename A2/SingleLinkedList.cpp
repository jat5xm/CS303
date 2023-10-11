#include "SingleLinkedList.h"

int main() {
  // Example usage of the Single_Linked_List class
  Single_Linked_List<int> list;
  list.push_back(1);
  list.push_back(2);
  list.push_back(3);
  list.push_back(4);

  list.insert(2, 14);
  list.remove(1);

  cout << "Front: " << list.front() << endl;
  cout << "Back: " << list.back() << endl;
  cout << "List size: " << list.empty() << endl;

  size_t index = list.find(3);

  if (index < list.empty()) {
    cout << "Item found at index " << index << endl;
  } else {
    cout << "Item not found in the list" << endl;
  }
  return 0;
}
