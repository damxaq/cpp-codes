std::vector<std::string> r, CodeFight(int n) {
    std::string z;
    for (int i=1; i<=n; i++)
        z=i%5==0 && i%7==0?"CodeFight":i%5==0?"Code":i%7==0?"Fight":std::to_string(i), r.push_back(z);
    
    
    return r;

}

