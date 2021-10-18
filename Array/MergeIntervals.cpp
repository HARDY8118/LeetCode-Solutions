class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end());
        
        int s=intervals[0][0];
        int e=intervals[0][1];
        
        vector<vector<int>> r;
        vector<int> v;
        for(unsigned int i=1;i<intervals.size();i++){
            if(intervals[i][0]<=e){
                e=max(intervals[i][1],e);
            }else{
                v={s,e};
                r.push_back(v);
                s=intervals[i][0];
                e=intervals[i][1];
            }
        }
        v={s,e};
        r.push_back(v);
        return r;
    }
};