//https://leetcode.com/problems/defanging-an-ip-address/
class DefangingIPAddress 
{
    public String defangIPaddr(String address) 
    {
        int i=address.indexOf('.');
        int j=address.lastIndexOf('.');
        String s1=address.substring(0,i);
        String s4=address.substring(j+1);
        address=address.substring(i+1);
        j=address.lastIndexOf('.');
        address=address.substring(0,j);
        i=address.indexOf('.');
        System.out.println(address);
        String s2=address.substring(0,i);
        String s3=address.substring(i+1);
        address=s1+"[.]"+s2+"[.]"+s3+"[.]"+s4;
        return address;
    }
}