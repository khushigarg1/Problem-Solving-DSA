#include<bits/stdc++.h>
using namespace std;

class players
{
    int pindex;
    string name;
    bool victory = false;
    public :
    bool act_status = false;
        int position = 0;
        int r;
        void setplayername()
        {
            cout << endl;
            cout <<"enter name for player "<<pindex + 1 <<":\n";
            getline(cin >> ws , name);
        }
        string getname()
        {
            return name;
        }
        void set_victory()
        {
            victory = true ;
            cout << name <<"reached 100 and win"<<endl;
            act_status = false;
        }
        void diceroll(){
            r = 1 + rand()%6;
            if(r==6)
            {
                cout << "you rolled 6 so roll again " <<diceroll() <<endl;
            }
            else if(position + r <=100)
            {
                position = position + r;
            }
            else
            {
                set_victory();
            }
        }
        void setact_statustrue()
        {
            act_status = true;
        }
        void setact_statusfalse()
        {
            act_status = false;
        }

};

    int num_players(int &nop)
    {
            system("cls");
        do
        {
            cout <<"enter number of players less than 6 : "<<endl;
            cin >> nop;
        }
        while(nop > 5 || nop <=1);
    }

//----------------------------------INSTRUCTIONS
void HowToPlay()
{
    cout << "First player to reach 100 wins!!\n";
    cout << "Rest of the players will be ranked followingly\n";
    cout << "If you roll a 6, you be awarded one more turn\n";
    cout << "Step 1: Enter Number of players\n";
    cout << "Step 2: Give name to each player according to your choice\n";
    cout << "Step 3: Now the game will start, Press enter to roll the dice at your turn\n";

    cout << endl
         << endl
         << "PRESS ANY KEY.........";
    getch();
    system("cls");
}

int main(){
    srand ((unsigned)time(NULL));
    system("cls");
// INSTRUCTIONS
    HowToPlay();

    int nop;
    num_players(nop);
    
    players player[5] = {0,1,2,3,4};

    for(int i = 0 ; i < nop ; i++)
    {
        player[i].act_status = true;
    }
    cout << endl;
    for(int i = 0 ; i < nop ; i++)
    {
        system("cls");
        player[i].setplayername();
    }

    cout <<endl;
    cout << "number of players are : "<<endl;
    for(int i = 0 ; i < nop ; i++)
    {
        cout << "player " <<i+1 <<"-> "<< player[i].getname();
    }

    system("cls");
    cout <<"enter any key to start game : "<<endl;
    getch();


    for(int n = 0 ; n <nop; n++)
    {
        if(player[n].act_status == true)
        {
            continue;
        }
        
            int block = 100;
            int temp ;
            for(int i =10 ; i>=1;i--)
            {
                
               if(block==10)
               {
                   temp = block;
                   temp -=9;
                   for(int b=10 ; b>=1 ; b--)
                   {
                       if(temp ==10)
                       {
                           cout << temp <<" |";
                       }
                       else{
                           cout << temp <<"  |";
                       }
                       //code;
                       cout <<setw(5);
                       //code
                       cout <<"|";
                       temp++;
                   }
               }
               else if(block %20 ==0)
               {
                   temp = block;
                   for(int a = 10 ; a>=1 ; a--)
                   {
                       if(temp == 100)
                       {
                           cout << temp <<"|";
                       }
                       else
                       {
                       cout << temp <<" |";
                       }
                       //code
                       cout <<setw(5);
                       //code
                       cout << "|";
                       temp --;
                   }
                   block = temp;
               }
               else
               {
                   temp = block;
                   temp -= 9;
                   for(int j = 10 ; j>=1; j--)
                   {
                       cout << temp <<" |";
                       //code
                       cout <<setw(5);
                       //code
                       cout <<"|";
                       temp ++;
                   }
                   temp = temp - 11;
                   block = temp;
               }
                   cout <<endl;
            
    }    
return 0;
}