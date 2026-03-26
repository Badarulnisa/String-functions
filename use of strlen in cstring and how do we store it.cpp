Q # 1:
Take a username as input. If length < 5 → "Too short", if > 15 → "Too long", else → "Username accepted."
	
#include<iostream>
#include<string>
#include<cstring>

using namespace std;
int main()
{

	char name[20];
	cout << "Enter a UserName: ";
	cin.getline (name,20); // it prints space too

	int length = strlen(name); // store input length

	if (length < 5) {
		cout << "Too short" << endl;
	}
	else if (length > 15) {
		cout << "Too long " << endl;
	}
	else {
		cout << "UserName is accepted " << endl;
	}
	
	}
