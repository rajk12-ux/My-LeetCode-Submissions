class Solution {
    public int romanValue(char a){
        switch(a){
            case 'I':
                 return 1;
            case 'V':
                 return 5;
            case 'X':
                 return 10;
            case 'L':
                 return 50;
            case 'C':
                 return 100;
            case 'D':
                 return 500;
            case 'M':
                 return 1000;
        }
        return 0;
    }
    public int romanToInt(String s) {
        int value=romanValue(s.charAt(s.length()-1));
        for(int i=s.length()-1;i>=1;i--){
            if(romanValue(s.charAt(i-1))>=romanValue(s.charAt(i))){
                value+=romanValue(s.charAt(i-1));
            }
            else{
                value-=romanValue(s.charAt(i-1));
            }
        }
        return value;
    }
}