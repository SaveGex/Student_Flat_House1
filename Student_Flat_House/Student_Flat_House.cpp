#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include "Student.h"

using namespace std;

int main() {
    array<char, 200> name = { "Alex" };
    array<char, 100> number = { "+38012341232" };

    string city = "City";
    string Country = "Country";
    string Name_ei = "Name ei";
    string country = "Ukraine";

    // dd.mm.yyyy
    Student s1(name, { 9, 10, 2024 }, number, city, Country, Name_ei, country, 34);
    Student s2(std::move(s1));  

    cout << s2.getter_city() << endl;
    cout << s1.getter_city() << endl;
    cout << "Hello World!\n";


    return 0;
}
