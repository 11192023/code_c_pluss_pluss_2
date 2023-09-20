#include <iostream>
using namespace std;

class Employee {
private:
    string first_name;
    string last_name;
public:
    Employee() {}
    Employee(string first_name, string last_name) {
        this->first_name = first_name;
        this->last_name = last_name;
    }
    friend istream& operator>>(istream& in, Employee& emp);
    friend ostream& operator<<(ostream& out, const Employee& emp);
};

istream& operator>>(istream& in, Employee& emp) {
    in >> emp.first_name;
    in >> emp.last_name;
    return in;
}

ostream& operator<<(ostream& out, const Employee& emp) {
    out << emp.first_name << " " << emp.last_name;
    return out;
}

class Department {
private:
    string dept_name;
    Employee* list_employees;
    unsigned n;
public:
    Department() {
        dept_name = "";
        list_employees = nullptr;
        n = 0;
    }
    Department(const Department& dept2);
    Department& operator=(const Department& rhs);
    ~Department() {
        delete[] list_employees;
    }

    friend istream& operator>>(istream& in, Department& dept);
    friend ostream& operator<<(ostream& out, const Department& dept);
};

Department::Department(const Department& dept2) {
    this->dept_name = dept2.dept_name;
    this->n = dept2.n;
    if (dept2.list_employees != nullptr) {
        list_employees = new Employee[n];
        for (unsigned i = 0; i < n; i++) {
            list_employees[i] = dept2.list_employees[i];
        }
    }
}

Department& Department::operator=(const Department& rhs) {
    if (this != &rhs) {
        dept_name = rhs.dept_name;
        n = rhs.n;
        delete[] list_employees;
        if (rhs.list_employees != nullptr) {
            list_employees = new Employee[n];
            for (unsigned i = 0; i < n; i++) {
                list_employees[i] = rhs.list_employees[i];
            }
        }
    }
    return *this;
}

istream& operator>>(istream& in, Department& dept) {
    cout << "Enter department name: ";
    in >> dept.dept_name;
    cout << "Enter the number of employees: ";
    in >> dept.n;
    dept.list_employees = new Employee[dept.n];
    cout << "Enter employee details:\n";
    for (unsigned i = 0; i < dept.n; i++) {
        cout << "Employee " << i + 1 << ":\n";
        in >> dept.list_employees[i];
    }
    return in;
}

ostream& operator<<(ostream& out, const Department& dept) {
    out << "Department name: " << dept.dept_name << endl;
    out << "Number of employees: " << dept.n << endl;
    out << "Employee details:\n";
    for (unsigned i = 0; i < dept.n; i++) {
        out << "Employee " << i + 1 << ": " << dept.list_employees[i] << endl;
    }
    return out;
}

int main() {
    Department dept1;
    cout << "Enter department details:\n";
    cin >> dept1;

    cout << "\nDepartment details:\n";
    cout << dept1;

    return 0;
}
