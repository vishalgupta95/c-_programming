ximum Vacation Days
LeetCode wants to give one of its best employees the option to travel among N cities to collect algorithm problems. But all work and no play makes Jack a dull boy, you could take vacations in some particular cities and weeks. Your job is to schedule the traveling to maximize the number of vacation days you could take, but there are certain rules and restrictions you need to follow.

Rules and restrictions:

You can only travel among N cities, represented by indexes from 0 to N-1. Initially, you are in the city indexed 0 on Monday.
The cities are connected by flights. The flights are represented as a N*N matrix (not necessary symmetrical), called flights representing the airline status from the city i to the city j. If there is no flight from the city i to the city j, flights[i][j] = 0; Otherwise, flights[i][j] = 1. Also, flights[i][i] = 0 for all i.
You totally have K weeks (each week has 7 days) to travel. You can only take flights at most once per day and can only take flights on each week's Monday morning. Since flight time is so short, we don't consider the impact of flight time.
For each city, you can only have restricted vacation days in different weeks, given an N*K matrix called days representing this relationship. For the value of days[i][j], it represents the maximum days you could take vacation in the city i in the week j.
You're given the flights matrix and days matrix, and you need to output the maximum vacation days you could take during K weeks.

Example 1:

Input:flights = [[0,1,1],[1,0,1],[1,1,0]], days = [[1,3,1],[6,0,3],[3,3,3]]
Output: 12
Explanation: 
Ans = 6 + 3 + 3 = 12. 

One of the best strategies is:
1st week : fly from city 0 to city 1 on Monday, and play 6 days and work 1 day. 
(Although you start at city 0, we could also fly to and start at other cities since it is Monday.) 
2nd week : fly from city 1 to city 2 on Monday, and play 3 days and work 4 days.
3rd week : stay at city 2, and play 3 days and work 4 days.

Example 2:
Input:flights = [[0,0,0],[0,0,0],[0,0,0]], days = [[1,1,1],[7,7,7],[7,7,7]]
Output: 3
Explanation: 
Ans = 1 + 1 + 1 = 3. 

Since there is no flights enable you to move to another city, you have to stay at city 0 for the whole 3 weeks. 
For each week, you only have one day to play and six days to work. 
So the maximum number of vacation days is 3.

Example 3:
Input:flights = [[0,1,1],[1,0,1],[1,1,0]], days = [[7,0,0],[0,7,0],[0,0,7]]
Output: 21
Explanation:
Ans = 7 + 7 + 7 = 21

One of the best strategies is:
1st week : stay at city 0, and play 7 days. 
2nd week : fly from city 0 to city 1 on Monday, and play 7 days.
3rd week : fly from city 1 to city 2 on Monday, and play 7 days.
*/

#include<iostream>
#include<stdio.h>
#include<cstdio>
#include<string>
#include<cmath>
#include<stdlib.h>
#include<algorithm>
#include<string.h>
#include<cstring>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include<ctime>
#include<stack>
using namespace std;
 
//leetcode 568. Maximum Vacation Days
int T;
int N;
int M;
int K;
class Solution {
public:
    int maxVacationDays(vector<vector<int>>& flights, vector<vector<int>>& days) {
        int N=flights.size();
        int K=days[0].size();
        int** dp=new int*[N];
        for(int i=0;i<N;i++)
        {
            dp[i]=new int[K];
        }
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<K;j++)
            {
                dp[i][j]=-1;
                //cout<<dp[i][j]<<endl;
            }
        }
        dp[0][0]=days[0][0];
        for(int i=1;i<N;i++)
        {
            if(flights[0][i]==1)
            {
                dp[i][0]=days[i][0];
            }
//            else
//            {
//                dp[i][0]=-1;//no reachable
//            }
        }
 
        for(int j=0;j<K-1;j++)
        {
            for(int i=0;i<N;i++)
            {
                if(dp[i][j]==-1)
                {
                    continue;
                }
                for(int k=0;k<N;k++)
                {
                    if(flights[i][k]==0&&i!=k)//can stay in one city for consecutive weeks
                    {
                        continue;
                    }
                    else
                    {
                        dp[k][j+1]=max(dp[k][j+1],dp[i][j]+days[k][j+1]);
                    }
                }
            }
        }
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<K;j++)
            {
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
 
        int ret=0;
        for(int i=0;i<N;i++)
        {
            ret=max(ret,dp[i][K-1]);
        }
        for(int i=0;i<N;i++)
        {
            delete[] dp[i];
        }
        delete[] dp;
        return ret;
    }
};
int main()
{
    freopen("input.txt","r",stdin);
    cin>>T;
    for(int ca=1;ca<=T;ca++)
    {
        cin>>N>>K;
        vector<vector<int>>flights;
        vector<vector<int>>days;
        for(int i=0;i<N;i++)
        {
            flights.push_back(vector<int>());
            for(int j=0;j<N;j++)
            {
                int tmp;
                cin>>tmp;
                flights[i].push_back(tmp);
            }
        }
        for(int i=0;i<N;i++)
        {
            days.push_back(vector<int>());
            for(int j=0;j<K;j++)
            {
                int tmp;
                cin>>tmp;
                days[i].push_back(tmp);
            }
        }
        Solution sol;
        cout<<"Case #"<<ca<<": "<<sol.maxVacationDays(flights,days)<<endl;;
    }
    return 0;
}
