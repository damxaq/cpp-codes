double TriangleCoordinates(std::vector<std::vector<int>> n) {
    
    double a,b,c,ax,bx,cx,ay,by,cy,p,res;
    ax=abs(n[0][0]-n[1][0]);
    ay=abs(n[0][1]-n[1][1]);
    bx=abs(n[1][0]-n[2][0]);
    by=abs(n[1][1]-n[2][1]);
    cx=abs(n[2][0]-n[0][0]);
    cy=abs(n[2][1]-n[0][1]);
    a=sqrt(ax*ax+ay*ay);
    b=sqrt(bx*bx+by*by);
    c=sqrt(cx*cx+cy*cy);
    p=(a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

