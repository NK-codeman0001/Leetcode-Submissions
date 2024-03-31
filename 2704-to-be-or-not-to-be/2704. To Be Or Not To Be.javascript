/**
 * @param {string} val
 * @return {Object}
 */
var expect = function(val) {
    const t_error = (msg)=>{
        throw new Error(msg);
    }
    return{
        toBe: (val2) => {
        return val===val2? true : t_error('Not Equal');
    },
    
    notToBe: (val2) => {
        return val!==val2 ? true : t_error('Equal');
    }
    }
};

/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */