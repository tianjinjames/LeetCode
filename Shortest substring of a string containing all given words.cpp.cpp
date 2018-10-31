public int findShortest(string sentence, vector<string> words)
{
    stringstream ss(s);
    istream_iterator<string> begin(ss);
    istream_iterator<string> end;
    vector<string> vstrings(begin, end);

    unordered_map<string, int> wordMap;
    for(auto w : words)
        wordMap[w]++;

    unordered_map<string, int> resMap;
    int left = 0;
    string res;
    for(int i = 0; i < vstrings.size(); i++){
        auto candidate = vstrings[i];

        if(wordMap.find(candidate) != wordMap.end()){
            if(resMap.size() == 0){
                left = i;
                resMap[candidate] = i;
            }
            else if(resMap.size() < words.size()){
                resMap[candidate] = i;
                if(resMap.size == words.size()){
                    res = max(res, i-left+1);
                }
            }
            else if(resMap.size == words.size()){
                res = max(res, i-left+1);

                int oldLeft = left;
                int newLeft = resMap[candidate]+1;
                while(resMap.find(vstrings[newLeft]) == resMap.end()){
                    newLeft++;
                }
                left = newLeft;
                while(oldLeft < newLeft){
                    if(resMap.find(vstrings[oldLeft]) != resMap.end()){
                        resMap.erase(vstrings[oldLeft]);
                    }
                    oldLeft++;
                }
                resMap[candidate] = i;
            }
        }
    }
}