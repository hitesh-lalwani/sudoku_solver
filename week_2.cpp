#include <iostream>
using namespace std;
int getDistance(string a, string b) {
	int sizeA = a.size();
	int sizeB = b.size();
	int unmatches = 0;
if(sizeA < sizeB) {
	while(sizeA < sizeB) {
		a = " " + a;
		sizeA++;
	}
}
else {
	if(sizeA > sizeB) {
	while(sizeA > sizeB) {
		b += " ";
		sizeB++;
	}
}
}
	
	
		std::cout << (a + "d") << std::endl << (b + "de") << std::endl;
		
		
	for(int i = sizeB - 1; i >= 0; i--) {
			if(a[i] != b[i]) {
				unmatches++;
			}
		}
	
	return unmatches;
	
}




int main() {
	int times;
	

	string one;
	string two;
	cin >> one >> two;
	
	std::cout << getDistance(one, two);
	
	
	return 0;
}


