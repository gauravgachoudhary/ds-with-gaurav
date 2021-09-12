/////Number of Pairs of Interchangeable Rectangles
// soution
class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        unordered_map<double,int> map;   // key is ratio and value is count 
        long long ans = 0;
        long long temp = 0;

        for(auto i:rectangles)
        {
            double r = i[0]*1.0/i[1];   // calculating ratio of each rectange
            map[r]++;                       
        }

        for(auto i:map)
        {
            temp = i.second;
            ans += temp*(temp-1)/2;   // number of interchange possible for each set
        }
        return ans;
    }
};