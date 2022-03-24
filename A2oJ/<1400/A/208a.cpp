#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    string token = "WUB";
    vector<string> ans;
    string temp;
    vector<int> index;
    if(s.length()<3){
        cout << s;
        exit(0);
    }
    
    for (int i = 0; i <= s.length()-3; i++)
    {
        int j;
        for (j = 0; j < 3;j++){
            if(s[i+j]!=token[j]){
                break;
            }
        }
        if(j==3){
            index.push_back(i);
        }
    }
    
    if(index.size()==0){
        cout<<s;
        exit(0);
    }
    string ttt = "";
    for (int i = 0; i < index[0]; i++)
    {
        ttt += s[i];
    }
    ans.push_back(ttt);
    for (int i = 0; i < index.size() - 1; i++)
    {
        int aa = index[i];
        int bb = index[i + 1];
        if (bb - aa == 3)
        {
        }
        else
        {
            string temp = "";
            for (int k = aa + 3; k < bb;k++){
                temp += s[k];
            }
            ans.push_back(temp);
        }
    }
    
    if(index[index.size()-1]+3==s.length()){

    }else{
        string temp = "";
        for (int k = index[index.size() - 1] + 3; k < s.length(); k++)
        {
            temp += s[k];
        }
        ans.push_back(temp);
    }
    for (int i = 0; i < ans.size();i++){
        cout << ans[i] << " ";
    }
    // for (int i = 0; i < index.size();i++){
    //     cout << index[i] << " ";
    // }
        return 0;
}