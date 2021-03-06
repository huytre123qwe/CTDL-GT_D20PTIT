#include <bits/stdc++.h>
using namespace std;

int a[1001][1001];
int vs[1001];
int v, e;

void DFS(int u)
{
	vs[u] = 1;
	for(int i=1; i<=v; ++i)
		if(a[u][i] == 1 && vs[i] == 0)
			DFS(i);
}


int TPLT_DFS()
{
	int cnt = 0;
	for(int i=1; i<=v; ++i)
	{
		if(vs[i] == 0)
		{
			DFS(i);
			++cnt;
		}
	}
	return cnt;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		memset(a, 0, sizeof(a));
		memset(vs, 0, sizeof(vs));
		cin >> v >> e;
		for(int i=1; i<=e; ++i)
		{
			int x, y;
			cin >> x >> y;
			a[x][y] = 1;
			a[y][x] = 1;
		}
		cout << TPLT_DFS() << endl;
	}
 	return 0;
}

