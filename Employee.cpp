
#include <iostream>
#include <string>
using namespace std;

class Employee
{
    int id;
    string name;
    float salary, bonus;

public:

    
    Employee()
    {
        id = 0;
        name = "Unknown";
        salary = 0;
        bonus = 0;
    }

    
    Employee(int eid, string ename, float esalary, float ebonus)
    {
        id = eid;
        name = ename;
        salary = esalary;
        bonus = ebonus;
    }

    
    float totalSalary()
    {
        return salary + bonus;
    }


    void Display()
    {
        cout << "\nEmployee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Employee Salary: " << salary << endl;
        cout << "Employee Bonus: " << bonus << endl;
        cout << "Total Salary: " << totalSalary() << endl;
    }
};

int main()
{
    
    Employee e1;
    e1.Display();

    
    Employee e2(101, "Nisha", 24000, 2000);
    e2.Display();

    return 0;
}
