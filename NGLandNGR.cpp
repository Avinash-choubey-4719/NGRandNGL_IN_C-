#include<bits/stdc++.h>
using namespace std;

vector<int> nearestGreaterRight(int arr[], int n){
    vector<int> result;
    stack<int> s;

    for(int i = n - 1;i>=0;i--){
        if(s.empty() == true){
            result.push_back(-1);
            s.push(arr[i]);
        }

        else if(s.empty() == false && s.top() > arr[i]){
            result.push_back(s.top());
            s.push(arr[i]);
        }

        else if(s.empty() == false && arr[i] > s.top()){
            while(s.empty() == false && s.top() < arr[i]){
                s.pop();
            }

            if(s.empty() == true){
                result.push_back(-1);
                s.push(arr[i]);
            }
            else{
                result.push_back(s.top());
                s.push(arr[i]);
            }
        }
    }

    reverse(result.begin(), result.end());

    return result;
}

vector<int> nearestGreaterLeft(int arr[], int n){
    stack<int> s;
    vector<int> result;

    for(int i = 0;i<n;i++){
        if(s.empty() == true){
            result.push_back(-1);
            s.push(arr[i]);
        }

        else if(s.empty() == false && s.top() > arr[i]){
            result.push_back(s.top());
            s.push(arr[i]);
        }

        else if(s.empty() == false && s.top() <= arr[i]){
            while(s.empty() == false && s.top() <= arr[i]){
                s.pop();
            }

            if(s.empty() == true){
                result.push_back(-1);
                s.push(arr[i]);
            }

            else{
                result.push_back(s.top());
                s.push(arr[i]);
            }
        }
    }

    return result;
}

void findLeftGreaterAndRightGreater(int arr[], int n){
    vector<int> leftGreater = nearestGreaterLeft(arr, n);
    vector<int> rightGreater = nearestGreaterRight(arr, n);

    cout<<"nearest Greater"<<endl;

    for(auto itr : leftGreater){
        cout<<itr<<" ";
    }

    cout<<endl;

    for(auto itr : rightGreater){
        cout<<itr<<" ";
    }

    cout<<endl;
}

int main(){
    int arr[] = {2, 3, 1, 4, 5};
    int n = 5;
    findLeftGreaterAndRightGreater(arr, n);
    cout<<endl;
    return 0; 
}