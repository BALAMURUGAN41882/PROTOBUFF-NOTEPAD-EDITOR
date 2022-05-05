#include <iostream>
#include <conio.h>
#include <fstream>
#include "userfile.pb.h"
#include "textfile.pb.h"
#include "versionfile.pb.h"
#include "maineditor.h"
#include "filechecker.h"
#include "userportal.h"

int main()
{
	userportal user;

	while (1)
	{
		int option = -1;
		std::cout << "\nSignUp[1]\nLogIn[2]\nBreak[3]" << std::endl;
		std::cin >> option;
		std::cin.ignore();//for case of buffer problem we use cin.ignore()
		switch (option)
		{
		case 1:
		{
			std::cout << "Sign Up" << std::endl;
			std::string name;
			std::string email;
			std::string password;
			std::string location;
			std::string address;
			std::string phonenumber;
			std::cout << "Name: ";
			std::cin >> name;
			std::cout << "Email: ";
			std::cin >> email;
			std::cout << "Password: ";
			std::cin >> password;
			std::cout << "Location: ";
			std::cin >> location;
			std::cout << "Address: ";
			std::cin >> address;
			std::cout << "Phonenumber: ";
			std::cin >> phonenumber;
			user.signUp(name, email, password, location, address, phonenumber);
			break;
		}
		case 2:
		{
			std::string username;
			std::string password;
			std::cout << "Login \nGive Your Username or Email Id: ";
			std::cin >> username;
			std::cout << "Give Your Password: ";
			std::cin >> password;
			user.Login(username, password);
			break;
		}

		default:
			break;
		}

	}
	return 0;

};