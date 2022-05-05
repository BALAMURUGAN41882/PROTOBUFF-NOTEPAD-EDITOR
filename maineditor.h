class txtclass {
	projectfile::Project* curprojaddress = nullptr;
	std::string fileName;
	int currentVersion;
	vern::verdata verobj;
	vern::verfile* veraddress = nullptr;
public:
	txtclass(projectfile::Project* project)
	{
		curprojaddress = project;//asssiging project obj address 
		fileName = curprojaddress->filename() + curprojaddress->createfile();//filename from project
		currentVersion = curprojaddress->currversion();//fetching current version
		std::cout << "Current Version is Updated\n";
		if (1)
		{
			std::fstream userinfile(fileName + ".bin", std::ios::in | std::ios::binary);
			if (userinfile.is_open())
			{
				std::cout << "Bin file is Opened" << std::endl;
			}
			else if (!(verobj.ParseFromIstream(&userinfile)))
			{
				std::cout << "Text is not found in Bin file" << std::endl;
			}
		}
		//std::cout << "File : " << curprojaddress->filename() << "file is Created by " << curprojaddress->createfile() << "\n" << std::endl;
		if (verobj.verlist_size() == 0)
		{
			std::cout << "INITIAL COMMIT\n";
			vern::verfile* verfileobj = verobj.add_verlist();
			verfileobj->set_vercount(1);
			verfileobj->set_version(1);      
		}
		veraddress = verobj.mutable_verlist(currentVersion - 1);//an single element address is passing to veraddress and we handle through it
		fileEditor();
	}

	void init()
	{
		std::cout << "COMMIT OVER NEW VERSION UPDATED \n";
		vern::verfile* verfileobj = verobj.add_verlist();
		verfileobj->set_vercount(1);//version committed
		verfileobj->set_version(1);
	}
	void fileEditor()
	{
		std::cout << "File txtclass" << std::endl;
		int Vercommit = verobj.verlist(currentVersion - 1).vercount();//start through 1   this vercommit is work for one because balance in loop



		while (1)
		{
			std::cout << "VERSION: " << currentVersion << std::endl;
			std::cout << "VERSION COMMIT: " << Vercommit << std::endl;
			std::cout << "\nADDFILE [1] \nUPDATE [2] \nREMOVE [3] \nREVERTVERSION [4] \nDISPLAY [5] \nBREAK [6] \nCLEAR ALL VERSION [0]" << std::endl;
			int option = -1;
			std::cin >> option;
			std::cout << std::endl;

			if (option == 1)
			{
				std::string line;
				std::cout << "WRITE : ";
				std::cin.ignore();
				getline(std::cin, line);
				veraddress->add_vertxt()->assign(line.c_str());
				Vercommit = Vercommit + 1;

			}
			if (option == 2)
			{
				Printshow();
				std::string line;
				int lineindex;
				std::cout << "Enter The Line Number To Update: ";
				std::cin >> lineindex;
				std::cin.ignore();
				std::cout << "WRITE UPDATE: ";
				getline(std::cin, line);
				veraddress->mutable_vertxt(lineindex - 1)->assign(line.c_str());//lineindex-1 means vertxt vector starts from 0th index
				Vercommit = Vercommit + 1;

			}
			if (option == 3)
			{
				Printshow();
				int lineindex;
				std::cout << "Enter The Line Number To Remove Text: ";
				std::cin >> lineindex;
				auto element = veraddress->vertxt(lineindex - 1); //structure address can't give to normal int** so we use auto 
				for (auto searchaddress = veraddress->vertxt().begin(); searchaddress != veraddress->vertxt().end(); searchaddress++)
				{
					if (std::string(searchaddress->data()) == element)
					{
						veraddress->mutable_vertxt()->erase(searchaddress); break;
					};
				}


				Vercommit += 1;

			}
			int value = Vercommit;
			if (option == 4)
			{
				std::cout << "Enter Version To Visit: ";
				std::cout << "Version Available\n";
				for (int i = 0; i < verobj.verlist_size(); i += 1)
				{
					std::cout << i + 1 << "  ";

				}
				int versionvisit;
				if (verobj.verlist_size() > 0)
				{
					std::cin >> versionvisit;
					currentVersion = versionvisit;
					veraddress = verobj.mutable_verlist(currentVersion - 1);//update revert version
				}
			}
			if (option == 5)
			{
				Printshow();
			}
			if (option == 6) { break; }
			if (option == 0)
			{
				verobj.clear_verlist();
				verobj.clear_currentversion();
				veraddress = nullptr;
				init();
				currentVersion = 1;
			}
			if (Vercommit != veraddress->vercount())
			{
				veraddress->set_vercount(Vercommit);
			}
			if (value % 7 == 0)//3 commit is allowed
			{
				std::cout << "Six Commit is over " << std::endl;
				currentVersion += 1;
				init();
				transfer_txt(veraddress, verobj.mutable_verlist(currentVersion - 1));
				veraddress->set_vercount(1);
				veraddress = verobj.mutable_verlist(currentVersion - 1);
				Vercommit = 1;
			}

		}
	}
	void transfer_txt(vern::verfile* oldfile, vern::verfile* newfile)
	{
		for (int i = 0; i < oldfile->vertxt_size(); i++)
		{
			newfile->add_vertxt(oldfile->vertxt(i));
		}
	}

	void Printshow()//simply this function is for looping vertext vector that is present in verlist array(address is hold by veraddress)
	{
		for (int lineindex = 0; lineindex < veraddress->vertxt_size(); lineindex += 1)
		{
			std::cout << lineindex + 1 << ". " << veraddress->vertxt(lineindex) << std::endl;
		}
		if (!veraddress->vertxt_size())
		{
			std::cout << "Vertext is free // fill" << std::endl << std::endl;
		}
	}

	~txtclass()
	{
		/*std::fstream write1 (fileName + ".text", std::ios::out );
		  if (!write1.is_open()) { std::cout << "unable to open textfile *.bin file" << std::endl; }
		  else if (!verobj.SerializePartialToOstream(&write1)) { std::cout << "unable to write data !data lost" << std::endl; }*/
		std::fstream write(fileName + ".bin", std::ios::out | std::ios::trunc | std::ios::binary);
		if (!write.is_open()) { std::cout << "Bin is not open for write" << std::endl; }
		else if (!verobj.SerializePartialToOstream(&write))
		{
			std::cout << "Nothing in Bin file" << std::endl;
		}
	}
};
