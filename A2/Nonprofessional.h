#pragma once
#include "Employee.h"



class Nonprofessional : public Employee {
public:
  Nonprofessional(string name, int vacationHours);
  double CalculateWeeklySalary(double hoursWorked) override; // I learned what override does from https://stackoverflow.com/questions/39932391/should-i-use-virtual-override-or-both-keywords
  double CalculateHealthCareContributions() override;        // At first, I had a compilation error trying to run these functions until I figured out that override is needed when a
  int CalculateVacationDaysEarned() override;                // virtual function in a class is derived from some base class providing a virtual function of the same signature

private:
  int vacationHours;
};
