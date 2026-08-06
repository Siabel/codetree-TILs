const fs = require("fs");
let N = fs.readFileSync(0).toString().trim().split(" ");

let res = "";

for(let i = 1; i <= N; i++){
    for(let j = 0; j < i * 2 - 1; j++){
        res += "*";
    }
    res += "\n";
}

console.log(res);