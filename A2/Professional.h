#pragma once
#include "Employee.h"



class Professional : public Employee {
public:
  Professional(string name, double monthlySalary, int vacationDays);
  double CalculateWeeklySalary(double hoursWorked) override;
  double CalculateHealthCareContributions() override;
  int CalculateVacationDaysEarned() override;

private:
  double monthlySalary;
  int vacationDays;
};
