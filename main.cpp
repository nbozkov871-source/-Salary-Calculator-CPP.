#include <iostream>


int main()
{ 
	
	float bs, net_sallary , bonuses, deduction;

	std::cout << "Enter 3 values:";
	std::cin >> bs >> deduction >> bonuses;

	net_sallary = bs+ (bs * bonuses / 100) - (bs * deduction/100) ;

	std::cout << "Net salary : " << net_sallary;


	return 0;
}
