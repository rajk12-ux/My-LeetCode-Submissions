class Solution {
    public String[] divideString(String s, int k, char fill) {
        String[] parts=new String[s.length()/k + (s.length()%k==0 ? 0:1)];
        for(int i=0;i<s.length();i+=k){
            parts[i/k]=s.substring(i,Math.min(i+k,s.length()));
        }
        StringBuilder str= new StringBuilder(parts[parts.length-1]);
        while(str.length()<k){
            str.append(fill);
        }
        parts[parts.length-1]=str.toString();
        return parts;
    }
}