#pragma once
#include <iostream>

using namespace std;


// I realized I forgot to seperate the header and .cpp files for the single linked list code but I figured I could just leave all the code for the member functions in here and use the .cpp as main to execute the code

template <typename Item_Type>
class Single_Linked_List {

private:
  struct Node {
    Item_Type data;
    Node* next;
    Node(const Item_Type& item) : data(item), next(nullptr) {}
  };

  Node* head;
  Node* tail;
  size_t num_items;

public: 

  Single_Linked_List() : head(nullptr), tail(nullptr), num_items(0) {}

// Destructor to free memory
  ~Single_Linked_List() {
    while (!empty()) {
    pop_front();
  }
}

// Function to push an item to the front of the list
  void push_front(const Item_Type& item) { 
    Node* new_node = new Node(item);
    if (empty()) {
      head = tail = new_node;
    } 
    else {
      new_node->next = head;
      head = new_node;
    }
    num_items++;
    }

// Function to push an item to the back of the list
  void push_back(const Item_Type& item) {
    Node* new_node = new Node(item);
    if (empty()) {
      head = tail = new_node;
    } 
    else {
      tail->next = new_node;
      tail = new_node;
    }
    num_items++;
    }

// Function to pop an item from the front of the list
  void pop_front() {
    if (!empty()) {
      Node* temp = head;
      head = head->next;
      delete temp;
      num_items--;
    }
  }

// Function to pop an item from the back of the list
  void pop_back() {
    if (!empty()) {
      if (head == tail) {
        delete head;
        head = tail = nullptr;
      } 
    else {
      Node* current = head;
      while (current->next != tail) {
        current = current->next;
      }
      delete tail;
      tail = current;
      tail->next = nullptr;
    }
    num_items--;
    }
  }

// Function to get the front item of the list
  Item_Type front() const {
    if (!empty()) {
      return head->data;
    }
    throw out_of_range("List is empty");
  }

// Function to get the back item of the list
  Item_Type back() const {
    if (!empty()) {
      return tail->data;
    }
    throw out_of_range("List is empty");
  }

// Function to check if the list is empty
  bool empty() const {
    return num_items == 0;
  }

// Function to insert an item at a specific index
  void insert(size_t index, const Item_Type& item) {
    if (index > num_items) {
      index = num_items; // Insert at the end
    }

    Node* new_node = new Node(item);

    if (index == 0) {
      new_node->next = head;
      head = new_node;
    } 
    else {
      Node* current = head;
      for (size_t i = 0; i < index - 1; i++) {
        current = current->next;
      }
      new_node->next = current->next;
      current->next = new_node;
    }
    num_items++;
    }

// Function to remove an item at a specific index
  bool remove(size_t index) {
    if (index >= num_items) {
      return false; // Index out of range
    }

    if (index == 0) {
      pop_front();
    } 
    else {
      Node* current = head;
      for (size_t i = 0; i < index - 1; i++) {
        current = current->next;
      }
      Node* temp = current->next;
      current->next = temp->next;
      delete temp;
      if (index == num_items - 1) {
        tail = current;
      }
      num_items--;
    }
    return true;
  }

// Function to find the position of the first occurrence of an item
  size_t find(const Item_Type& item) const {
    Node* current = head;
    size_t index = 0;
    while (current != nullptr) {
      if (current->data == item) {
        return index;
      }
      current = current->next;
      index++;
    }
    return num_items; // Item not found
  }
};
