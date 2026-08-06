const fs = require("fs");
let n = fs.readFileSync(0).toString().trim();
let now = 1;
let res = "";

for(let i = 0; i < n; i++){
    for(let j = 0; j <= i; j++){
        res += now + " ";
        now++;
    }
    res += "\n";
}

console.log(res);