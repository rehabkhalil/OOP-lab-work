#include<iostream>
using namespace std;
struct Employee {
 string name;
 int age;
 int salary;
 char gender;
};
void InputEmployeeData(Employee employees[], int count) {
 for (int i = 0; i < count; i++) {
 cout << "\nEnter details for Employee " << i + 1 << ":\n";
 cout << "Name: ";
 cin >> employees[i].name;
 cout << "Age: ";
 cin >> employees[i].age;
 cout << "Salary: ";
 cin >> employees[i].salary;
 cout<< "gender: ";
 cin >> employees[i].gender;
 }
}

void DisplayEmployeeData(Employee employees[], int count) {
 cout << "\n--- Employee Records ---\n";
 for (int i = 0; i < count; i++) {
 cout << "Name: " << employees[i].name << "\n";
 cout << "Age: " << employees[i].age << "\n";
 cout << "salary: " << employees[i].salary << "\n\n";
 }
}
void FindHighestSalary(Employee employees[], int count) {
 int topIndex = 0;
 for (int i = 1; i < count; i++) {
 if (employees[i].salary > employees[topIndex].salary) {
 int topIndex = i;
 }
 }
 cout << "\n--- Top Employee ---\n";
 cout << "Name: " << employees[topIndex].name << "\n";
 cout << "Age: " << employees[topIndex].age << "\n";
 cout << "Salary " <<employees[topIndex].salary << "\n";
 cout << "Gender " <<employees[topIndex].gender << "\n";
}
int main() {
 int numEmployees;
 cout << "Enter the number of employee: ";
 cin >> numEmployees;
 Employee employees[numEmployees]; 
 InputEmployeeData(employees, numEmployees);
 DisplayEmployeeData(employees, numEmployees);
 FindHighestSalary(employees, numEmployees);
 return 0;
}