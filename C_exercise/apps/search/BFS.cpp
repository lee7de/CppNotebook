/*

宽度优先搜索
参考来源： 
https://blog.csdn.net/qq_46056407/article/details/123611405?utm_medium=distribute.pc_relevant.none-task-blog-2~default~baidujs_baidulandingword~default-1-123611405-blog-53188837.pc_relevant_default&spm=1001.2101.3001.4242.2&utm_relevant_index=4

*/
#include<iostream>
#include<cstring>
#include<queue>
using namespace std;
typedef pair<int, int>PII;
const int N = 110;
int g[N][N], d[N][N];
int n, m;
 
int bfs(){
    //初始化
	memset(d, -1, sizeof d);
	queue<PII>q;
	q.push({0, 0});
	d[0][0] = 0;
	int dx[4] = {0, -1, 1, 0}, dy[4] = {1, 0, 0, -1};
	
	while(q.size()){
        //判空取头
		PII t = q.front();
		q.pop();
        //拓展
		for(int i = 0; i < 4; i ++){
			int x = t.first + dx[i], y = t.second + dy[i];
			if(x >= 0 && x < n && y >= 0 && y < m && d[x][y] == -1 && g[x][y] == 0){
				//入队并实施相应操作。
                q.push({x, y});
				d[x][y] = d[t.first][t.second] + 1;
			}
		}
	}
	return d[n - 1][m - 1];
}
int main(){
	cin >> n >> m;
	for(int i = 0; i < n; i ++){
		for(int j = 0; j < m; j ++){
			cin >> g[i][j];
		}
	}
	cout << bfs() << endl;
	return 0;
} 
