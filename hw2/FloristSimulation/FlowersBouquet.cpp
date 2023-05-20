#include "FlowersBouquet.h"

FlowersBouquet::FlowersBouquet(std::vector<std::string> bouquet) : bouquet(bouquet), arranged(false) {

}

void FlowersBouquet::arrange() {
	arranged = true;
}

std::string FlowersBouquet::join(std::vector<std::string> v, const char* delim) {
	std::ostringstream imploded;
	std::copy(v.begin(), v.end(), std::ostream_iterator<std::string>(imploded, delim));
	return imploded.str();
}

std::string FlowersBouquet::to_string() {
	std::string output = join(bouquet, ", ");
	return output.substr(0, output.size() - 2) + ".";
}
