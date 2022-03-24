#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    int mean = sum / n;
    sort(v.begin(), v.end());
    int i = 0;
    int j = n - 1;
    while (1)

    {
        if(i>=j){
            break;
        }
        if(v[i]!=mean && v[j]!=mean){
            v[i] = v[i] + 1;
            v[j] = v[j] - 1;

        }
        else if(v[i]==mean){
            ++i;

        }
        else{
            --j;
        }
    }
    int count = 0;
    for (int i = 0; i < n;i++){
        if(v[i]==mean){
            ++count;
        }
    }

    cout << count << endl;
    return 0;
}