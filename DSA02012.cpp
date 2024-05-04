#include <iostream>
using namespace std;

int countPaths(int M, int N, int A[][100]) {
    int dp[M][N];
    
    // Khởi tạo giá trị cho dp[0][0]
    dp[0][0] = 1;
    
    // Tính giá trị cho các ô còn lại trong dp[][] theo công thức dp[i][j] = dp[i-1][j] + dp[i][j-1]
    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            if(i > 0 && j > 0) {
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
            else if(i > 0) {
                dp[i][j] = dp[i-1][j];
            }
            else if(j > 0) {
                dp[i][j] = dp[i][j-1];
            }
        }
    }
    
    // Trả về giá trị của dp[M-1][N-1]
    return dp[M-1][N-1];
}

int main() {
    int T;
    cin >> T;
    
    while(T--) {
        int M, N;
        cin >> M >> N;
        
        int A[100][100];
        for(int i = 0; i < M; i++) {
            for(int j = 0; j < N; j++) {
                cin >> A[i][j];
            }
        }
        
        int result = countPaths(M, N, A);
        cout << result << endl;
    }
    
    return 0;
}