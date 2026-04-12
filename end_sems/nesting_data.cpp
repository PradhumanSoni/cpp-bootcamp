#include <iostream>
using namespace std;

class Student {
    string name;
    int marks[5];
    int total;
    float percentage;
    char grade;
public:
    void setData();
    int computeTotal();
    float computePercentage();
    char assignGrade();
    void display();
};

void Student::setData() {
    cout << "Enter student name: ";
    cin >> name;
    for (int i = 0; i < 5; i++) {
        cout << "Enter mark " << i + 1 << ": ";
        cin >> marks[i];
    }
}

int Student::computeTotal() {
    total = 0;                        // reset before summing
    for (int i = 0; i < 5; i++)
        total += marks[i];
    return total;
}

float Student::computePercentage() {
    computeTotal();                   // chain: calls computeTotal()
    percentage = (total / 500.0) * 100;
    return percentage;
}

char Student::assignGrade() {
    computePercentage();              // chain: calls computePercentage()
    if (percentage >= 80)            grade = 'A';
    else if (percentage >= 60)       grade = 'B';
    else if (percentage >= 40)       grade = 'C';
    else                             grade = 'F';
    return grade;
}

void Student::display() {
    assignGrade();                    // chain: calls assignGrade()
    cout << "Name:       " << name << endl;
    cout << "Total:      " << total << "/500" << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade:      " << grade << endl;
}

int main() {
    Student s[3];
    s[0].setData();
    s[1].setData();
    s[0].display();
    s[1].display();
    return 0;
}