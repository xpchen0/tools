#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

typedef pair<string,int> PAIR;
/**
 * Compare x and y second value;
 * @param flag: flag is 1, sort by big to little; else flag if 0, sort by little to big;
 * @return: 0 or 1.
*/
int cmp(const PAIR& x, const PAIR& y)    
{   
    return x.second > y.second;    
}
// template <typename T1, typename T2>
// int cmp_by_value_down(const T1& x, const T2& y)
// {
//     return x.second < y.second;
// }

// template <typename T1, typename T2>
// int cmp_by_value_up(const T1& x, const T2& y)
// {
//     return x.second > y.second;
// }
/**
 * 对map按照value值排序。
*/
int main()
{
    map<string,int> str_int_map;
    str_int_map.insert(make_pair("a",1));
    str_int_map.insert(make_pair("b",4));
    str_int_map.insert(make_pair("c",23));
    str_int_map.insert(make_pair("d",13));

    vector<PAIR> map_vec(str_int_map.begin(), str_int_map.end());
    sort(map_vec.begin(), map_vec.end(), cmp);
    
    for(auto it=map_vec.begin(); it!=map_vec.end(); it++)
        cout << it->first << " ," << it->second << endl;
    
    return 0;
}
