#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

class Player{
	//attributes
	string name;
	int health;
	int xp;
	
	//methods
	void talk(string);
	bool is_dead();
}; //don't forget the semicolon

class Account{
	//attributes
	string name;
	double balance;
	
	//methods
	bool deposit(double);
	bool withdraw(double);
};

int main()
{
	//normal object creation
	Player joao;
	Player hero;
	
	//array of objects
	Player players[]{joao, hero};	
	
	//vector of objects
	vector<Player> players_vec{joao};
	cout << players_vec.size() << endl;
	players_vec.push_back(hero);	
	cout << players_vec.size() << endl;
	
	//pointer of object
	Player *enemy{nullptr};
	enemy = new Player;	
	delete enemy;
	
	Account joao_account;
	Account other_account;
	
	Account accounts[]{joao_account, other_account};
	cout << sizeof(accounts) / sizeof(Account) << endl;
	
	vector<Account> accounts_vec{joao_account};
	accounts_vec.push_back(other_account);
	
	return 0;
}
