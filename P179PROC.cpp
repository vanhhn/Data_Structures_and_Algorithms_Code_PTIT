#include <iostream>
#include <vector>
using namespace std;

int countUglyNumbers(string N) {
    int n = N.length();

    // Tạo bảng DP có kích thước n x 4 x 2
    // dp[i][j][k] đại diện cho số lượng cách tạo ra số xấu xí từ i đến n-1
    // với j là số nguyên tố có một chữ số (2, 3, 5, 7)
    // và k là chỉ số dấu (+ hoặc -)
    vector<vector<vector<int>>> dp(n, vector<vector<int>>(4, vector<int>(2)));

    // Khởi tạo giá trị ban đầu
    // Nếu chữ số cuối cùng chia hết cho số nguyên tố có một chữ số, đánh dấu là có một cách tạo số xấu xí
    for (int j = 0; j < 4; j++) {
        if ((N[n - 1] - '0') % (2 * j + 2) == 0)
            dp[n - 1][j][0] = 1;
    }

    // Tính toán các giá trị DP từ phải sang trái
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j < 4; j++) {
            // Tính dp[i][j][0]
            if ((N[i] - '0') % (2 * j + 2) == 0) {
                dp[i][j][0] += dp[i + 1][j][0] + dp[i + 1][j][1];
            }

            // Tính dp[i][j][1]
            for (int k = 0; k < 4; k++) {
                int num = (N[i] - '0') * 10 + (2 * k + 2);
                if (num % (2 * j + 2) == 0) {
                    dp[i][j][1] += dp[i + 1][k][0] + dp[i + 1][k][1];
                }
            }
        }
    }

    // Kết quả là tổng số cách tạo số xấu xí từ chữ số đầu tiên
    int count = 0;
    for (int j = 0; j < 4; j++) {
        count += dp[0][j][0] + dp[0][j][1];
    }

    return count;
}

int main() {
    string N = "12345";
    int result = countUglyNumbers(N);
    cout << "Số lượng cách tạo số xấu xí từ số N là: " << result << endl;
 system("pause");
   
}