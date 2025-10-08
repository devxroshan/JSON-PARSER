#pragma once

#include<fstream>

class IO {
public:
	IO(std::string& filePath);
	~IO();

	std::fstream readFile();
};
