class Solution {
public:
    long long countOfSubstrings(string word, int k) {
        int cnsont[word.size()];
        int lc=word.size();
        for(int i=word.size()-1;i>=0;i--){
            cnsont[i]=lc;
            if(word[i] != 'a' && word[i] != 'e' && word[i] != 'i' && word[i] != 'o' && word[i] != 'u'){
                lc=i;
            }
        }
        int ax=0,ex=0,ix=0,ox=0,ux=0,cnx=0;
        int dash[6]={0};
        int l=0,r=0;
        long long total=0;
        while(r<word.size()){
            switch(word[r++]){
                case 'a':
                    ++ax;
                    break;
                case 'e':
                    ++ex;
                    break;
                case 'i':
                    ++ix;
                    break;
                case 'o':
                    ++ox;
                    break;
                case 'u':
                    ++ux;
                    break;
                default:
                    ++cnx;
            }
            if(ax!=0 && ex!=0 && ix!=0 && ox!=0 && ux!=0 && cnx==k){
                int lp=l;
                while(l<r){
                    switch(word[l++]){
                        case 'a':
                            --ax;
                            break;
                        case 'e':
                            --ex;
                            break;
                        case 'i':
                            --ix;
                            break;
                        case 'o':
                            --ox;
                            break;
                        case 'u':
                            --ux;
                            break;
                        default:
                            --cnx;
                            break;
                    }
                    if(ax==0 || ex==0 || ix==0 || ox==0 || ux==0 || cnx!=k){
                        break;
                    }
                }
                total += 1ll*(cnsont[r-1]-r+1)*(l-lp);
            }
            while(cnx>k){
                switch(word[l++]){
                    case 'a':
                        --ax;
                        break;
                    case 'e':
                        --ex;
                        break;
                    case 'i':
                        --ix;
                        break;
                    case 'o':
                        --ox;
                        break;
                    case 'u':
                        --ux;
                        break;
                    default:
                        --cnx;
                        break;
                }
            }
        }
        return total;
    }
};