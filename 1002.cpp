#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    int n;
    cin >> n;
    int x1,y1;
    int x2,y2;
    int r1,r2;
    int circle_d = pow(x1-x2,2) + pow(y1-y2,2);
    int circle_m = pow(r1-r2,2);
    int circle_p = pow(r1+r2,2);
    for(int i=0;i<n;i++){
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        if(circle_d == 0){
            if(circle_m == 0){
                cout << "-1" << '\n';
            }
            else{
                cout << "0" << '\n';
            }
        }
        else if(circle_d == circle_m || circle_d == circle_p){
            cout << "1" << '\n';
        }
        else if(circle_m < circle_d && circle_d < circle_p){
            cout << "2" << '\n';
        }
        else{
            cout << "0" << '\n';
        }
    }
    return 0;
}
