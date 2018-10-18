#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

typedef pair<string,int> PAIR;
/**
 * Compare x and y second value;
 * @return: 0 or 1.
*/
int cmp(const PAIR& x, const PAIR& y)    
{   
    return x.second > y.second;    //return from top value to low value.
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
 * 对str_int_map按照值排序，排序之后的结果保存到map_vec，但str_int_map本身的顺序不变。
*/
int main()
{

    map<string,int> str_int_map;
    str_int_map.insert(make_pair("b",1));
    str_int_map.insert(make_pair("d",13));
    str_int_map.insert(make_pair("a",4));
    str_int_map.insert(make_pair("c",23));

    vector<PAIR> map_vec(str_int_map.begin(), str_int_map.end());
    sort(map_vec.begin(), map_vec.end(), cmp);
    
    cout << " ------排序结果：------- " <<endl;
    for(auto it=map_vec.begin(); it!=map_vec.end(); it++)
        cout << it->first << " ," << it->second << endl;
    cout << " ------排序后的map:------- " <<endl;
    for(auto it=str_int_map.begin(); it!=str_int_map.end();it++)
        cout << it->first << ", " << it->second << endl; //map本身会根据键值排序，不按照插入顺序存储。
    return 0;
}
