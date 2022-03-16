#include<bits/stdc++.h>
using namespace std;
int check_range(int n){
    if (-1000 <= n && n <= 1000) return 1;
    return 0;
    }
    int main()
    {
        int flag = 1;
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int x3, x4, y3, y4;
        if (y1 == y2)
        {
            int side = x2 - x1;
            x3 = x2;
            y3 = y2 + side;
            x4 = x1;
            y4 = y1 + side;
            if( check_range(y3) && check_range(y4)){

            }
            else{
                 y3 = y2 + side;
                 y4 = y1 + side;
                 if( check_range(y3) && check_range(y4)){

            }
            else{
                flag = 0;
            }
            }
        }
        else if (x1 == x2)
        {
            int side = y2 - y1;
            x3 = x1 + side;
            x4 = x2 + side;
            y3 = y1;
            y4 = y2;
           // cout << "HII" << endl;
            if (check_range(x3) && check_range(x4))
            {
            }
            else{

                x3 = x1 - side;
                x4 = x2 - side;
                if(check_range(x3) && check_range(x4)){

            }
            else{
                flag = 0;
            }
            }
        }
        else{
            int side1 = abs(x2 - x1);
            int side2 = abs(y2 - y1);
            if(side1!=side2){
                cout << "-1";
                return 0;
            }
            x3 = x2;
            x4 = x1;
            y3 = y1;
            y4 = y2;
            
            

                
                if(check_range(x3) && check_range(x4) && check_range(y2) && check_range(y4)){

            }
            else{
                flag = 0;
            }
            
        }
    if(flag==0){
        cout << "-1";

    }
    else{
            cout << x3 << " " << y3 << " " << x4 << " " << y4;

    }
    return 0;
}