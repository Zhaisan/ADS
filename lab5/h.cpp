#include <bits/stdc++.h>
using namespace std;

class MaxHeap {
    public:
    vector<int> a;
    int sz;
    MaxHeap(){
        sz = 0;
    }
    
    int parent(int i){
        return (i - 1) / 2;
    }

    int left(int i){
        return i * 2 + 1;
    }

    int right(int i){
        return i * 2 + 2;
    }

    int getMin(){
        return a[0];
    }
    
    // void insert(int k){
    //     a.push_back(k);
    //     int i = a.size() - 1;
    //     heapify(i);
    // }


    void heapify(int i){
        if (left(i) > sz - 1){
            return;
        }

        int j = left(i);
        if (right(i) < sz and a[left(i)] < a[right(i)])
            j = right(i);
        if (a[i] < a[j]){
            swap(a[i], a[j]);
            heapify(j);
        }
    }

    

    void extractMax(){
        int root = getMin();
        swap(a[0], a[sz - 1]);
        sz--;
        heapify(0);
        for (int i = 0; i < sz; i++){
            cout << a[i] << " ";
        }
    }
};

int main(){
    MaxHeap *heap = new MaxHeap();
    int n, k;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> k;
        heap->a.push_back(k);
        
        heap->sz++;
    }
    for(int i = n - 1; i >= 0; i--)
        heap->heapify(i);
    
    for(int i = 0; i < n; i++){
        cout << heap->a[i] << " ";
    }   
    cout << '\n';

    for(int i = 0; i < n; i++){
        heap->extractMax();
        if(i == n - 1)
            break;
        cout << '\n';
    }
    for(int i = 0; i < n; i++){
        cout << heap->a[i] << " ";
    }
    return 0;
}