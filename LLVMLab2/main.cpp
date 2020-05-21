#include <iostream>
#include <cstdint>
#include <chrono>

int main(){
	std::uint64_t mul = 1;
	for (std::uint64_t i = 0; i < 10000000000; ++i){
		mul *= 1;
		mul *= 1;
		mul *= 1;
		mul *= 1;
		
	}
	return 0;
}
