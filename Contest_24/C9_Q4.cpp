#include <bits/stdc++.h>
using namespace std;
    

    
int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int A, B;
        cin >> A >> B;
        
        int X = 0;
        int min_diff = abs((A ^ X) - (B ^ X));
        
        for (int i = 1; i < 1 << 30; i <<= 1) {
            int new_X = X ^ i;
            int diff = abs((A ^ new_X) - (B ^ new_X));
            
            if (diff < min_diff) {
                X = new_X;
                min_diff = diff;
            }
        }
        
        cout << X << endl;
    }
    
    return 0;
}
