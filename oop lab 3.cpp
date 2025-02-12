#include <iostream>
using namespace std;
double calculateGrossSalary(double basicSalary, double allowancePercentage){
    return basicSalary + (basicSalary * allowancePercentage/100);
}
double calculateNetSalary(double grossSalary, double deductionPercentage){
    return grossSalary - (grossSalary * deductionPercentage/100);
}
int main() {
    double basicSalary, allowancePercentage, deductionPercentage;
    cout<<"Enter the basic salary: ";
    cin>>basicSalary;
    cout<<"Enter the allowance percentage: ";
    cin>>allowancePercentage;
    cout<<"Enter the deduction percentage: ";
    cin >>deductionPercentage;
    double grossSalary=calculateGrossSalary(basicSalary, allowancePercentage);
    double netSalary=calculateNetSalary(grossSalary, deductionPercentage);
    cout<<"The net salary is: " << netSalary << endl;
    return 0;
}
