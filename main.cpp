#include <iostream>
using namespace std;

void dp(int n, int k){
    long long** matrix;
    const long long modulus = 1000000007;
    matrix = new long long*[n+1];
    for (int i = 0; i < n+1; i++){
        matrix[i] = new long long [n+1];
    }

    for (int i = 0; i < n + 1; i++) {
        matrix[i][i] = 1;
        matrix[i][0] = 1;
    }

    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j <= i - 1; j++) {
            matrix[i][j] = (matrix[i-1][j-1] + matrix[i-1][j])%modulus;
         }
        }

    long long number = matrix[n][k];
    long long result = number % modulus;
    cout << result;
    }





int main() {
    int n;
    int k;
    cin >> n >> k;
    dp(n,k);
    return 0;
}
