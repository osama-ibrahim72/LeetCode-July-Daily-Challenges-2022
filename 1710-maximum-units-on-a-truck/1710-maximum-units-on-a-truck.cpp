class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        vector<pair<int,int>>vec;
        for(int i=0;i<boxTypes.size();i++){
            vec.push_back({-boxTypes[i][1],boxTypes[i][0]});
        }
        long long sum =0;
        sort(vec.begin(),vec.end());
        for(int i=0;i<vec.size();i++){
            if(vec[i].second<=truckSize){
                sum += vec[i].first*-1*vec[i].second*1ll;
                truckSize-=vec[i].second;
            }
            else{
                sum += vec[i].first*-1*truckSize*1ll;
                truckSize=0;
            }
            if(truckSize==0)break;
        }
        return sum;
    }
};