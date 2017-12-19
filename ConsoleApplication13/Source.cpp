#include <iostream>
#include <stack>

using namespace std;
#define LOG cout << __FUNCTION__ << endl;


bool check(char* str) {
	stack <char> st;
	for (size_t i = 0; i < strlen(str); i++)
	{
		if (str[i] == '(')
		{
			st.push(str[i]);  cout << str[i]; LOG;
		}
		if (str[i] == ')' && st.size() && st.top() == '(')
		{
			st.pop();  cout << str[i]; LOG;
		}
		else if (str[i] == ')')
		{
			st.push(str[i]);  cout << str[i]; LOG;
		}
	}
	if (st.empty())
	{
		return true;
	}
	else
	{
		return false;
	}
}

void main() {
	char a;
	cout << check("(1+2*(8-1)(*)(3-5)+(8-2))");
	cout << endl;
	cout << check(")(1+2*)(((8-1)*(3-5)+(8-2)+)(");
	cout << endl;
	cin >> a;

}