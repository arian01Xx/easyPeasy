#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        //prices[j] <= prices[i] && j>i
        int n=prices.size();
        vector<bool> visited(n, false);
        for(int i=0; i<prices.size(); i++){
            for(int j=i+1; j<prices.size(); j++){
                if(prices[j]<=prices[i] && !visited[i]){
                    prices[i]=prices[i]-prices[j];
                    visited[i]=true;
                }else continue;
            }
        }
        return prices;
    }
};

int main(){
    return 0;
}