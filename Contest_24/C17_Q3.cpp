#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void subsum(vector<int>& vec, int ind, int n, vector<int>& vis, vector<int>& temp){
    if(ind >=n){
        leftsubsum(temp, vis);
    }
}



int main(){
    int t; 
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> vec;
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        
    }
    
return 0;
}