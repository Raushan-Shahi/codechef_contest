#include <iostream>
#include <bits/stdc++.h>
using namespace std;
    
int main(){
    int t;
    cin >>t;
    while(t--)
    {
        int n;
        cin >>n;
        string a[n];
        for (int i = 0; i < n; i++)
            cin >>a[i];
        int count_a=0,count_b=0,count_ab=0,count_o=0;
        for (int i = 0; i < n; i++)
        {
            if(a[i]=="A")
                count_a++;
            else if(a[i] == "B")
                count_b++;
            else if(a[i]=="AB")
                count_ab++;
            else
                count_o++;
        }
        int x,y,z;
        x = count_a+count_ab+count_o;
        y=count_ab+count_b+count_o;
        int max_num=0;
        max_num = max(max_num,x);
        max_num = max(max_num,y);
        max_num = max(max_num,count_o);
        max_num = max(max_num,count_ab);
        cout <<max_num<<endl;
        
    }
return 0;
}