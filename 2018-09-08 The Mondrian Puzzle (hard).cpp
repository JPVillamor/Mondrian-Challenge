#include<iostream>
#include<vector>

using namespace std;

//goal: fitting non-congruent rects (no 5 x 3 and 3 x 5 rects) in n x n grid, with goal being getting smallest diff between largest
//and smallest rects you used

//maybe can try stringing together possible rectangle sizes through linked lists

class rectSize{
private:
    int a,b;
    bool used=0;
public:
    rectSizes(int c, int d){a=c;b=d;}
    int getArea(){return a*b;}
    void setUsed(){used=1;}
    bool getUsed(){return used;}
};

int diff(int n){
    int totalArea = n*n;
    bool canvas[n][n]; //probably need something that checks if square goes over
    vector<rectSize> rectSizes;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

        }
    }
}

int main(){
    cout<<diff(4)<<endl;
    cout<<diff(8)<<endl;
    cout<<diff(10)<<endl;
    cout<<diff(20)<<endl;
    cout<<diff(25)<<endl;
    cout<<diff(32)<<endl;
    return 0;
}
