#define q(a,b) if (k[i-1]==a) r+=b[l]+96;
std::string r, reverse_t9(auto k) {
    int l=0;
    int j[] = {1,2,3}, d[] = {4,5,6}, t[] = {7,8,9}, c[] = {10,11,12}, p[] = {13,14,15}, s[] = {16,17,18,19}, m[] = {20,21,22}, o[] = {23,24,25,26};
    for(int i=1; i<=k.size(); i++){
        if (k[i-1]==48 && k[i]!=48) r+=" ";
        if (k[i-1]==k[i] && k[i-1]!=48) l++;
        else{
            q(50,j) q(51,d) q(52,t) q(53,c) q(54,p) q(55,s) q(56,m) q(57,o)
            l=0;
        }
    }
return r;
}

