#define h a==

int ElectronicNumbers(int n) {
    int r,c,p,a,i=0;
    if (n==6) return 0;
    while(1){
        r=0;
        c=i;
        p=log10(i)+1;
        for (int j=0; j<p; j++){
            a=c%10;
            if (h 0 || h 9 || h 6) r+=6;
            if (h 1) r+=2;
            if (h 2 || h 5 || h 3) r+=5;
            if (h 4) r+=4;
            if (h 7) r+=3;
            if (h 8) r+=7;
            c/=10;
        }
        if (r==n) return i;
        i++;
    }
}

