class ProjectEditor {
	projectfile::prolist projectobj;
	int Projcount;
	std::string creater;
public:
	//default contructor is wrote below
	void filechecker()
	{
		for (int projectindex = 0; projectindex < projectobj.projectcount(); projectindex++)
		{
			std::cout << projectindex+1 << ". " << projectobj.projectname(projectindex).filename() << std::endl;//projectobj.projectname(projectindex).filename() ->this line tells filename
		}
		int fileindex = -1;
		std::cout << "Enter The index of view Existing file(from 1): " << std::endl;
		std::cin >> fileindex;
		fileindex=fileindex-1;//because project file index start from 0th index
		if (fileindex >= 0 && fileindex < projectobj.projectcount())
		{
			txtclass obj(projectobj.mutable_projectname(fileindex));//call another class so create object and parameterized constructor//pass element address in projectname array
		}
		else std::cout << "Not a file index: " << fileindex << std::endl;
	}
	void CreateFile(std::string filename)
	{
		projectfile::Project* newfile = projectobj.add_projectname();
		projectobj.set_projectcount(projectobj.projectcount() + 1);
		newfile->set_filename(filename);
		newfile->set_proid(projectobj.projectcount());
		newfile->set_currversion(1);
		newfile->set_createfile(creater);
		Projcount += 1;
		//projectobj.set_projectcount(projectobj.projectcount() + 1);
		txtclass obj(projectobj.mutable_projectname(Projcount - 1));
	}
	void fileselection()
	{
		while (1)
		{
			int i = 0;
			std::cout << "\nCreate New File[1]\nOpen Existing File[2]\nBreak[3]\n";
			std::cin >> i;
			switch (i)
			{
			case 1:
			{
				std::string filename;
				std::cout << "File Name: ";
				std::cin >> filename;
				CreateFile(filename);
				break;
			}
			case 2:
			{
				filechecker();
				break;
			}
			case 3:
				break;
			}
		}
	}
	ProjectEditor(std::string user)
	{
		std::cout << user << std::endl;
		creater = user;
		std::fstream userfile(user + ".bin", std::ios::in | std::ios::binary);
		if (!userfile.is_open())
		{
			std::cout << "project Binfile not found creating a new file" << std::endl;
		}
		else if (!(projectobj.ParseFromIstream(&userfile)))//empty bin file 
		{
			std::cout << "Bin file is there but it can't parse" << std::endl;
		}
		Projcount = projectobj.projectcount();
		std::cout << "projectcount is " << Projcount+1 << std::endl;
		fileselection();
	}
	~ProjectEditor()
	{
		projectobj.set_projectcount(projectobj.projectname_size());
		std::fstream useroutfile(creater + ".bin", std::ios::out |  std::ios::binary);//std::ios::trunc |
		if (!useroutfile.is_open()) { std::cout << "unable to open project *.bin file" << std::endl; }
		else if (!projectobj.SerializePartialToOstream(&useroutfile)) { std::cout << "unable to write data !data lost" << std::endl; }

		/*std::fstream useroutfile1 (creater + ".text", std::ios::out );
		if (!useroutfile1 .is_open()) { std::cout << "unable to open project *.bin file" << std::endl; }
		else if (!projectobj.SerializePartialToOstream(&useroutfile1)) { std::cout << "unable to write data !data lost" << std::endl; }*/
	}
};