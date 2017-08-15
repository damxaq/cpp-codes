#define q double
int s=0,i,p,j, circleGrid(q X, q Y, q R) {
    q d,w,x,y;
    i=X-R;
    p=Y-R;
    for(; i<=2000; i++){
        d=fabs(i-X);
        for (j=p; j<=2000; j++){
            w=fabs(j-Y);
            if (sqrt(w*w+d*d)<R) s++;
        }
    }
    return s;
}
