#pragma once
#include <vector>
#include <string>
#include <sstream>

class FlowersBouquet
{
private:
	std::vector<std::string> bouquet;
	bool arranged;
public:
	FlowersBouquet(std::vector<std::string>);
	void arrange();
	std::string to_string();
	static std::string join(std::vector<std::string>, const char* delim);
};

