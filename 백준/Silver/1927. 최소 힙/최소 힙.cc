#include <iostream>
#include <utility>
#include <vector>
using namespace std;

class MinHeap {
private:
    vector<int> heap;

    void heapifyUp(int i){
        while(i > 0){
            int parent = (i - 1) / 2;

            if(heap[parent] > heap[i]){
                swap(heap[parent], heap[i]);
                i = parent;
            } else {
                break;
            }
        }
    }

    void heapifyDown(int i ){
        int n = heap.size();

        while (true) {
            int left = i * 2 + 1;
            int right = i * 2 + 2;
            int smallest = i;

            if(left < n && heap[left] < heap[smallest]){
                smallest = left;
            }
            if(right < n && heap[right] < heap[smallest]){
                smallest = right;
            }
            if(smallest != i){
                swap(heap[smallest], heap[i]);
                i = smallest;
            }else{
                break;
            }
        }
    }

public:
    void push(int val) {
        heap.push_back(val);
        heapifyUp(heap.size() - 1);
    }
    void pop(){
        heap[0] = heap.back();
        heap.pop_back();
        heapifyDown(0);
    }
    int  top()         {return heap[0]; } 
    bool empty()       { return heap.empty();}
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);       

    int N; cin >> N;
    MinHeap heap;
    while(N--){
        int x; cin>>x;
        if(x>0){
            heap.push(x);
        }
        else{
            if(heap.empty()){
                cout << "0\n"; 
                continue;
            }
            cout << heap.top() << "\n";
            heap.pop();
        }
    }

    return 0;
}