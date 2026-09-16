/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    const n = nums.length;
    
    // Create an array of [value, originalIndex] pairs
    const entryindex = nums.map((num, i) => [num, i]);
    
    // Sort pairs numerically by their values
    entryindex.sort((a, b) => a[0] - b[0]);
    
    let l = 0;
    let h = n - 1;
    
    while (l < h) {
        let summ = entryindex[l][0] + entryindex[h][0];
        if (summ === target) break;
        if (summ > target) {
            h--;
        } else {
            l++;
        }
    }
    
    return [entryindex[l][1], entryindex[h][1]];
};
