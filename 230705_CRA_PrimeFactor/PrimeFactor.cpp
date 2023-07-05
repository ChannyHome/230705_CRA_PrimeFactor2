#include <vector>

class PrimeFactor {
public:
	std::vector<int> of(int i) {
	std::vector<int> result = {};
	if (i == 2)
		result.push_back(2);
	return result;
}
};