#include <iostream>
#include "Professional.h"
#include "Nonprofessional.h"



int main() {
  // Tests the Professional class
  Professional profEmployee("Guy Name", 5000.0, 10);
  double profSalary = profEmployee.CalculateWeeklySalary(40); // Assuming 40 hours worked
  double profHealthCare = profEmployee.CalculateHealthCareContributions();
  int profVacationDays = profEmployee.CalculateVacationDaysEarned();

  // Tests the Nonprofessional class
  Nonprofessional nonProfEmployee("Mister Person", 80); // Assuming 80 vacation hours
  double nonProfSalary = nonProfEmployee.CalculateWeeklySalary(35); // Assuming 35 hours worked
  double nonProfHealthCare = nonProfEmployee.CalculateHealthCareContributions();
  int nonProfVacationDays = nonProfEmployee.CalculateVacationDaysEarned();

  // Prints the results
  cout << "Professional Employee: " << endl;
  cout << "Weekly Salary: $" << profSalary << endl;
  cout << "Health Care Contributions: $" << profHealthCare << endl;
  cout << "Vacation Days Earned: " << profVacationDays << endl;

  cout << "Nonprofessional Employee: " << endl;
  cout << "Weekly Salary: $" << nonProfSalary << endl;
  cout << "Health Care Contributions: $" << nonProfHealthCare << endl;
  cout << "Vacation Days Earned: " << nonProfVacationDays << endl;

  return 0;
}
