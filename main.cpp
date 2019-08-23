#include <iostream>
#include <map>

using namespace std;

map<string, unsigned int> mapLovers(unsigned int num){
    map<string, unsigned int> mapLovers;
    map<string, unsigned int>::iterator itr;
    string country, name;
    for (int i = 0; i < num; ++i) {
        cin >> country;
        getline(cin,name,'\n');
        itr = mapLovers.find(country);
        if(mapLovers.end() == itr){
            mapLovers.insert(pair<string, unsigned int>(country,1));
        } else {
            itr->second +=1;
        }
    }
    return mapLovers;
}

void printPairs(map<string, unsigned int> mapLovers){
    map<string, unsigned int>::iterator itr;
    for(itr = mapLovers.begin(); itr != mapLovers.end(); itr++){
        printf("%s %d\n",itr->first.c_str(),itr->second);
    }
}

int main(int argc, char *argv[]) {
    unsigned int num;
    scanf("%u",&num);
    printPairs(mapLovers(num));
    return 0;
}
