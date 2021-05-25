#include <iostream>
using namespace std;
int main()
{
	long long t;
	cin >> t;
	for (long long i = 0; i < t; i++)
	{
		long long n, m,mn,mx;
		cin >> n;
		long long a[n];
		for (long long j = 0; j < n; j++)
		{
			cin >> a[j];
		}
		mn=a[0];mx=a[0];
		for (long long j = 0; j < n ; j++)
		{
		 if (mx<a[j])
		  mx=a[j];
		 if (mn>a[j])
		  mn=a[j];
		}
		// for (long long j = 0; j < n; j++)
		// {
		// 	cout << a[j] << " ";
		// }
		m = 2 * (mx - mn);
		cout << m << "\n";
	}
	return 0;
}
