//https://leetcode.com/problems/reverse-vowels-of-a-string/
class ReverseVowelsOfString 
{
    public String reverseVowels(String s) 
    {
        int lower=0;
        int upper=s.length()-1;
        String vowel="aeiouAEIOU";
        while(lower<upper)
        {
            char l=s.charAt(lower);
            char u=s.charAt(upper);
            if(vowel.indexOf(l)!=-1 && vowel.indexOf(u)!=-1)
            {
                s=s.substring(0,lower)+u+s.substring(lower+1,upper)+l+s.substring(upper+1);
                lower++;
                upper--;
            }
            if(vowel.indexOf(l)==-1)
                lower++;
            if(vowel.indexOf(u)==-1)
                upper--;
        }
        return s;
    }
}