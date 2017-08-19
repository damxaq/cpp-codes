#define q(a) 36000*(a[0]-48)+3600*(a[1]-48)+600*(a[3]-48)+60*(a[4]-48)+10*(a[6]-48)+(a[7]-48)
#define w std::string
#define r(z) if (u<z) return

w codemania_medal(w x, w y, w z, w v) {
    
    int u=q(x),g=q(y),s=q(z),b=q(v);
    r(g) "Gold";
    r(s) "Silver";
    r(b) "Bronze";
    return "None";
}
