class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        sort(candyType.begin(), candyType.end());
        int a = -1, c = 0;
        for(int i: candyType){
            if(i != a){
                c++;
                a = i;
                if(c > candyType.size() / 2){
                    return candyType.size() / 2;
                }
            }
        }
        return c;
    }
};