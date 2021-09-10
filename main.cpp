#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string,int> m;
    m["Narendra"] = 20;
    m["Jha"] = 30;

    //INSERT

    m.insert({"Hobbies", 15});

    for(auto x: m){
        cout<<x.first<<" "<<x.second<<endl;
    }


    //FIND(), BEGIN() & END()
    //m.find() will return iterator to the element while m.end  returns an iterator pointing to the position past the last element in the container in the unordered_map container. 


    if(m.find("Narendra")!=m.end())
        cout<<"Found"<<endl;
    else
        cout<<"Not Found"<<endl;

    for(auto it=m.begin();it!=m.end();it++)
        cout<<(it->first)<<" "<<(it->second)<<endl;

    //COUNT()


    if(m.count("Narendra")>0)
        cout<<"found"<<endl;
    else
        cout<<"not found"<<endl;

    //ERASE() & SIZE()


    cout<<"Size "<< m.size() <<endl;
    m.erase("Narendra");
    m.erase(m.begin(),m.end());
    cout<<"Size "<<m.size()<<endl;

    return 0;
}