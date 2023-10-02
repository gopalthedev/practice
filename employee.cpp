#include <iostream>
#include <vector>
#include <string>

class Employee {
public:
    // Constructor to initialize the employee's name
    Employee(const std::string& name) : name(name) {}

    // Getter method to retrieve the employee's name
    std::string getName() const {
        return name;
    }

private:
    std::string name;
};

int main() {
    // Create a vector to store employee objects
    std::vector<Employee> employees;

    // Add employees to the vector
    employees.push_back(Employee("John Doe"));
    employees.push_back(Employee("Jane Smith"));
    employees.push_back(Employee("Bob Johnson"));

    // Display the names of employees
    std::cout << "List of employees:\n";
    for (const Employee& employee : employees) {
        std::cout << employee.getName() << std::endl;
    }

    return 0;
}
