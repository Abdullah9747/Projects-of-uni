#include<iostream>
#include<string>
#include<stack>
using namespace std;
int operat(char);
string prefix(string x)
{
	string rev = "";
	stack <char> y;

	int size = x.length();
	char a = 'a', b, c;
	for (int i = 0, j = size - 1; i < size; i++, j--)
	{
		a = x[j];
		rev = rev + a;
	}
	x = "";
	for (int i = 0; i < size; i++)
	{
		b = rev[i];
		if ((b >= 65 && b <= 90) || (b >= 97 && b <= 122))
		{
			x = x + b;
		}
		else if (y.empty() == true)
		{
			y.push(b);
		}
		else if (y.empty() != true)
		{
			c = y.top();
			while ((y.empty() != true) && (operat(y.top()) <= operat(b)))
			{
				x = x + y.top();
				y.pop();
			}
			y.push(b);
		}
	}
	while (y.empty() != true)
	{
		x = x + y.top();
		y.pop();
	}
	rev = "";
	for (int i = 0, j = size - 1; i < size; i++, j--)
	{
		a = x[j];
		rev = rev + a;
	}
	return rev;
}
int main()
{
	string user;
	cout << "Enter user : ";
	getline(cin, user);
	user = prefix(user);
	cout << user << endl;
	system("pause");
	return 0;
}
int operat(char x)
{
	 if (x == '*' || x == '/')
	{
		return 1;
	}
	else if (x == '+' || x == '-')
	{
		return 2;
	}
}