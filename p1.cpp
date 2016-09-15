#include<iostream> 
#include<string> 
#include<bitset>

using namespace std;

void convertToBinary(string userString)
{
	for (int i = 0; i < userString.size(); ++i)
	{
		cout << bitset<8>(userString.c_str()[i]);
	}
}

int main()
{
	string uinput;
	
	cout << "Please enter a message: " << endl;
	getline(cin, uinput);
	cout << "Your message " << uinput << endl;
	cout << "in binary: " << endl; 
	
	convertToBinary(uinput);
	cout << endl;
	
	return 0;
}
