#include <bits/stdc++.h>
using namespace std;

 int dx[8]={-2,-1,1,2,2,1,-1,-2};
 int dy[8]={-1,-2,-2,-1,1,2,2,1};
 const int INF = 1e9;
int bfs_knight(vector<vector<int>> &grid, int x1, int y1, int x2, int y2)
{
  int N = grid.size();
  vector<vector<int>> dist(N, vector<int>(N, INF));
  queue<pair<int, int>> q;

  q.push({x1, y1});
  dist[x1][y1] = grid[x1][y1];

  while (!q.empty())
  {
    auto [x, y] = q.front();
    q.pop();

    for (int k = 0; k < 8; k++)
    {
      int nx = x + dx[k], ny = y + dy[k];
      if (nx >= 0 && nx < N && ny >= 0 && ny < N)
      {
        int new_dist = dist[x][y] + grid[nx][ny];
        if (new_dist < dist[nx][ny])
        {
          dist[nx][ny] = new_dist;
          q.push({nx, ny});
        }
      }
    }
  }

  return (dist[x2][y2] == INF) ? -1 : dist[x2][y2];
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int N;
    cin >> N;
    vector<vector<int>> grid(N, vector<int>(N));
    for (int i = 0; i < N; ++i)
    {
      for (int j = 0; j < N; ++j)
      {
        cin >> grid[i][j];
      }
    }
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    x1--;
    y1--;
    x2--;
    y2--; // Convert to 0-based index

    cout << bfs_knight(grid, x1, y1, x2, y2) << "\n";
  }
}