#include <iostream>
#include <vector>

using namespace std;

void modificirana_dijkstra(int n, vector<int>& tok, vector<vector<int> >& graf, vector<int>& roditelj){
    vector<int> bio(n, 0);

    for (int i = 0; i < n - 1; i++){
        int tko, koliko = -1;
        for (int j = 0; j < n; j++){
            if (!bio[j] && tok[j] > koliko){
                tko = j;
                koliko = tok[j];
            }
        }
        bio[tko] = 1;
        for (int j = 0; j < n; j++){
            if (min(koliko, graf[tko][j]) > tok[j]){
                tok[j] = min(koliko, graf[tko][j]);
                roditelj[j] = tko;
            }
        }
    }
}


int ford_fulkerson(int n, int m, int start, int end, vector<vector<int> >& graf){
    const int inf = 1e9;
    int networkFlow = 0;
    vector<int> roditelj(n, 0);
    vector<int> tok;

    while(1){   
        tok.clear();
        tok.insert(tok.begin(), n, 0);
        tok[start]=inf;

        modificirana_dijkstra(n, tok, graf, roditelj);
        
        int flow = tok[end];
        if (flow == 0) break;
        networkFlow += flow;

        int tko = end;

        while( tko != start){
            graf[roditelj[tko]][tko] -= flow;
            graf[tko][roditelj[tko]] += flow;
            tko = roditelj[tko];
        }
    }
    return networkFlow;
}

int main(){
    int n, m, start, end, networkFlow = 0;
    cin>>n>>m>>start>>end;

    vector<int> vi(n, 0);
    vector<vector<int> > graf(n, vi);

    int a, b, c;
    for (int i = 0; i < m; i++){
        cin>>a>>b>>c;
        graf[a][b] = c;
    }

    networkFlow += ford_fulkerson(n, m, start, end, graf);
    
    cout<<networkFlow<<endl;
    return 0;
}