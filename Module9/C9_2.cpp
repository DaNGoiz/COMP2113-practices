#include <iostream>
#include <string>
#include <vector>
using namespace std;

void print(vector<string> shoplist){
    cout << "Items: ";
    for (int i = 0; i < shoplist.size(); i++) {
        cout << shoplist[i];
        if (i < shoplist.size() - 1) cout << ", ";
    }
    cout << endl;
}
int main () {
    vector<string> shoplist;
    print(shoplist);
    
    shoplist.push_back("eggs");
    shoplist.push_back("milk");
    shoplist.push_back("sugar");
    shoplist.push_back("chocolate");
    shoplist.push_back("flour");
    print(shoplist);

    shoplist.pop_back();
    print(shoplist);

    shoplist.push_back("coffee");
    print(shoplist);

    for (int i = 0; i < shoplist.size(); i++) {
        if (shoplist[i] == "sugar") shoplist[i] = "honey";
    }
    print(shoplist);

    for (int i = 0; i < shoplist.size(); i++) {
        if (shoplist[i] == "milk") {
            for (int j = i; j < shoplist.size() - 1; j++) {
                shoplist[j] = shoplist[j+1];
            }
            shoplist.pop_back();
        }
    }
    print(shoplist);

    return 0;
}