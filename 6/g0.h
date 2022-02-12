#ifndef g0_h
#define g0_h
size_t find_len_str(char const* str){
    size_t i=0;
    while (*str++) ++i;
    return i;
}
char const* max_suff(char const * const * text,char const* suff){
    size_t len_suff=find_len_str(suff);
    size_t mmax=0;
    char const* max_str=NULL;
    size_t tmp=0;
    for(int i=0;text[i][0] && text[i]!=nullptr;i++){
        tmp=0;
        size_t a=find_len_str(text[i]);
        size_t m=std::max(a,len_suff);
        size_t m1=std::min(a,len_suff);
        char const* big_str;
        char const* small_str;
        if (m==a) {
            big_str=text[i];
            small_str=suff;
        }else{
            big_str=suff;
            small_str=text[i];
        }
        m--;m1--;
        while (m>=0 && m1>=0){
            if (big_str[m]==small_str[m1]) tmp++;
            else break;
            m1--;m--;
        }
        if (tmp>mmax) {
            mmax=tmp;
            max_str=text[i];
        }
    }
    return max_str;
}
#endif /* g0_h */
