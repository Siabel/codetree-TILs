const fs = require("fs");
let arr = fs.readFileSync(0).toString().trim().split(" ");
let res = [];

for (let i = 9; i >= 0; i--) {
    res += arr[i];
}

console.log(res);