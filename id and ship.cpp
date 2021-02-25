#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    char c;
   
        while(t--){
            cin>>c;
            
            if (c =='b'|| c=='B'){
                cout<<"BattleShip"<<endl;
            }
       
        if(c =='c'|| c=='C'){
            cout<<"Cruiser"<<endl;
        }
         if (c=='d'|| c=='D'){
            cout<<"Destroyer"<<endl;
        }
       if (c=='f'|| c=='F'){
            cout<<"Frigate"<<endl;
        }
}
    return 0;

}
