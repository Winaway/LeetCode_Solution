//
//  main.cpp
//  Playground
//
//  Created by 丁元虎 on 2018/10/13.
//  Copyright © 2018 丁元虎. All rights reserved.
//

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    std::string a = "abcdabcaba";
    auto i = a.length();
    char b[i];
    strcpy(b, a.c_str());
    
    map<char,int> m;
    for(int n=0;n<i;n++){
        m[b[n]]++;
    }
    
    vector<pair<int, char>> v;
    
    for (map<char, int>::iterator it = m.begin(); it != m.end(); it++)
        v.push_back(make_pair(it->second, it->first));
    sort(v.begin(), v.end());
    
    vector<char> c1;
    for (int k = 0; k<v.size(); k++) {
        int cnt =v[k].first;
        while(cnt>0){
            c1.push_back(v[k].second);
            cnt--;
        }
    }
    
    string str = "";
    //遍历vector
    for(vector<char>::iterator iter = c1.end()-1; iter != c1.begin()-1; --iter)
    {
        str += *iter;
    }
    
    cout<<str<<endl;
    return 0;
}
