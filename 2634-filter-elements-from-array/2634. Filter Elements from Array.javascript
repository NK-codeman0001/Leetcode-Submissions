/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    let tmp= new Array;
    arr.forEach((ele,i)=>{
        if(fn(ele,i)){
            tmp.push(ele);
        };
    });
    return tmp;
};