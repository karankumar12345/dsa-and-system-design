# 1. Set Matrix Zeroes

### Approach

* Store rows and columns containing `0`.
* Traverse again and make `matrix[i][j] = 0` if `row[i]` or `col[j]` is marked.

### Complexity

* Time: `O(m*n)`
* Space: `O(m+n)`

```cpp
vector<int> row(n,0), col(m,0);

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(matrix[i][j]==0){
            row[i]=1;
            col[j]=1;
        }
    }
}

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(row[i] || col[j]){
            matrix[i][j]=0;
        }
    }
}
```

---

# 2. Pascal's Triangle

### Approach

* Each element depends on the previous element.
* Use:

`ans = ans * (row-i) / i`

### Complexity

* Time: `O(row)`
* Space: `O(row)`

```cpp
long long ans=1;
vector<int> ansRow;
ansRow.push_back(1);

for(int i=1;i<row;i++){
    ans=ans*(row-i);
    ans=ans/i;
    ansRow.push_back(ans);
}
```

---

# 3. Next Permutation

### Approach

1. Find the breakpoint `nums[i] < nums[i+1]`.
2. Find the next greater element from the right and swap.
3. Reverse the remaining part.
4. If no breakpoint exists, reverse the whole array.

### Complexity

* Time: `O(n)`
* Space: `O(1)`

```cpp
void nextPermutation(vector<int>& nums) {
    int n = nums.size();
    int i = n - 2;

    while(i >= 0 && nums[i] >= nums[i + 1]) i--;

    if(i >= 0){
        int j = n - 1;
        while(nums[j] <= nums[i]) j--;
        swap(nums[i], nums[j]);
    }

    reverse(nums.begin() + i + 1, nums.end());
}
```
