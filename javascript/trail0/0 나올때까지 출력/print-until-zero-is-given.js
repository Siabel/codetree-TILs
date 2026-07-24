const fs = require("fs");
let input = fs.readFileSync(0).toString().trim().split("\n");
let idx = 0;

while (true) {
    if(input[idx] == 0)
        break;
    console.log(input[idx]);
    idx++;    
}