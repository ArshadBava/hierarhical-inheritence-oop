#include <iostream>
using namespace std;

class employee {
    string name;
    int id;
    double salary;

public:
    employee(string n, int i, double s) {
        name = n;
        id = i;
        salary = s;
    }
    
    void getDetails() {
        cout << "Name: " << name << "\nID: " << id << "\nSalary: " << salary << endl;
    }
    
    void work() {
        cout << name << " is working" << endl;
    }
};

class Manager : public employee {
public:
    Manager(string n, int i, double s) : employee(n, i, s) {}
    
    void getDetails() {
        employee::getDetails();
        cout << "Role: Manager" << endl;
    }
    
    void work() {
        cout << "Manager " << name << " is managing the team" << endl; 
    }
};

class Engineer : public employee {
public:
    Engineer(string n, int i, double s) : employee(n, i, s) {}
    
    void getDetails() {
        employee::getDetails();
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
    
    Manager m(name, id, salary);

    cout << "\nEnter engineer details..." << endl;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter id: ";
    cin >> id;
    cout << "Enter salary: ";
    cin >> salary;

    Engineer e(name, id, salary);

    
    cout << "\nManager Details:\n";
    m.getDetails();
    m.work();

    cout << "\nEngineer Details:\n";
    e.getDetails();
    e.work();

    return 0;
}
6
