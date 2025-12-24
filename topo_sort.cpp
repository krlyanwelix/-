#include"class.h"

void TopoSort(CompactGraph g)
{
	if (g.n == 0)
	{
		std::cout << "图为空";
		return;
	}

	g.h.push_back(g.list.size());
	std::vector<int> indegree(g.n + 1, 0); //一开始n个点入度都为0
	std::vector<int> order;   //拓扑序列
	std::stack<int> s;

	for (int i = 0; i < g.list.size(); i++)
	{
		int j = g.list[i];
		if(j > 0) indegree[j]++;   //每有一个指向该顶点的边，入度就+1
	}

	for (int i = 1; i <= g.n; i++)
	{
		if (indegree[i] == 0)
		{
			s.push(i);     //将入度为0的顶点入栈
		}
	}

	while (!s.empty())
	{
		int u = s.top();
		s.pop();
		order.push_back(u);    //出栈并加入到序列中

		for (int i = g.h[u]; i < g.h[u + 1]; i++)
		{
			int j = g.list[i];
			if (j > 0)
			{
				indegree[j]--;      //相邻点入度-1
				if (indegree[j] == 0)
				{
					s.push(j);   //将新的入度为0的点入栈，并重复以上操作
				}
			}
		}
	}

	//输出序列
	if (order.size() < g.n)   //有环
	{
		std::cout << "存在环" << std::endl;
	}
	else
	{
		std::cout << "拓扑排序序列为：";
		for (int i = 0; i < order.size(); i++)
		{
			std::cout << order[i] << " ";
		}
		std::cout << std::endl;
	}
}