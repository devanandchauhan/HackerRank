#include <iostream>
#include <vector>

using namespace std;

// Complete the jumpingOnClouds function below.
int jumpingOnClouds(vector<int> c) {
    int count=0;

    for(int i=0;i<c.size();i++,count++){
        if (i<c.size()-2 && c[i+2]==0) 
                i++;

    }
    // for(int i=0;i<c.size();i++){
    //     if(c[i]==0){
    //         count++;
    //         if (c[i] == c[i + 1]) {
    //             //count++;
    //             i++;
    //         }

    //         else 
    //             count++;
    //     }
    return count-1;

}

int main()
{   
    // initialising the vector 
    vector<int> vec; 
    vec.push_back(0);
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(0);
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(0);

    int result = jumpingOnClouds(vec);

    cout<< result << "\n";

    return 0;
}

