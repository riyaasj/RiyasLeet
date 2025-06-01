class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> res(num_people, 0);
        int a = 1, index = 0;
        while(candies){
            if(index == num_people){
                index = 0;
            }
            res[index] += min(candies, a);
            candies -= min(candies, a);
            a++;
            index++;
        }
        return res;
    }
};