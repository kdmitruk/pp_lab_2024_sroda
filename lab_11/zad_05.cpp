#include <iostream>
int compar1(const void *v1, const void *v2){
    char *a=(char *)v1;
    char *b=(char *)v2;
    for(int i=0;;i++){
        char c=*(a+i), d=*(b+i);
        if(c=='\0' && d == '\0') return 0;
        if(c=='\0') return 1;
        if(d=='\0') return -1;
        if(std::tolower(c)>std::tolower(d)) return -1;
        if(std::tolower(c)<std::tolower(d)) return 1;
    }
}
int main() {
    char w1[]="Ala ma b";
    char w2[]="Ala ma a";
    std::cout<<compar1((const void*)w1,(const void*)w2)<<'\n';
    return 0;
}
