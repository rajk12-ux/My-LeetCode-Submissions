class Solution {
public:
    string intToRoman(int num) {
        string ones[10] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
        string tens[10] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string hrns[10] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string ths[4]={"","M","MM","MMM"};
        
        return ths[num/1000] + hrns[(num%1000)/100] + tens[(num%100)/10] + ones[num%10];
    }
};