# include <iostream>
# include <fstream>
# include <string>

int 	error(int argc) {
	if (argc != 4) {
		std::cout << "Wrong arguments" << std::endl;
		return (1);
	}
	else {
		std::cout << "File didn't open" << std::endl;
		return (1);
	}
}

std::string		replace(std::string str, std::string s1, std::string s2) {
	std::size_t	pos = 0;

	while (str.find(s1, pos) != std::string::npos) {
		pos = str.find(s1, pos);
		str.erase(pos, s1.length());
		str.insert(pos, s2);
	}
	return (str);
}

int main(int argc, char *argv[]) {
	std::string		file;
	std::string		str;
	std::string		s1;
	std::string		s2;

	if (argc != 4)
		return (error(argc));
	file = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	std::ifstream	in(argv[1]);
	if (!in)
		return (error(argc));
	std::ofstream	out(file += ".replace");
	if (!out)
		return (error(argc));
	while (!in.eof()) {
		if (!std::getline(in, str)) {
			std::cout << "That's all!" << std::endl;
			exit(0);
		}
		str = replace(str, s1, s2);
		out << str;
		if (!in.eof())
			out << std::endl;
	}
	in.close();
	out.close();
	std::cout << "Successful" << std::endl;
	return (0);
}