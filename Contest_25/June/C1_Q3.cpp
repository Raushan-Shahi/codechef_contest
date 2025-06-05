#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int max_score(int n,int ind, int a, int b, int c, int d, int zero, int one, int score){
    if(ind >n)
        return 0;
    int ans=0;
    score+= a;
    score+= d*one;
    int temp= max_score(n,ind+1, a,b,c,d,zero+1, one, score);
    score+= temp;
    ans = max(ans,score);
    
    score-=a;
    score-=d*one;
    score-=temp;
    score+= b;
    score+= c*zero;
    int temp2= max_score(n,ind+1, a,b,c,d,zero, one+1, score);
    score+= temp2;
    ans = max(ans,score);
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n, a,b,c,d;
        cin >> n >> a >> b >> c >> d;
        int final = max_score(n,0,a,b,c,d,0,0,0);
        cout << final << endl;
    }
    
return 0;
}