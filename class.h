#pragma once
#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>

typedef struct CompactGraph
{
	int n;    //结点数
	std::vector<int> list;   //list按顺序存储邻接点
	std::vector<int> h;      //h[i]存储顶点i在list中的起始位置

	CompactGraph(int n1) :n(n1)
	{
		h.resize(n + 1, 0);
	}
}CompactGraph;

void TopoSort(const CompactGraph& g);
