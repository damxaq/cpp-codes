#define p std::string
std::vector<p> ISBN13(p n) {
    int c=10,t=0,s=0,i=0,b;
    p w,q;
    for (;c>1; i++)
        if (n[i]!=45) 
            b=n[i]-48, t+=c*b, w+=n[i], w+=c==10 || c==7 || c==2?"-":"", s+=c%2==0?b*3:b, c--;
    c=(11-t%11)%11, q=w, w+=c>9?'X':c+48, q+=(10-(38+s)%10)%10+48;
    return {"ISBN-10: "+w,"ISBN-13: 978-"+q};
}


