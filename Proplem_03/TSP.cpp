#include<iostream>
using namespace std;

const int num_Max_City = 20;


int num_City, m;
int costCity[num_Max_City][num_Max_City];
int costCityMin = 2147483647;
bool bVisited[num_Max_City]; // Kiem tra xem thanh pho i da duoc tham hay chua
int iRed[num_Max_City + 1]; // Luu tru duong di
int costMin = 2147483647;
int cost = 0;


void inputData(){
    cin >> num_City >> m;
    for(int i = 1; i <= m; i++){
        int city_i, city_j, cost_City_i_j;
        cin >> city_i >> city_j >> cost_City_i_j;
        costCity[city_i][city_j] = cost_City_i_j;
        if(costCity[city_i][city_j] < costCityMin){
            costCityMin = costCity[city_i][city_j];
        }
    }
}

void Try(int k){
    for(int v = 1;  v <= num_City; v++){
        if(!bVisited[v]){
            iRed[k] = v;
            bVisited[v] = true;

            cost = cost + costCity[iRed[k-1]][v];
            if(k == num_City){
                if(cost + costCity[v][iRed[1]] < costMin){
                    costMin = cost + costCity[v][iRed[1]];
                }
            }
            else{
                int g = cost + (num_City - k + 1) * costCityMin;
                if(g < costMin){
                    Try(k+1);
                }
            }

            cost = cost - costCity[iRed[k-1]][v];
            bVisited[v] = false;
        }
    }
}

int main(){
    inputData();
    for (int v = 0; v <= num_City; v++)
    {
       bVisited[v] = false;
    }
    
    iRed[1] = 1; // Co dinh thanh pho xuat phat dau tien la 1
    bVisited[1] = true;
    Try(2);
    cout << costMin;
    return 0;
}