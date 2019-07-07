#include <iostream>
#include <vector>
int getWater(std::vector<int> a) {
	int curr = a.at(0);
	
	int size = a.size();
	int answer = 0;
	for(int i = 1; i < size; i++) {
		if(a.at(i) >= curr) {
			curr = a.at(i);
		}
		else {
			answer += (curr - a.at(i));
		}
	}
	return answer;
	
	
}

int main() {
	int input_size = 0;
	std::vector<int> input;
	std::cin >> input_size;
	
	for(int ite = 0; ite < input_size; ite++) {
		int tbp;
		std::cin >> tbp;
		input.push_back(tbp);
	}
	
	std::cout << getWater(input);
	return 0;
	
	
	
}