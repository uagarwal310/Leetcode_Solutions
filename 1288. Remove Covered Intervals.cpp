class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) 
    {
        if(intervals.size()==0)
            return 0;
        int count=0;
        sort(intervals.begin(),intervals.end());
        int start=intervals[0][0], end=intervals[0][1];
        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i][0]>= start &&  intervals[i][1]<=end)
            {
                count++;
                continue;
            }
            if(intervals[i][0]<= start &&  intervals[i][1]>=end)
            {
                count++;
                start=intervals[i][0];
                end=intervals[i][1];
                continue;
            }
            start=intervals[i][0];
            end=intervals[i][1];
        }
        return intervals.size()-count;
        
    }
};