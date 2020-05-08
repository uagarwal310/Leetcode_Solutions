//https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/
class NumberOfStepsToReduceNumberToZero 
{
    public:
        int numberOfSteps (int num) 
        {
            int c=0;
            while(num!=0)
            {
                
                if(num%2==0)
                {
                    num/=2;
                    c++;
                }
                else
                {
                    num--;
                    c++;
                }
            }
            return c;
        }
};