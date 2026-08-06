const fs = require("fs");
let N = Number(fs.readFileSync(0).toString().trim().split(" "));

let res = "";

for(let i = 1; i < N + 1; i++){
    for(let j = 1; j < i + 1; j++){
        res += i + " ";
    }
    res += "\n";
}

console.log(res);