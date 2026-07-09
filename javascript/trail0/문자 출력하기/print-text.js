const fs = require("fs");
let N = fs.readFileSync(0).toString().trim();

let res = N;

for (i = 1; i < 8; i++){
    res += N;
}

console.log(res);