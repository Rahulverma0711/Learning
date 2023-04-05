#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> &A) {
    int N = A.size();
    // this will store the absolute difference of all pairs
    vector<int> B(N * (N - 1) / 2);
    int k = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            B[k] = abs(A[i] - A[j]);
            k++;
        }
    }
    // sort the array B
    sort(B.begin(), B.end());
    // return the sum of largest and smallest value
    return B[0] + B[B.size() - 1];
}

int main() {
    int n;
    cin>>n;
    vector<int> A(n);
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cout << solve(A) << endl;
//     return 0;
}