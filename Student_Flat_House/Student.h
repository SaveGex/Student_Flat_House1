#pragma once
#ifndef Student_h

#include <vector>
#include <string>
#include <cstring>
#include <array>

class Student {
private:
    std::array<char, 200> name;
    std::vector<int> date;
    std::array<char, 100> number;
    std::string city;
    std::string country;
    std::string name_of_EI;
    std::string city_and_country_where_located;
    short number_group;

public:
    Student(std::array<char, 200> name, std::vector<int> dates_of_birth, std::array<char, 100> number, std::string city, std::string country, std::string name_of_EI, std::string city_and_country_where_located, short number_group);
    Student(Student&& obj) noexcept;
    void setter_name();
    void setter_number();
    void setter_date_of_birth();
    void setter_city();
    void setter_country();
    void setter_name_of_EI();
    void setter_city_and_country_where_located();
    void setter_number_group();
    const char* getter_name();
    const char* getter_number();
    std::vector<int> getter_date_of_birth();
    std::string getter_city();
    std::string getter_country();
    std::string getter_name_of_EI();
    std::string getter_city_and_country_where_located();
    short getter_number_group();
    Student();
};
#endif // !1
