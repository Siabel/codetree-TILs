const fs = require("fs");
let input = fs.readFileSync(0).toString().trim().split("\n");
let n = Number(input[0]);

for(let i = 1; i < n + 1; i++){
    let res = 0;
    let a = Number(input[i].split(" ")[0]);
    let b = Number(input[i].split(" ")[1]);

    for(let j = a; j < b + 1; j++){
        if(j % 2 == 0){
            res += j;
        }
    }
    
    console.log(res);
}