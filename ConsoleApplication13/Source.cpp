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
			st.push(str[i]);
		}
		if (str[i] == ')' && st.size() && st.top() == '(')
		{
			st.pop();
		}
		else if (str[i] == ')')
		{
			st.push(str[i]);
		}
	}
	return (st.empty()) ?  true : false;
	/*if (st.empty())
	{
		return true;
	}
	else
	{
		return false;
	}*/
}

void main() {
	char a;
	cout << check("(1+2*(8-1)+(3-5)+(8-2))");
	cout << endl;
	cout << check(")(1+2)(((8-1)*(3-5)))+(8-2)+)(");
	cout << endl;
	cout << check("(Hello)(world)(!)");
	cin >> a;

}
