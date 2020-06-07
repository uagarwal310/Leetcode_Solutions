//https://leetcode.com/problems/queue-reconstruction-by-height/
class Solution
{
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people)
    {
        sort(people.begin(), people.end(), [](const vector<int>& a, const vector<int>& b)
        {
            return (a[0] > b[0] || (a[0] == b[0] && a[1] < b[1]));
        });
        for (int i = 1; i < people.size(); ++i)
        {
            int k = i;
            while (people[k][1] < k && k > 0)
            {
                swap(people[k - 1], people[k]);
                k--;
            }
        }
        return people;
    }
};