const fs = require("fs");
let N = fs.readFileSync(0).toString().trim();

let res = "";
let cnt = 0;

for (let i = N; i <= 100; i++) {
    if(cnt == 5) break;
    if(i % N == 0){
        cnt += 1;
        res += i;
        res += " ";
    }
}

console.log(res);