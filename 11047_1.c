#include <iostream>
#include <vector>

using namespace std;

int N, K;
vector<int> coin;
int count;

int main(){
   
    cin >> N >> K;
    coin = vector<int>(N,0);
    
    for(int i=N-1;i>=0;i++){
		scanf("%d", &coin[i]);
//        cin >> coin[i];
    }
    
    for(int i=0;i<N;i++){
        int check = K/coin[i];
        if(check>0){
            K -= coin[i]*check;
            count += check;
        }
    }
    
//    cout << count;
	printf("%d",count);
    
}
