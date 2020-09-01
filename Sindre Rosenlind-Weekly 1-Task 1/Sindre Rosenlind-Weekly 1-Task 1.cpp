#include <iostream>
#include <string>

int age;
long int phonenumber;
std::string initial = "";
std::string Fullname = "";
std::string birthdate = "";

int main() {
	std::cout << "Enter your full name:\n";
	std::getline(std::cin, Fullname);
	std::cout << "Enter your age:\n";
	std::cin >> age;
	std::cout << "Enter your initial:\n";
	char initial;
	std::cin >> initial;
	std::cout << "Enter your phone number:\n";
	std::cin >> phonenumber;
	std::cout << "Enter date of birth:\n"; 
	std::cin.ignore();
	std::getline(std::cin, birthdate);
	std::cin, Fullname;
	std::cin, birthdate;
	std::cout << "Your name:         |" << Fullname << std::endl;
	std::cout << "your age:          |" << age << std::endl;
	std::cout << "your initial:      |" << initial << std::endl;
	std::cout << "your phone number: |" << phonenumber << std::endl;
	std::cout << "your date of birth:|" << birthdate << std::endl;
}

