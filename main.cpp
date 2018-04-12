#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
void printscoreboard( vector < vector<int> > );
int randombetween(int, int);
const int MAX_PERIODS = 10;
const int MAX_TEAMS = 4;
const int MIN_PERIODS = 1;
const int MIN_TEAMS = 1;

int main()
{
        srand((int) time(0));
        int periods;
        int teams;
        vector < vector <int> > scoreboard;


        cout<<"How many competitors? ";
        cin>>teams;
        cout<<"How many scoring periods? ";
        cin>>periods;

        if( teams < MIN_TEAMS || periods < MIN_PERIODS || 
                        teams > MAX_TEAMS || periods > MAX_PERIODS )
        {
                cout<<"Must have between "<<MIN_TEAMS<<" and "<<MAX_TEAMS<<" competitors.\n";
                cout<<"and between "<<MIN_PERIODS<<" and "<<MAX_PERIODS<<" periods.\n";
                return 0;
        }
        else
        {
               scoreboard.resize(teams);
               
               for (int row = 0; row < scoreboard.size(); row++)
               {
                    scoreboard[row].resize(periods);
               }

               printscoreboard(scoreboard);
        }
        
        return 0;
}

        //definition
        void printscoreboard(vector < vector<int> > grid)
        {
                cout<<"SCOREBARD\n";

                for(int c = 0; c < grid.size(); c++)
                {
                        cout<<"Player "<<c+1<<": ";   
                        for (int j = 0; j < grid.size(); j++)
                        {
                                grid[c][j] = randombetween(0,9);
                                cout<<grid[c][j]<<"|";
                        }
                cout<<endl;
                }//functionhere
                
        }
        int randombetween(int first,int second)
        {
            if (first > second)
            {
                return second + rand()%(first-second+1);
            }
            else
            {
                return first + rand()%(second-first+1);
            }

        }
       
