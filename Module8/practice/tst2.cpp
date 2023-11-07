#include <iostream>
using namespace std;

int main(){
    for (int i =0; i<=25; i++){
        for(int j =0; j<=100;j++){
            if (i==0 && j==0){
                    cout<<"┏";
            }
            else if(i==0 && j==100){
                    cout<<"┓";
            }
            else if(i==25 && j==0){
                    cout<<"┗";
            }
            else if(i==25 && j==100){
                    cout<<"┛";
            }
            else if (j==0 || j==100){
                    cout << "┃";
            }
            else if (i==0||i==25){
                    cout<<"━";
            }
            else{
                    cout<<" ";
            }
        }
        cout << endl;
    }
    return 0;
  }