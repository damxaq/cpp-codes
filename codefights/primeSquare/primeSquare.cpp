#define r return
int i, p(int a){
    for (i=2; i<a; i++) if (a%i==0) r 0;
    r 1;
}

int s=0,j, primeSquare(int n) {
    
    for (j=1; j<=n; j++) s+=p(j)?j*j:j;
    r p(n)?n*n:s;
}

