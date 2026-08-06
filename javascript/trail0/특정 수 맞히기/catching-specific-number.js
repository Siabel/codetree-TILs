const fs = require("fs");
let input = fs.readFileSync(0).toString().trim().split("\n");
let idx = 0;

while (Number(input[idx]) != 25) {
    if(input[idx] < 25){
        console.log("Higher")
    } else if(input[idx] > 25) {
        console.log("Lower")
    }

    idx++;
}

console.log("Good")