class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
         
        unordered_map<string, vector<string>>m;
        
        for (auto it : paths) {
            
            stringstream s(it);
            string dir;
            string file;
            
            getline(s, dir, ' ');
            
            while (getline(s, file, ' ')) {
                string content = file.substr(file.find('(') + 1, file.find(')') - file.find('(') - 1);
                string name = dir + '/' + file.substr(0, file.find('('));
                m[content].push_back(name);
            }
        }
        vector<vector<string>> res;
        for (auto it = m.begin(); it != m.end(); it++) {
            if (it->second.size() > 1) {
                res.push_back(it->second);
            }
        }
        return res;
    }
};