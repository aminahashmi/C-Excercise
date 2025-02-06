
#include <iostream>
using namespace std;
struct Age {
    int years;
    int months;
    double percentage;
};

class Person {
public:
    string name;
    Age age;

    Person(string n, int y, int m) {
        name = n;
        age.years = y;
        age.months = m;
        age.percentage = (y + (m / 12.0)) / 10.0;
    }

    void display() {
       cout << "Name: " << name <<endl;
       cout << "Age: " << age.years << " years, " << age.months << " months" <<endl;
       cout << "Age Percentage: " << age.percentage * 10 << "%" << endl;
    }
};

int main() {
    Person p("HIRA INAYAT", 18, 6);
    p.display();
    return 0;
    }