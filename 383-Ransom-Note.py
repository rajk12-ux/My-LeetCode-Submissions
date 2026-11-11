class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
        int[] freq_r=new int[26];
        int[] freq_m=new int[26];
        for(char c:ransomNote.toCharArray()){
            ++freq_r[c-'a'];
        }
        for(char c:magazine.toCharArray()){
            ++freq_m[c-'a'];
        }
        for(int i=0;i<26;i++){
            if(freq_r[i]>freq_m[i])return false;
        }
        return true;
    }
}