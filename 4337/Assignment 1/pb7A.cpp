#include <iostream>
using namespace std;

int main() {
    struct Student {
        string name;
        int age;
        float gpa;
        string gradeLevel;
    };

    Student stuArray[2];
    stuArray[0] = {"Sally", 19, 3.78, "freshman"};
    stuArray[1] = {"Bill", 21, 2, "junior"};

    cout << stuArray[0].name << ' ' << stuArray[0].age << ' ' << stuArray[0].gpa << ' ' << stuArray[0].gradeLevel; 
    cout << "\n";
    cout << stuArray[1].name << ' ' << stuArray[1].age << ' ' << stuArray[1].gpa << ' ' << stuArray[1].gradeLevel; 
    return 0;
}