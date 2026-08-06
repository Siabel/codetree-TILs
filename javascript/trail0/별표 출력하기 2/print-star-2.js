const fs = require("fs");
let N = fs.readFileSync(0).toString().trim().split(" ");

let res = "";

for(let i = N; i > 0; i--){
    for(let j = 0; j < i; j++){
        res += "* ";
    }
    res += "\n";
}

console.log(res);