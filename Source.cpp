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
        cout << "Введите имя: ";
        cin >> firstName;
        cout << "Введите фамилию: ";
        cin >> lastName;
        cout << "Введите стаж работы (в годах): ";
        cin >> experience;
        cout << "Введите часовую зарплату: ";
        cin >> hourlyRate;
        cout << "Введите количество отработанных часов: ";
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
        cout << "Имя: " << firstName << endl;
        cout << "Фамилия: " << lastName << endl;
        cout << "Стаж работы: " << experience << " года(лет)" << endl;
        cout << "Часовая зарплата: $" << hourlyRate << endl;
        cout << "Отработанные часы: " << hoursWorked << endl;
        cout << "Зарплата за месяц: $" << calculateSalary() << endl;
    }
};

int main()
{
    Employee emp;
    emp.inputEmployeeData();
    emp.printEmployeeInfo();

    return 0;
}