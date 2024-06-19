#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int INF = 1e9;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int M, N;
        cin >> M >> N;
        vector<vector<int>> A(M, vector<int>(N));
        for (int i = 0; i < M; ++i) {
            for (int j = 0; j < N; ++j) {
                cin >> A[i][j];
            }
        }
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        // Initialize distances with infinity
        vector<vector<int>> dist(M, vector<int>(N, INF));
        dist[x1 - 1][y1 - 1] = A[x1 - 1][y1 - 1];

        // Priority queue for Dijkstra
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<>> pq;
        pq.push({dist[x1 - 1][y1 - 1], {x1 - 1, y1 - 1}});

        // Dijkstra's algorithm
        while (!pq.empty()) {
            int d = pq.top().first;
            int i = pq.top().second.first;
            int j = pq.top().second.second;
            pq.pop();

            if (i == x2 - 1 && j == y2 - 1) {
                cout << dist[i][j] << endl;
                break;
            }

            int dx[] = {-1, 1, 0, 0};
            int dy[] = {0, 0, -1, 1};
            for (int k = 0; k < 4; ++k) {
                int ni = i + dx[k];
                int nj = j + dy[k];
                if (ni >= 0 && ni < M && nj >= 0 && nj < N) {
                    if (dist[ni][nj] > dist[i][j] + A[ni][nj]) {
                        dist[ni][nj] = dist[i][j] + A[ni][nj];
                        pq.push({dist[ni][nj], {ni, nj}});
                    }
                }
            }
        }
    }
    return 0;
}