#include <iostream>
using namespace std;

int main(){
    int x1, x2, x3;
    cin>>x1>>x2>>x3;
    int max_val, min_val, mid_val;
    max_val = max(x1, max(x2, x3));
    min_val = min(x1, min(x2, x3));

    if(x1 < max_val && x1 > min_val){
        mid_val = x1;
    }else if(x2 < max_val && x2 > min_val){
        mid_val = x2;
    }else{
        mid_val = x3;
    }

    int min_dist = (max_val - mid_val) + (mid_val - min_val);
    cout<<min_dist<<endl;
    return 0;
}