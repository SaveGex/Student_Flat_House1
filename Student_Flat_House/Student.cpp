#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cstring>  
#include "Student.h"
using namespace std;


Student::Student(array<char, 200> name, std::vector<int> dates_of_birth, array<char, 100> number, std::string city, std::string country, std::string name_of_EI, std::string city_and_country_where_located, short number_group)
	: name{ name }, date{ dates_of_birth }, number{ number }, city{ city }, country{ country }, name_of_EI{ name_of_EI }, city_and_country_where_located{ city_and_country_where_located }, number_group{ number_group }
{
}

Student::Student(Student&& obj) noexcept{
	if (this != &obj) {
		this->name = obj.name;
		this->date = obj.date;
		this->number = obj.number;
		this->city = obj.city;
		this->country = obj.country;
		this->name_of_EI = obj.name_of_EI;
		this->city_and_country_where_located = obj.city_and_country_where_located;
		this->number_group = obj.number_group;

		obj.name = {};
		obj.date = {};
		obj.number = {};
		obj.city = "";
		obj.country = "";
		obj.name_of_EI = "";
		obj.city_and_country_where_located = "";
		obj.number_group = 0;

	}
}

void Student::setter_name() {
	cout << "Write your name: ";
	cin.getline(name.data(), name.size()); 
	
};

void Student::setter_number() {
	bool ticket = true;

	cout << "Write your number:";
	cin.getline(number.data(), number.size());

	if (number.size() != 10) {
		ticket = true;
	}
	while (ticket) {
		if (strlen(number.data()) != 10) { 
			std::cout << "Your input is more than 10 symbols or less than 10 symbols! Write again: ";
			std::cin.getline(number.data(), number.size());
		}
		else {
			ticket = false; 
		}
	};
	char uk[15] = "+38";
	strcat_s(uk, number.data());
	strcpy_s(number.data(), number.size(), uk);
	cout << endl;
};


void Student::setter_date_of_birth() {
	short day, month, year;

	cout << "write day: ";
	cin >> day;
	cout << "write month: ";
	cin >> month;
	cout << "write year: ";
	cin >> year;
	date.push_back(day);
	date.push_back(month);
	date.push_back(year);

}

void Student::setter_city() {
	cout << "Write student city: ";
	cin >> city;
}

void Student::setter_country() {
	cout << "Write student country: ";
	cin >> country;
}
void Student::setter_name_of_EI() {
	cout << "write name edcation institution: ";
	cin >> name_of_EI;
}
void Student::setter_city_and_country_where_located() {
	cout << "Write city and country at one row where student is are: ";
	cin >> city_and_country_where_located;
}
void Student::setter_number_group() {
	cout << "Write number group: ";
	cin >> number_group;
};


const char* Student::getter_name() {
	return name.data();
}
const char* Student::getter_number() {
	return number.data();
}
vector<int> Student::getter_date_of_birth() {
	return date;
}
string Student::getter_city() {
	return city;
}
string Student::getter_name_of_EI() {
	return name_of_EI;
}
string Student::getter_country() {
	return country;
}
string Student::getter_city_and_country_where_located() {
	return city_and_country_where_located;
}
short Student::getter_number_group() {
	return number_group;
}



