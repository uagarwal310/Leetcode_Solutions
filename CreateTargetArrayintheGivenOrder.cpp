//https://leetcode.com/contest/weekly-contest-181/problems/create-target-array-in-the-given-order/
class Solution {
    public int[] createTargetArray(int[] nums, int[] index)
    {
        int ans[] = new int[nums.length];
        for (int i = 0; i < nums.length; i++)
        {
            insert(index[i], nums[i], ans);
        }
        return ans;
    }
    public void insert(int index, int value, int ans[])
    {
        for (int k = ans.length - 2; k >= index; k--)
        {
            ans[k + 1] = ans[k];
            //for(int k1=0;k1<ans.length;k1++)
            //System.out.print(ans[k1]+" ");
            //System.out.println();
        }
        ans[index] = value;
        /*for(int k=0;k<ans.length;k++)
            System.out.print(ans[k]+" ");
        System.out.println();*/
    }
}