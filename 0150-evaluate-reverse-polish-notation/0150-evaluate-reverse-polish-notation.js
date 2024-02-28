/**
 * @param {string[]} tokens
 * @return {number}
 */
var evalRPN = function(tokens) {
    let numbers = [];
    for(let x of tokens){
        if(x == "+" || x == "*" || x == "-" || x == "/"){
            let z = parseInt(numbers[numbers.length - 1]);
            numbers.pop();
            let y = parseInt(numbers[numbers.length - 1]);
            numbers.pop();
            if(x == "+")
                numbers.push(y + z);
            else if(x == "*")
                numbers.push(y * z);
            else if(x == "-")
                numbers.push(y - z);
            else{
                // if(z <= 0)
                //     numbers.push(0)
                // else
                    numbers.push(Math.trunc(y / z))
            }   
        }else{
            numbers.push(x);
        }
        console.log(numbers)
    }
    return numbers[0]
};