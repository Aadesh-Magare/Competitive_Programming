#include <stdio.h>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include <ctime>
#include <set>
#include <map>
#include <queue>
#include <string>
#include <math.h>
#include <queue>
#include <memory.h>
#include <iostream>
#include <stack>
#include <complex>
#include <list>

using namespace std;

void ASS(bool b)
{
	if (!b)
	{
		++*(int*)0;
	}
}

#define FOR(i, x) for (int i = 0; i < (int)(x); i++)
#define CL(x) memset(x, 0, sizeof(x))
#define CLX(x, y) memset(x, y, sizeof(x))


const int N = 1 << 16;

struct RSQ {
	int a[N * 2];
	RSQ()
	{
		memset(a, 0, sizeof(a));
	}
	void Add(int pos, int dx) // add dx to a[pos]
	{
		for (int i = pos + N; i; i >>= 1)
			a[i] += dx;
	}
	int Sum(int L, int R) const // sum on interval [L, R) R-- for [L, R]
	{
		int res = 0;
		for (L += N, R += N; L < R; L >>= 1, R >>= 1) {
			if (L & 1)
				res += a[L++];
			if (R & 1)
				res += a[--R];
		}
		return res;
	}
};

struct invRSQ {
	int a[N * 2];
	invRSQ()
	{
		memset(a, 0, sizeof(a));
	}
	int Sum(int pos) const // sum in pos
	{
		int res = 0;
		for (int i = pos + N; i; i >>= 1)
			res += a[i];
		return res;
	}
	void Sum(int L, int R, int dx) // add dx to interval [L, R) R-- for [L, R]
	{
		for (L += N, R += N; L < R; L >>= 1, R >>= 1) {
			if (L & 1)
				a[L++] += dx;
			if (R & 1)
				a[--R] += dx;
		}
	}
};
