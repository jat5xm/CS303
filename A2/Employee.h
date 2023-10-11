#pragma once
#include <iostream>

using namespace std;



class Employee {
public:
  Employee(string name, double hourlyRate);
  virtual double CalculateWeeklySalary(double hoursWorked) = 0; // Pure virtual function
  virtual double CalculateHealthCareContributions() = 0; // Pure virtual function
  virtual int CalculateVacationDaysEarned() = 0; // Pure virtual function

protected:
  string name;
  double hourlyRate;
};
