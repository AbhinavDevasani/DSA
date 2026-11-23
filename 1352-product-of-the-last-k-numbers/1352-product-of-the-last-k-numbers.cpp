class ProductOfNumbers {
public:
    vector<vector<int>> ans;
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        ans.push_back({num});
    }
    
    int getProduct(int k) {
        int product=1;
        for(int i=1;i<=k;i++){
            product=product*ans[ans.size()-i][0];
        }
        return product;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */