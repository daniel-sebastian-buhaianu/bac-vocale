#include <iostream>
#include <cstring>
#define LGMAX 201
using namespace std;
int main()
{
	char t[LGMAX], rez[LGMAX], sep[]=" ,?!", vocale[]="aeiou", *c;
	cout << "Scrie un text care se termina cu caracterul punct ('.'):\n";
	cin.getline(t, LGMAX, '.');
	c = strtok(t, sep);
	while (c)
	{
		if (strchr(vocale, *c)
	            && strchr(vocale, *(c + strlen(c)-1)))
		{
			strcat(rez, c);
			strcat(rez, " ");
		}
		c = strtok(NULL, sep);
	}
	int lg = strlen(rez);
	if (lg < 2)
		cout << "nu exista";
	else
	{
		*(rez + strlen(rez)-1) = 0;
		cout << rez;
	}
	return 0;
}
