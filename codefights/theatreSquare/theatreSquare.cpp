int TheatreSquare(int n, int m, int a) {
    int x=0,y=0;
    if (n%a!=0) x++;
    if (m%a!=0) y++;
    y+=m/a;
    x+=n/a;
    return x*y;
}

