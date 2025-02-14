/*
2349. Design a Number Container System
Design a number container system that can do the following:

Insert or Replace a number at the given index in the system.
Return the smallest index for the given number in the system.
Implement the NumberContainers class:

NumberContainers() Initializes the number container system.
void change(int index, int number) Fills the container at index with the number. If there is already a number at that index, replace it.
int find(int number) Returns the smallest index for the given number, or -1 if there is no index that is filled by number in the system.
*/
class NumberContainers {
public:
    unordered_map<int, int> idx_to_num;
    unordered_map<int, priority_queue<int, vector<int>, greater<int>>> num_to_idx;

    NumberContainers() {
        // nothing to do!!!
    }
    
    void change(int index, int number) {
        idx_to_num[index]=number;
        num_to_idx[number].push(index);
    }
    
    int find(int number) {
        if(!num_to_idx.count(number)) return -1;

        auto& pq=num_to_idx[number];

        while(!pq.empty()){
            int idx=pq.top();

            if(idx_to_num[idx]==number) return idx;

            pq.pop();
        }

        return -1;
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */
