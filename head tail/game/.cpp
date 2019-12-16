#include<iostream>
#include <cstdlib>
#include<time.h>
using namespace std;
int main()
{
    srand(time(0));
    string ht;
    int sel , s , bat , rand() , bow , ttl=0 , ttl1=0,total1=0,total2=0;
    cout<<"            *************************   WELCOME TO THE CRICKET  ***************************";
    cout<<"\n\n\n                             **************ITS 2 OVER MATCH ONLY************\n\n";
    cout<<"CHOOSE HEAD OR TAIL:";
    cin>>ht;
    s=rand()%2;
    if (s==0)
        {
            cout<<"YOU LOSE \nCOMPUTER CHOOSE TO BALL"<<endl;
            sel=1;
        }
        else{

        cout<<"\n                                   ***CONGRATES YOU WON THE TOSE***"<<endl<<endl;
        cout<<"SELECT ANY ONE OF THEM"<<endl<<endl;
        cout<<"1) BATIING"<<endl;
        cout<<"2) BOWLING"<<endl;
        cin>>sel;
        cout<<"****************MATCH START******************"<<endl;
        cout<<"NOTE : USE ONLY NO. FROM 1 TO 6"<<endl<<endl;
        }
        switch(sel)
        {
            case 1:
                for ( int i = 0 ; i < 12 ; i++ )
                {

                    bow = rand() % 10;
                    if ( bow > 6 or bow < 1 )
                    {
                        bow = 6;
                    }
                    cout << " enter your no. : "<<endl;
                    cin >> bat;
                    if (bat<0 || bat>6)
                    {
                        cout<<"YOU BREAK THE RULES .... GAME IS OVER";
                        return 0;
                    }

                    ttl = ttl + bat;
                    total1=ttl-bat;
                    cout << "************    "<<bow<<"    ****************"<<endl;
                    if ( bow == bat )
                        {
                            cout << " GAME OVER\n"<<"YOUR SCORE IS :" << total1 << endl;
                            break;
                        }
                }

                 cout<<"****NOW YOU'R BOWLING****"<<endl;
                 for (int i=0 ; i<12 ; i++)
                {

                    bat=rand()%10;
                    if (bat>6 || bat<1)
                    {
                        bat=6;
                    }
                    cout<<"enter your no. :"<<endl;
                    cin>>bow;
                     if (bow<0 || bow>6)
                    {
                        cout<<"YOU BREAK THE RULES .... GAME IS OVER";
                        return 0;
                    }
                    ttl1=ttl1+bat;
                    total2=ttl1-bat;
                    cout<<"************    "<<bat<<"    ****************"<<endl;
                     if (total2>total1)

                         {
                         cout<<"\nYOU LOSE";return 0;
                         }

                    if (bat == bow)
                    {
                        cout<<"GAME OVER\n"<<"SCORE IS :"<<total2;
                        cout<<"\nYOU WON";
                        return 0;
                    }


                }

            case 2:
                for (int i=0 ; i<12 ; i++)
                {

                    bat = rand() % 10;
                    if (bat > 6 or bat < 1)
                    {
                        bat = 6;
                    }
                    cout<<"enter your no. :"<<endl;
                    cin>>bow;
                     if (bow<0 || bow>6)
                    {
                        cout<<"YOU BREAK THE RULES .... GAME IS OVER";
                        return 0;
                    }
                    ttl = ttl + bat;
                    total1=ttl-bat;
                    cout<<"************    "<<bat<<"    ****************"<<endl;
                    if (bat == bow)
                    {
                        cout<<"GAME OVER\n";
                        cout<<"SCORE IS :"<<total1;
                        cout<<"\nNOW YOU'R BATTING";
                        break;
                    }
                }
                for (int i=0 ; i<12 ; i++)
                {

                    bow = rand() % 10;
                    if (bow>6 or bow<1)
                    {
                        bow = 6;
                    }
                    cout<<"\nenter your no. :"<<endl;
                    cin>>bat;
                     if (bat<0 || bat>6)
                    {
                        cout<<"YOU BREAK THE RULES .... GAME IS OVER";
                        return 0;
                    }
                    ttl1 = ttl1 + bat;
                    total2=ttl1-bat;
                    cout<<"************    "<<bow<<"    ****************"<<endl;
                    if (total2 > total1)
                    {

                        cout<<"\nYOU WON";break;

                    }
                    if (bow == bat)
                        {
                            cout<<"GAME OVER\n"<<"YOUR SCORE IS :"<<total2<<endl;
                            return 0;
                        }
                  }



        }



}










