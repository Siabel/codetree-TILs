const fs = require("fs");
let input = fs.readFileSync(0).toString().trim().split(" ");

let N = Number(input[0]);
let M = Number(input[1]);

let res = [];

for(let i = 0; i < N; i++){
    for(let j = 0; j < M; j++){
        res += "* ";
    }
    res += "\n";
}

console.log(res);