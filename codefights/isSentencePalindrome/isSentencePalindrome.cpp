int y,i=0,u, isSentencePalindrome(std::string s) {
    u=y=s.size();
    for (; i<y;) s[i]=std::tolower(s[i++]);
    u--;
    for (i=0; i<y;){
        if ((s[i]>31 && s[i]<48) || (s[i]>57 && s[i]<65) || s[i]==124) {
            i++;
            continue;
        }
        if ((s[u]>31 && s[u]<48) || (s[u]>57 && s[u]<65) || s[u]==124) {
            u--;
            continue;
        }
        
        if (s[i++]!=s[u--]) return 0;
    }
return 1;
}

