#include "Professional.h"



Professional::Professional(string name, double monthlySalary, int vacationDays) : Employee(name, 0), monthlySalary(monthlySalary), vacationDays(vacationDays) {}

double Professional::CalculateWeeklySalary(double hoursWorked) {
  return monthlySalary / 4; // Assuming a month has 4 weeks
}

double Professional::CalculateHealthCareContributions() {
  return monthlySalary * 0.1; // 10% of monthly salary for health care contributions
}

int Professional::CalculateVacationDaysEarned() {
  return vacationDays; // Returns how many vacation days have been earned
}
