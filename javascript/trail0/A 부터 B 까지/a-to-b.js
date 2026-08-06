const fs = require("fs");
let input = fs.readFileSync(0).toString().trim().split(" ");
let now = Number(input[0]);
let res = [];

while (now <= input[1]) {
    res += now + " ";
    if(now % 2 == 1){
        now *= 2;
    } else {
        now += 3;
    }
}

console.log(res);