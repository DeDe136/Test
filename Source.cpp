#include <vector>
#include <iostream>
using namespace std;
void SangNTtrendoan(int l, int r)
{
	int a = r - l + 1;
	bool *nt;
	nt = new bool(a);
	for (int i = 0; i < r - l; i++)
	{
		nt[i] = true;
		cout << nt[i] << " ";
	}
}
int main()
{
	int l, r;
	cin >> l >> r;
	SangNTtrendoan(l, r);
	cout << "Doan Thanh De123";
	return 1;
}