class userportal
{
	usern::userarray userlistobj;
	int counter ;
public:
	std::string encryptPassword(std::string password)
	{
		std::string check;
		for (int i = 0; i < password.length(); i++)
		{
			check += std::to_string((int)password[i]);
		}
		return check;
	}

	void Login(std::string name_email, std::string password)
	{
		password = encryptPassword(password);
		for (int userinit = 0; userinit < userlistobj.userlist_size(); userinit += 1)

		{
			const usern::userdata& liveuser = userlistobj.userlist(userinit);//inside array sigle elements whole userdata structure is included
			if (liveuser.email() == name_email || liveuser.name() == name_email)
			{
				if (liveuser.password() == password)
				{
					std::cout << "Username is correct\n" << liveuser.name() << std::endl;

					ProjectEditor obj(liveuser.name());
					std::cout << std::endl << "log out   " << std::endl;
					break;
				}
				else { std::cout << "Password is wrong" << std::endl; }
			}

		}
		std::cout << "Username is wrong or Username is not found" << std::endl;
	}
	void signUp(std::string name, std::string email, std::string password, std::string location, std::string address, std::string phonenumber)
	{
		usern::userdata* user = userlistobj.add_userlist();
		user->set_name(name);
		user->set_email(email);
		password = encryptPassword(password);
		user->set_password(password);
		user->set_location(location);
		user->set_address(address);
		user->set_phonenumber(phonenumber);
		user->set_id(++counter);
		//std::cout << name << email << password << location << address << phonenumber << std::endl;

		std::cout << "\nUser Id : " << counter << "\nSignIn Done\n" << std::endl;
		userlistobj.set_usercount(userlistobj.userlist_size());
	}
	userportal()
	{
		std::cout << " ............ USER PORTAL ............ \n";
		std::fstream userfile("usern.bin", std::ios::in | std::ios::binary);
		if (!userfile.is_open())
		{
			std::cout << "Bin File is open \n " << std::endl;
		}
		else if (!(userlistobj.ParseFromIstream(&userfile)))
		{
			std::cout << "Empty bin file so can't parse" << std::endl;
		}
		counter = userlistobj.usercount();//protobuf default value is zero
		
	}
	~userportal()
	{
		std::fstream useroutfile("UserData.bin", std::ios::out |  std::ios::binary);
		if (!useroutfile.is_open()) { std::cout << "unable to open user bin file" << std::endl; }
		else if (!userlistobj.SerializePartialToOstream(&useroutfile)) { std::cout << "unable to write data !data lost" << std::endl; }

		/*std::fstream useroutfile1("UserData.text", std::ios::out );
		if (!useroutfile1.is_open()) { std::cout << "unable to open user bin file" << std::endl; }
		else if (!userlistobj.SerializePartialToOstream(&useroutfile1)) { std::cout << "unable to write data !data lost" << std::endl; }*/
	}
};