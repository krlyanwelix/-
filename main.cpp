#include "class.h"

int main()
{
	int n = 8;
	CompactGraph g(n);

	g.list.push_back(2);
	g.list.push_back(3);
	g.h[1] = 0;

	g.list.push_back(3);
	g.list.push_back(7);
	g.h[2] = 2;

	g.list.push_back(4);
	g.h[3] = 4;

	g.list.push_back(5);
	g.list.push_back(6);
	g.h[4] = 5;

	g.list.push_back(0);
	g.h[5] = 7;

	g.list.push_back(0);
	g.h[6] = 8;

	g.list.push_back(8);
	g.h[7] = 9;

	g.list.push_back(0);
	g.h[8] = 10;

	TopoSort(g);

	return 0;
}