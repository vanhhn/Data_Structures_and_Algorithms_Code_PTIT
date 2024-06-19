#include <iostream>
#include <stack>
#include <string>
#include <cctype>  // for isdigit function
#include <sstream> // for istringstream

using namespace std;

// Hàm trả về độ ưu tiên của toán tử
int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

// Hàm thực hiện phép toán giữa hai toán hạng
int applyOperation(int a, int b, char op, bool &divideByZero) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': 
            if (b == 0) {
                divideByZero = true;
                return 0;
            }
            return a / b;
    }
    return 0;
}

// Hàm đánh giá biểu thức trung tố
int evaluateInfix(const string &expression, bool &divideByZero) {
    stack<int> values; // ngăn xếp để lưu trữ các toán hạng
    stack<char> ops; // ngăn xếp để lưu trữ các toán tử

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == ' ') continue; // bỏ qua khoảng trắng

        // Nếu ký tự là dấu ngoặc mở
        if (expression[i] == '(') {
            ops.push(expression[i]);
        }
        // Nếu ký tự là số
        else if (isdigit(expression[i])) {
            int val = 0;
            while (i < expression.length() && isdigit(expression[i])) {
                val = (val * 10) + (expression[i] - '0');
                i++;
            }
            values.push(val);
            i--; // giảm i vì vòng lặp for cũng tăng i
        }
        // Nếu ký tự là dấu ngoặc đóng
        else if (expression[i] == ')') {
            while (!ops.empty() && ops.top() != '(') {
                int val2 = values.top(); values.pop();
                int val1 = values.top(); values.pop();
                char op = ops.top(); ops.pop();
                values.push(applyOperation(val1, val2, op, divideByZero));
                if (divideByZero) return 0;
            }
            ops.pop(); // loại bỏ dấu ngoặc mở
        }
        // Nếu ký tự là toán tử
        else {
            while (!ops.empty() && precedence(ops.top()) >= precedence(expression[i])) {
                int val2 = values.top(); values.pop();
                int val1 = values.top(); values.pop();
                char op = ops.top(); ops.pop();
                values.push(applyOperation(val1, val2, op, divideByZero));
                if (divideByZero) return 0;
            }
            ops.push(expression[i]);
        }
    }

    // Hoàn thành các phép toán còn lại trong ngăn xếp
    while (!ops.empty()) {
        int val2 = values.top(); values.pop();
        int val1 = values.top(); values.pop();
        char op = ops.top(); ops.pop();
        values.push(applyOperation(val1, val2, op, divideByZero));
        if (divideByZero) return 0;
    }

    return values.top();
}

int main() {
int T;
    cin >> T;
    cin.ignore();  // Bỏ qua ký tự newline sau số lượng bộ test

    for (int i = 0; i < T; ++i) {
        string expression;
        getline(cin, expression);
        bool divideByZero = false;
        int result = evaluateInfix(expression, divideByZero);
        if (divideByZero) {
            cout << "0" << endl;
        } else {
            cout << result << endl;
        }
    }
    return 0;
}