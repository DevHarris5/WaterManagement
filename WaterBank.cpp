#include <iostream>
using namespace std;


class User {
public: string UserName; int Id; string MobileNumber; int CreditBalance;

};

class UserManager {
	User user1{"Alex", 0, "0000000000", 100};
	User user2{"Kumar", 1, "1111111111", 100};
	User user3{"Babu", 2, "2222222222", 50};
	User user4{"Smith", 3, "3333333333", 20};
	User user5{"Anitha", 4, "4444444444", 100};
	User user6{"Bob", 5, "5555555555", 100};
	User user7{"Soman", 6, "6666666666", 70};
	User user8{"Raman", 7, "7777777777", 80};
	User user9{"Kamal", 8, "88888888888", 60};
	User user10{"Ajith", 9, "9999999999", 0};
	
};

void userVerification() {
	string userInputNumber;
	cin >> userInputNumber;

	if (userInputNumber.size() < 10 || userInputNumber.size() > 10) {
		cout << "Please type the Correct 10 Digit Nunber again.";
	}
}

int main()
{
	cout << "**********Welcome ,please type in your 10 digit mobile Number to get Started**********"<<endl;

	userVerification();


}
