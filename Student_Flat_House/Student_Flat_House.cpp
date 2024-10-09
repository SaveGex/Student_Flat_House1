#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include "Student.h"

using namespace std;

int main() {
    char* name = new char[5];  
    strcpy_s(name, 5, "Alex");

    char* number = new char[14];  
    strcpy_s(number, 14, "+38012341232");

    string city = "City";
    string Country = "Country";
    string Name_ei = "Name ei";
    string country = "Ukraine";

    // dd.mm.yyyy
    Student s1(name, { 9, 10, 2024 }, number, city, Country, Name_ei, country, 34);
    Student s2(s1);  

    cout << s2.getter_city() << endl;

    cout << "Hello World!\n";

    delete[] name;
    delete[] number;

    return 0;
}
