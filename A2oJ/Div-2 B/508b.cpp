#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cin >> s;
    int n = s.length();
    int countEven = 0;

    for (int i = 0; i < n;i++){
        int t = s[i] - '0';
        //cout << t << " ";
        if (t % 2 == 0)
        {
            ++countEven;
        }
    }
    // cout << endl;
    if (countEven == 0)
    {
        cout << "-1";
        return 0;
        }
    int index=-1;
    
    int tmp = s[n - 1]-'0';
    for (int i = n - 2; i >= 0; i--)
    {
        int element = s[i] - '0';
        if (element % 2 == 0)
        {
            if(tmp>element){
                index = i;
            }
        }
    }
    if(index!=-1){
        swap(s[index], s[n - 1]);
        for (int i = 0; i < n; i++)
        {
            cout << s[i];
        }
        cout << endl;
        return 0;
    }
    for (int i = n - 2; i >= 0; i--)
    {
        int element = s[i] - '0';
        if(element%2==0){
            index = i;
            break;
        }
    }
     swap(s[index], s[n - 1]);
    for (int i = 0; i < n; i++)
        {
            cout << s[i];
        }
        cout << endl;

    
        return 0;
}