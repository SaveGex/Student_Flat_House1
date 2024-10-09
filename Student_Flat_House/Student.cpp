#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cstring>  
#include "Student.h"
using namespace std;


Student::Student(char* name, std::vector<int> dates_of_birth, char* number, std::string city, std::string country, std::string name_of_EI, std::string city_and_country_where_located, short number_group)
	: date{ dates_of_birth }, city{ city }, country{ country }, name_of_EI{ name_of_EI }, city_and_country_where_located{ city_and_country_where_located }, number_group{ number_group }
{
	strncpy_s(this->name, sizeof(this->name), name, sizeof(this->name) - 1);
	this->name[sizeof(this->name) - 1] = '\0'; 

	strncpy_s(this->number, sizeof(this->number), number, sizeof(this->number) - 1);
	this->number[sizeof(this->number) - 1] = '\0';  
}

Student::Student(const Student& obj){
	strcpy_s(this->name, sizeof(obj.name), obj.name);
	this->date.resize(obj.date.size());
	memcpy(this->date.data(), obj.date.data(), sizeof(int) * obj.date.size());
	strcpy_s(this->number, sizeof(obj.number), obj.number);
	this->city = obj.city;
	this->country = obj.country;
	this->name_of_EI = obj.name_of_EI;
	this->city_and_country_where_located = obj.city_and_country_where_located;
	this->number_group = obj.number_group;
}

void Student::setter_name() {
	cout << "Write your name: ";
	cin >> name;
	cout << name;
};

void Student::setter_number() {
	bool ticket = false;

	cout << "Write your number:";
	cin >> number;

	if (strlen(number) != 10) {
		ticket = true;
	}
	while (ticket == true) {
		cout << number;
		cout << (sizeof(number) / sizeof(number[0]));
		cout << "your input more than 10 symbols or less than 10 symbols!\n write less: ";
		cin >> number;
		if ((sizeof(number) / sizeof(number[0])) == 10) {
			ticket == false;
		}
	};
	char uk[15] = "+38";
	strcat_s(uk, number);
	strcpy_s(number, uk);
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
	return name;
}
const char* Student::getter_number() {
	return number;
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



