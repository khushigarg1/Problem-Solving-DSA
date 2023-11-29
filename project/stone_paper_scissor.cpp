#include<bits/stdc++.h>
using namespace std;

void howtoplay()
{
    cout <<endl;
    cout << "firstly we have to know that here :"<<endl <<"0 -> stone "<<endl <<"1-> paper " << "2 -> scissor ";
    cout << "if first player gets 1 and second gets 0 then first will win "<<endl;
    cout << "if first player gets 0 and second gets 2 then first will win "<<endl;
    cout << "if first player gets 2 and second gets 1 then first will win "<<endl;
    cout << "now press any key to play ......" <<endl;
    getch();
    system("cls");
}

int main(){
        int player1choice ;
        int player2choice ;
        int player1score =0 ;
        int player2score =0 ;
    howtoplay();
    srand((unsigned)time(NULL));
    system("cls");
    string choice[3] = {"rock", "paper", "scissor" };
    int num_turns;
    cout <<"plz enter that how many times do u want to play this game : " << endl;
    cin >> num_turns;
    
    for (int i = 0 ; i < num_turns ; i++)
    {
        cout <<"player 1 press any key to play ..."<<endl;
        getc;
        player1choice = rand() % 3;
        
        cout <<"player 2 press any key to play ..."<<endl;
        // getch();
        system("cls");
        player2choice = rand() % 3;
    
        if(player1choice == player2choice)
        {
            cout <<"------Tie-------";
        }
        else if(player1choice == 0 && player2choice == 2)
        {
            player1score ++;
        }
        else if(player1choice > player2choice)
        {
            player1score++;
        }
        else{
            player2score++;
        }
    }
    if(player1score > player2score)
    {
        cout <<"congrats player1 bcoz u win........ "<<endl;
    }
    else if(player1score < player2score)
    {
        cout <<" congrats player2 bcoz u win....... "<<endl;
    }
    else{
        cout <<"---~tie~---"<<endl;
    }
return 0;
}