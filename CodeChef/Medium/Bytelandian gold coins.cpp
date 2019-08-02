#include <iostream>

long long max (long long a,long long b){
    return a>b?a:b;
}

long long calculate(long long number) {
	if(number==0||number==1) return number;
	return max(number,(calculate(number/2)+calculate(number/3)+calculate(number/4)));
}

int main() {
	long long input;
	while (std::cin >> input) {
		std::cout << calculate(input) << std::endl;
	}
	return 0;
}
