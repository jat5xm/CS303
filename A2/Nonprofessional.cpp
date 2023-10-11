#include "Nonprofessional.h"



Nonprofessional::Nonprofessional(string name, int vacationHours) : Employee(name, 10), vacationHours(vacationHours) {} // Hourly rate is set to 10

double Nonprofessional::CalculateWeeklySalary(double hoursWorked) {
  return hourlyRate * hoursWorked; // Formula for calculating a weekly salary
}

double Nonprofessional::CalculateHealthCareContributions() {
  return hourlyRate * 40 * 0.05; // Assuming 5% of the weekly salary for health care contributions
}

int Nonprofessional::CalculateVacationDaysEarned() {
  return vacationHours / 8; // Assuming 8 hours of work for 1 vacation day
}
