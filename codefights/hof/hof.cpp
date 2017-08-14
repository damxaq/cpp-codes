std::string Hof(int n) {
    long x=3, i=2, m=0, d=2, s=3, k=0, t[99000]={3};
    for(;n>2;i++,k++)
       if (x+i-s>d) {
           if (x+i-s==t[m]) m++,i++;
           d=(x+=i)-s;
           if (k<90000) t[k]=x;
           s=x;
           n--;
       }
    return n>1?std::to_string(x):n>0?"1":"3";
}

