#include <iostream>
#include <string>
using namespace std;
struct student {
    char fir_name[ 20 ];
    char last_name[ 20 ];
    char grade;
    int  age;
};
int main() {
    struct student *stu = new struct student;
    cout << "What is your first name? ";
    cin.getline(stu->fir_name, 20);
    cout << "What is your last name? ";
    cin >> stu->last_name;
    cout << "What letter grade do you deserve? ";
    cin >> stu->grade;
    cout << "What is your age? ";
    cin >> stu->age;
    cout << "Name: " << stu->last_name << ", " << stu->fir_name << endl;
    cout << "Grade: " << ( char )(stu->grade + 1) << endl;
    cout << "Age: " << stu->age << endl;
    delete stu;
    return 0;
}