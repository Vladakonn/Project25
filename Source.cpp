#include <iostream>
#include <string>
using namespace std;


class Employee
{

private:
    string firstName;
    string lastName;
    int experience;
    float hourlyRate;
    int hoursWorked;

public:
    void inputEmployeeData()
    {
        setlocale(LC_ALL, "ru");
        cout << "������� ���: ";
        cin >> firstName;
        cout << "������� �������: ";
        cin >> lastName;
        cout << "������� ���� ������ (� �����): ";
        cin >> experience;
        cout << "������� ������� ��������: ";
        cin >> hourlyRate;
        cout << "������� ���������� ������������ �����: ";
        cin >> hoursWorked;
    }

    float calculateSalary()
    {
        float salary = hourlyRate * hoursWorked;
        float bonus = 0;

        if (experience < 1)
        {
            bonus = 0;
        }
        else if (experience < 3)
        {
            bonus = 0.05 * salary;
        }
        else if (experience < 5)
        {
            bonus = 0.08 * salary;
        }
        else {
            bonus = 0.15 * salary;
        }

        return salary + bonus;
    }

    void printEmployeeInfo()
    {
        cout << "���: " << firstName << endl;
        cout << "�������: " << lastName << endl;
        cout << "���� ������: " << experience << " ����(���)" << endl;
        cout << "������� ��������: $" << hourlyRate << endl;
        cout << "������������ ����: " << hoursWorked << endl;
        cout << "�������� �� �����: $" << calculateSalary() << endl;
    }
};

int main()
{
    Employee emp;
    emp.inputEmployeeData();
    emp.printEmployeeInfo();

    return 0;
}