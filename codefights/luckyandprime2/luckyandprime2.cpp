#define q return
int k, p (int a){
    if (a==2) q 1;
    if (a==1||a%2==0) q 0;
    for (k=3; k<a/2+1; k+=2)
        if (a%k==0) q 0; 
    q 1;
}

int j=0,t=1,i=1,m=0,s=0,luckyandprime2(int l, int r, int k) {

    bool b[r+2];
    b[0]=0;
    for (;j<=r+1; j++) b[j]=p(j)?1:0;
    
    for (;l<=r;l++,s=0){
        for (i=1; i<=l;i++) if (b[i] && l%i==0) s++;
        if (s==k) m++;
     }
  
    q m;
    
}

