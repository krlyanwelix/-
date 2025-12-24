#include "class.h"

int main()
{
	int n = 5;  //顶点数
	CompactGraph g(n);

	//顶点0的邻居：1、2
	g.list.push_back(1);
	g.list.push_back(2);
	g.h[0] = 0;
	//顶点1的邻居：3
	g.list.push_back(3);
	g.h[1] = 2;
	//顶点2的邻居：3
	g.list.push_back(3);
	g.h[2] = 3;
	//顶点3的邻居：4
	g.list.push_back(4);
	g.h[3] = 4;
	//顶点4无邻居
	g.h[4] = 5;
	//h[n]指向list末尾
	g.h[5] = 5;

	TopoSort(g);

	return 0;
}