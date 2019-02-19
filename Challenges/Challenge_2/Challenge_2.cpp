#include<iostream>

using std::cout;
using std::endl;
using std::cin;

const int price_per_small_room{25};
const int price_per_large_room{35};
const double tax_percent{0.06};
int number_of_small_rooms{0};
int number_of_large_rooms{0};
double tax_value{0.0};
double total_cost{0.0};

long calc_value(int small, int large);

int main()
{
	cout << "Insert the number of small and large rooms" << endl;
	cin >> number_of_small_rooms >> number_of_large_rooms;
	long value = calc_value(number_of_small_rooms, number_of_large_rooms);
	tax_value = value * tax_percent;
	total_cost = value + tax_value;
	
	cout << "Cost: " << value << endl;
	cout << "Taxes: " << tax_value << endl;
	cout << "Total cost: " << total_cost << endl;
	
	return 0;
}

long calc_value(int small, int large){
	return small * price_per_small_room + large * price_per_large_room;
}