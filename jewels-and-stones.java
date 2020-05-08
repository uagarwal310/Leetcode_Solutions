//https://leetcode.com/problems/jewels-and-stones/
class JewelsAndStones 
{
    public int numJewelsInStones(String J, String S) 
    {
        int n=0;
        for(int i=0;i<S.length();i++)
        {
            if(J.indexOf(S.charAt(i))!=-1)
                n++;
        }
        return n;
    }
}