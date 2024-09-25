#include <iostream>
using namespace std;

class Employee {
protected: 
    string name;
    int id;
    double salary;

public:
    Employee(string n, int i, double s) {
        name = n;
        id = i;
        salary = s;
    }

    void getDetails() {
        cout << "Name: " << name << "\nID: " << id << "\nSalary: " << salary << endl;
    }

    virtual void work() { 
        cout << name << " is working" << endl;
    }
};

class Manager : public Employee {
public:
    Manager(string n, int i, double s) : Employee(n, i, s) {}

    void getDetails() {
        Employee::getDetails();
        cout << "Role: Manager" << endl;
    }

    void work(){
        cout << name << " is managing the team" << endl;
    }
};

class Engineer : public Employee {
public:
    Engineer(string n, int i, double s) : Employee(n, i, s) {}

    void getDetails() {
        Employee::getDetails();
        cout << "Role: Engineer" << endl;
    }

    void work() { 
        cout << name << " is solving technical problems" << endl;
    }
};

int main() {
    string name;
    int id;
    double salary;

    cout << "Enter manager details" << endl;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter id: ";
    cin >> id;
    cout << "Enter salary: ";
    cin >> salary;

    Manager m(name, id, salary); // Create manager object

    cout << "\nEnter engineer details..." << endl;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter id: ";
    cin >> id;
    cout << "Enter salary: ";
    cin >> salary;

    Engineer e(name, id, salary); // Create engineer object

    // Display details and work
    cout << "\nManager Details:\n";
    m.getDetails();
    m.work();

    cout << "\nEngineer Details:\n";
    e.getDetails();
    e.work();

    return 0;
}
