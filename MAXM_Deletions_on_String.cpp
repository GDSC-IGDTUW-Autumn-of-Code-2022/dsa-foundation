/*You are given a string s consisting of only lowercase English letters. In one operation, you can:

Delete the entire string s, or
Delete the first i letters of s if the first i letters of s are equal to the following i letters in s, for any i in the range 1 <= i <= s.length / 2.
For example, if s = "ababc", then in one operation, you could delete the first two letters of s to get "abc", since the first two letters of s and the following two letters of s are both equal to "ab".
Return the maximum number of operations needed to delete all of s*/



vector<int> XYZ(string s){
    int len=0;
    vector<int> xyz(s.length(),0);
    int i=1;
    while(i<s.length()){
        if(s[i]==s[len])
        {
            len++;
            xyz[i]=len;
            i++;
        }
        else{
            if(len!=0){
                len=xyz[len-1];
            }
            else{
                xyz[i]=0;
                i++;
            }
        }
    }
    return xyz;
}
int deleteString(string s) {
    int c=0;
    int f=0;
    while(s.length()>0){
        f=0;
        vector<int>xyz=XYZ(s);
        for(int i=xyz.size()-1;i>=0;i--){
            if(xyz[i]*2==(i+1)){
                c++;
                f=1;
                s.erase(0,xyz[i]);
                break;
            }
        }
        if(f!=1){
            break;
        }
    }
    return  c+1;
        
}

