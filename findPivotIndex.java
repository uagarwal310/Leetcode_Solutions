//https://leetcode.com/problems/find-pivot-index/
class FindPivotIndex 
{
    public int pivotIndex(int[] nums) 
    {
        int lower=0;
        int upper=nums.length-1;
        int suml=0,sumu=0;
        int uppera[]=new int[nums.length];
        int lowera[]=new int[nums.length];;
        for(int i=0;i<nums.length;i++)
        {
            suml+=nums[i];
            sumu+=nums[nums.length-1-i];
            lowera[i]=suml;
            uppera[nums.length-1-i]=sumu;
            //if(uppera[i]==lowera[i])
              //  return i;
        }
        for(int i=0;i<nums.length;i++)
            if(lowera[i]==uppera[i])
                return i;
        return -1; 
    }
}