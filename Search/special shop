#include <iostream>
#include <cmath>
using namespace std;

/*we use differentiation
a*x^2 + b*y^2 = f(x){minimize};
x + y = N {total pots};
y = N - x;
a*x^2 + b(N - x)^2 = f(x);

df(x)/dx = 2ax - 2by(N - x) = 0
by solving we get
(ax + by) / b = N;
by using given value we can compute the x and y and minimize cost
we have to take x+1 also into consideration cause in long long int if x comes out 1.2 and
something or 1.6 it will take only 1 into consideration so taking x+1 is very necessary
*/
int main()
{
	int test;
	cin >> test;

	while(test--)
	{
		long long int n, a, b;
		cin >> n >> a >> b;
        long long int x, y;
        x = ((b*n)/ (a + b));
        y=x+1;

    if(((a*x*x)+(b*(n-x)*(n-x)))>((a*y*y)+(b*(n-y)*(n-y))))
        cout <<  ((a*y*y)+(b*(n-y)*(n-y))) << endl;
    else
        cout <<  ((a*x*x)+(b*(n-x)*(n-x))) << endl;
	}
}
