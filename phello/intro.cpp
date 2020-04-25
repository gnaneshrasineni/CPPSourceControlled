#include <iostream>
#include <string>
#include <array>
#include <vector>
int main(int argc, char const *argv[])
{
	std::string babyString="hello world";
	std::cout<<"baby string started saying"<<" "+babyString<<std::endl;

/*using array collection*/
	std::array<int,4> babyIntArray = {1,2,3,4};
	std::cout<<"baby array prints"<<" "<<babyIntArray.front()<<" "<<babyIntArray.back()<<std::endl;

/*using vector collection*/
	std::vector<std::string> babyVector;
	const int KReserveSize = 12;
	babyVector.reserve(KReserveSize);
	babyVector.push_back("vec_hello");
	babyVector.push_back("vec_world");
	std::cout<<"babyVector prints"<<" "<<babyVector.front()<<" "<<babyVector.back()<<std::endl;

/*loopers*/
	std::vector<int> integerLooper;
	const int kIntReserve = 5;
	integerLooper.reserve(kIntReserve);
	bool condition = true;
	int i=0;
	while(condition)
	{
		if(i>=5) break;
		integerLooper.push_back(5-(i));
		std::cout<<integerLooper[i++]<<" ";
	}
	std::cout<<std::endl;
	for(const auto& num : integerLooper)
	{
		std::cout<<num<<" "<<std::endl;
	}
	return 0;
}