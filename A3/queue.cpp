#include "queue.h"

int main() {
  myQueue newQueue;

  newQueue.enqueue(1);
  newQueue.enqueue(2);
  newQueue.enqueue(3);
  newQueue.enqueue(4);
  newQueue.enqueue(5);

  cout << "Front element: " << newQueue.front() << endl;
  cout << "Dequeued element: " << newQueue.dequeue() << endl;
  cout << "Is the queue empty? " << (newQueue.isEmpty() ? "Yes" : "No") << endl;
  cout << "Number of elements in the queue: " << newQueue.size() << endl;

  return 0;
}
