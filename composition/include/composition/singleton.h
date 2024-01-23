#include <iostream>

#pragma once

class Singleton {
public:
  // Static method to access the singleton instance
  static Singleton *getInstance() {
    // If the instance doesn't exist, create it
    if (!instance) {
      instance = new Singleton();
    }
    return instance;
  }

  // Public method to perform some operation
  void someOperation() {
    std::cout << "Singleton is performing some operation." << std::endl;
  }

  // Delete the copy constructor and assignment operator
  Singleton(const Singleton &) = delete;
  Singleton &operator=(const Singleton &) = delete;

private:
  // Private constructor to prevent external instantiation
  Singleton() { std::cout << "Singleton instance created." << std::endl; }

  // Private destructor to prevent external deletion
  ~Singleton() { std::cout << "Singleton instance destroyed." << std::endl; }

  // Private static instance variable
  static Singleton *instance;
};

Singleton *Singleton::instance = 0;