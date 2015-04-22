#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void imprimeLCD(string str){
	for (int i = 0; i < str.length(); i++){

	}
}

int main()
{
	int s, n, cont = 7;
	string str;

	do{
		cin >> s >> n;

		char* numLCD = new char[(s+2)*(s*2)];
		int numI[8] = { 0 }, j = 8;
		str = to_string(n);

		cout << str[0] << endl;

	} while (s != 0 && n != 0);
		return 0;
}
