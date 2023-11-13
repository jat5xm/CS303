#pragma once
#include <iostream>
#include <queue>

using namespace std;



class myQueue {
  private:
    queue<int> elements;

  public:
    // inserts a new element at the rear of the queue
    void enqueue(int element) {
      elements.push(element);
    }

    // removes the front element of the queue and returns it
    int dequeue() {
      if (!elements.empty()) {
        int frontElement = elements.front();
        elements.pop();
        return frontElement;
      } 
      else {
        cerr << "Queue is empty. Cannot dequeue." << endl;
        return -1; // assuming -1 is not a valid element in the queue
      }
    }

    // returns the front element present in the queue without removing it
    int front() {
      if (!elements.empty()) {
        return elements.front();
      } 
      else {
        cerr << "Queue is empty. No front element." << endl;
        return -1; // assuming -1 is not a valid element in the queue
      }
    }

    // checks if the queue is empty
    bool isEmpty() {
      return elements.empty();
    }

    // returns the total number of elements present in the queue
    int size() {
      return elements.size();
    }
};
