#define h std::
#define q h vector<h string>
#define w(a,b) if (s[i][j] == a) z+=b;

q geneticMicroRobots(int n, q s) {
    
    q r;
    h string z;
    for (int i=0; i<n; i++){
        z.clear();
        for (int j=0; j<s[i].size(); j++){
            w('A','T')
            w('T','A')
            w('C','G')
            w('G','C')
        }
        h reverse(h begin(z), h end(z));
        r.push_back(z);
    }
    return r;
}
