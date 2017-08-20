bool EasyNum(int n) {
    int a=n/100,b=(n%100)/10,c=n%10;
    int x=pow(a,b);
    if (x%c!=0 || (x/c)%a!=0) return false;
    return true;
}

