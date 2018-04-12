#include <iostream>
#include <vector>

using namespace std;

const int MAX_PERIODS = 10;
const int MAX_TEAMS = 4;
const int MIN_PERIODS = 1;
const int MIN_TEAMS = 1;

int main()
{
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
     printscoreboard(scoreboard);
        cout<<"SCOREBOARD\n";
        scoreboard.resize(teams);
        for (int row=0; row < scoreboard.size(); row++)
        {       
            scoreboard[row].resize(periods);       
        
        }
        for(int c = 0; c < scoreboard.size(); c++)
        {
            cout<<"Player "<<c+1<<": ";   
            for (int j = 0; j < scoreboard.size(); j++)
            {
               scoreboard[j][c] = 0;
               cout<<scoreboard[j][c]<<endl;
            }
        }
        
    
       
   /* for (int row = 0; row < scoreboard.size(); row++)
    {
        scoreboard[row].resize(periods);
        
        cout<<"Player "<<row+1<<": "<<scoreboard[row][periods]<< "|\n";
         //make scoreboard and fill it with zeros
                
    }
    cout<<endl;
   */
   
       //once created, display the scoreboard
    
   
    }

    void printscoreboard(vector< vector<int> > grid)
    {
        cout<<"SCOREBARD\n";
         //functionhere
    }
  return 0;
}
