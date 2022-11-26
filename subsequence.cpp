void subsequence(string str)
{
    unordered_set<string> st;

    for (int i = 0; i < str.length(); i++) {

        for (int j = str.length(); j > i; j--) {
            string sub_str = str.substr(i, j);
            st.insert(sub_str);

            for (int k = 1; k < sub_str.length(); k++) {
                string sb = sub_str;
 
                sb.erase(sb.begin() + k);
                subsequence(sb);
            }
        }
    }
}
