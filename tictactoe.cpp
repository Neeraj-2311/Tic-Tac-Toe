#include<iostream>
using namespace std;
                            //global declaration of elements
string var[9]={" "," "," "," "," "," "," "," "," "};
int isfull()
{
    if((var[0]!=" ") && (var[1]!=" ") && (var[2]!=" ") && (var[3]!=" ") && (var[4]!=" ") && (var[5]!=" ") && (var[6]!=" ") && (var[7]!=" ") && (var[8]!=" "))
    {
        return 1;
    }
    return 0;
}
                             //start function declaration
void start()
{
    cout<<"------------------------------"<<endl;
    cout<<"          TIC TAC TOE"<<endl;
    cout<<"------------------------------"<<endl<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  1  |  2  |  3  "<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  4  |  5  |  6  "<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  7  |  8  |  9  "<<endl;
    cout<<"     |     |     "<<endl;
}
                             //function for entries of players 
void entries()
{
    int data;
    string *ptr;
    ptr=var;
    while(isfull()!=1)
    {   
        cout<<"Player 1 (1-9): ";
        cin>>data;
        // asking position from user until all blocks filled
        while(ptr[data-1]!=" ")
            {
                if(isfull()==1)
                {
                break;
                }
                cout<<"WRONG POSITION !"<<endl;
                cout<<"Player 1 (1-9)"<<endl;
                cin>>data;
            }
        ptr[data-1]='X';
        cout<<"     |     |     "<<endl;
        cout<<"  "<<ptr[0]<<"  |  "<<ptr[1]<<"  |  "<<ptr[2]<<"  "<<endl;
        cout<<"_____|_____|_____"<<endl;
        cout<<"     |     |     "<<endl;
        cout<<"  "<<ptr[3]<<"  |  "<<ptr[4]<<"  |  "<<ptr[5]<<"  "<<endl;
        cout<<"_____|_____|_____"<<endl;
        cout<<"     |     |     "<<endl;
        cout<<"  "<<ptr[6]<<"  |  "<<ptr[7]<<"  |  "<<ptr[8]<<"  "<<endl;
        cout<<"     |     |     "<<endl;
        if (((var[0]==var[1]) && (var[1]==var[2]) && (var[0]!=" ")) || ((var[3]==var[4]) && (var[4]==var[5]) && (var[3]!=" ")) || ((var[6]==var[7]) && (var[7]==var[8]) && (var[6]!=" ")) || ((var[0]==var[3]) && (var[3]==var[6]) && (var[0]!=" ")) || ((var[1]==var[4]) && (var[4]==var[7]) && (var[1]!=" ")) || ((var[0]==var[4]) && (var[4]==var[8]) && (var[0]!=" ")) || ((var[2]==var[5]) && (var[5]==var[8]) && (var[2]!=" ")) || ((var[2]==var[4]) && (var[4]==var[6]) && (var[2]!=" ")))
            {
                cout<<"Player 1 is WINNER !!!"<<endl;
                break;
            }
        else if(isfull()==1)
            {
                cout<<"GAME IS DRAW !"<<endl;
                break;
            }
        cout<<"Player 2 (1-9): ";
        cin>>data;
        while(ptr[data-1]!=" ")
        {
            if(isfull()==1)
            {
                break; 
            }
            cout<<"WRONG POSITION !"<<endl;
            cout<<"Player 2 (1-9)"<<endl;
            cin>>data;
        }
        ptr[data-1]='O';
        cout<<"     |     |     "<<endl;
        cout<<"  "<<ptr[0]<<"  |  "<<ptr[1]<<"  |  "<<ptr[2]<<"  "<<endl;
        cout<<"_____|_____|_____"<<endl;
        cout<<"     |     |     "<<endl;
        cout<<"  "<<ptr[3]<<"  |  "<<ptr[4]<<"  |  "<<ptr[5]<<"  "<<endl;
        cout<<"_____|_____|_____"<<endl;
        cout<<"     |     |     "<<endl;
        cout<<"  "<<ptr[6]<<"  |  "<<ptr[7]<<"  |  "<<ptr[8]<<"  "<<endl;
        cout<<"     |     |     "<<endl;
        if (((var[0]==var[1]) && (var[1]==var[2]) && (var[0]!=" ")) || ((var[3]==var[4]) && (var[4]==var[5]) && (var[3]!=" ")) || ((var[6]==var[7]) && (var[7]==var[8]) && (var[6]!=" ")) || ((var[0]==var[3]) && (var[3]==var[6]) && (var[0]!=" ")) || ((var[1]==var[4]) && (var[4]==var[7]) && (var[1]!=" ")) || ((var[0]==var[4]) && (var[4]==var[8]) && (var[0]!=" ")) || ((var[2]==var[5]) && (var[5]==var[8]) && (var[2]!=" ")) || ((var[2]==var[4]) && (var[4]==var[6]) && (var[2]!=" ")))
            {
                cout<<"Player 2 is WINNER !!!"<<endl;
                break;
            }
        else if(isfull()==1)
            {
                cout<<"GAME IS DRAW !"<<endl;
                break;
            }
    }
}
                             // main function
void program()
{
    start();
    cout<<"Player 1 is : X"<<endl;
    cout<<"Player 2 is : O"<<endl;
    entries();
}
int main()
{   program();
    /*char ch;
    program();
    cout<<"Do you want to play again? (y/n) : ";
    cin>>ch;
    if(ch=='y' || ch=='Y')
    {
        do
        {
            program();
            cout<<"Do you want to play again? (y/n) : ";
            cin>>ch;
        }while(ch=='y' || ch=='Y');
    }
    else if(ch=='n' || ch=='N')
    {
        cout<<"Exiting program ......"<<endl;
    }
    else
    cout<<"Wrong input !"<<endl;*/

 return 0;
}