/**
 * @param {string} path
 * @return {string}
 */
var simplifyPath = function(path) {
    let stack = [];
    for(let x of path.split('/'))
        stack.push(x);
    let ans = ["/"];
    for(let x of stack){
        if(x != "" && x != "."){
            if(x == ".."){
                ans.pop();
                ans.pop();
            }
            else{
                ans.push(x);
                ans.push("/");
            }
        }
    }
    if(ans.length > 1)
        ans.pop();
    else if(ans.length == 0)
        return "/"
    
    if(ans[0] != "/")
        return "/"+ans.join("")
    return ans.join("");
        
};