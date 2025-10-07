#include <bits/stdc++.h>
#define rr register
struct Node
{
	int s, c;
} a[100];
bool cmp(Node a, Node b)
{
	if (a.c != b.c)
		return a.c < b.c;
	return a.s < b.s;
}
bool operator==(Node a, Node b)
{
	if (a.c == b.c && a.s == b.s)
	{
		return true;
	}
	return false;
}
int main(void)
{
	for (rr int i = 1; i <= 3; ++i)
	{
		char tmp1, tmp2;
		std::cin >> tmp1 >> tmp2;
		a[i].s = tmp1 - 48; // smp
		if (tmp2 == 's')
			a[i].c = 1;
		if (tmp2 == 'm')
			a[i].c = 2;
		if (tmp2 == 'p')
			a[i].c = 3;
	}
	std::sort(a + 1, a + 1 + 3, cmp);
	if (a[1] == a[2] && a[2] == a[3])
	{ // 全部相等
		printf("0");
		return 0;
	}
	if (a[1].c == a[2].c && a[2].c == a[3].c && a[2].s - 1 == a[1].s && a[3].s - 1 == a[2].s)
	{ // 顺子
		printf("0");
		return 0;
	}
	if (a[1].c != a[2].c && a[2].c != a[3].c)
	{ // 都不相等
		printf("2");
		return 0;
	}
	if (a[1] == a[2])
	{ // 有两个相等
		printf("1");
		return 0;
	}
	if (a[2] == a[3])
	{
		printf("1");
		return 0;
	}
	if (a[1].c == a[2].c && a[2].s - a[1].s == 1)
	{ // 有两个连续
		printf("1");
		return 0;
	}
	if (a[2].c == a[3].c && a[3].s - a[2].s == 1)
	{
		printf("1");
		return 0;
	}
	if (a[1].c == a[3].c && a[1].s + 2 == a[3].s)
	{ // 要加在中间
		printf("1");
		return 0;
	}
	if (a[1].c == a[2].c && a[1].s + 2 == a[2].s)
	{
		printf("1");
		return 0;
	}
	if (a[2].c == a[3].c && a[2].s + 2 == a[3].s)
	{
		printf("1");
		return 0;
	}
	printf("2"); // 都不满足
	return 0;
}