/*
1352. Product of the Last K Numbers
Design an algorithm that accepts a stream of integers and retrieves the product of the last k integers of the stream.

Implement the ProductOfNumbers class:

    ProductOfNumbers() Initializes the object with an empty stream.
    void add(int num) Appends the integer num to the stream.
    int getProduct(int k) Returns the product of the last k numbers in the current list. You can assume that always the current list has at least k numbers.

The test cases are generated so that, at any time, the product of any contiguous sequence of numbers will fit into a single 32-bit integer without overflowing.
*/
class ProductOfNumbers {
public:
    vector<int> pre_product;
    int cur_product=1;

    ProductOfNumbers() {
        // nothing to do!!!
    }
    
    void add(int num) {
        if(num==0) pre_product.clear(), cur_product=1;
        else{
            cur_product*=num;
            pre_product.push_back(cur_product);
        }
    }
    
    int getProduct(int k) {
        int sz=pre_product.size();
        
        if(sz<k) return 0;
        else if(sz==k) return pre_product.back();
        else return pre_product.back()/pre_product[sz-k-1];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */
